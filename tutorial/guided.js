function selectFirst() {
   document.coordinates.selectPanorama.selectedIndex = 0;
   panoFile = document.coordinates.selectPanorama.options[0].text;
}


function getview(pan,tilt,fov) {
   document.coordinates.pan.value  = Math.round(100 * pan) / 100;
   document.coordinates.tilt.value = Math.round(100 * tilt) / 100;
   document.coordinates.fov.value  = Math.round(100 * fov) / 100;
}

function hinzu() {
   with (document.coordinates){
      yaw      = pan.value;
      pitch    = tilt.value;
      hfov     = fov.value;
      step     = steps.value;
      line     = yaw + "," + pitch + "," + hfov + "," + step;
      
      if (step == 0){
        alert("The number of frames has to be at least 1!");
        steps.value = 1;
        steps.focus();
        }
        else {
        NeuerEintrag = new Option(line,line,false,true);
        LOS.options[LOS.length] = NeuerEintrag;
      }
   }
}

function pickMe() {
  with (document.coordinates.LOS){
     for (i = 0; i <= (length - 1); i++)
       if(options[i].selected == true){
          temp  = options[i].text.split(",");
	  pan   = temp[0];
	  tilt  = temp[1];
	  fov   = temp[2];
	  steps = temp[3];
       }
   }
   with (document.coordinates){
      pan.value   = temp[0];
      tilt.value  = temp[1];
      fov.value   = temp[2];
      steps.value = temp[3];
   }   
}

function showSelected() {
   with (document.coordinates){
      document.ptviewer.moveTo(pan.value,tilt.value,fov.value,steps.value);
   }
/*    panA   = pan.value
      tiltA  = tilt.value
      fovA   = fov.value
      stepsA = steps.value*/
//       document.ptviewer.moveTo(0,0,20,2);
}

function deleteAll() {
  document.coordinates.LOS.length  = 0;
}

function createAppletCode() {
   with (document.coordinates.LOS){
      if (length < 2){
         alert("You need at least 2 values!");
      }
    eintraege  = length - 1;
    Startwerte = options[0].text.split(",");
    firstStop  = options[1].text; 
 }
 
  PTV ="<applet name=\"ptviewer\" archive=ptviewer.jar  code=ptviewer.class width=320 height=200 mayscript=true>\n";
  PTV += "<param name=file    value=\"../panoramas/panos/" + panoFile + "\">\n"
  PTV += "<param name=pan     value=" + Startwerte[0] + ">\n"
  PTV += "<param name=tilt    value=" + Startwerte[1] + ">\n"
  PTV += "<param name=fov     value=" + Startwerte[2] + ">\n"
  if (document.coordinates.mass.checked == true){
  PTV += "<param name=mass    value=" + document.coordinates.massValue.value + ">\n"
  }
  PTV += "<param name=inits   value=\"ptviewer:moveTo\(" + firstStop + ");waitWhilePanning()";
  for (i = 2; i <= eintraege; i++){
  
    with (document.coordinates){
       angles = LOS.options[i].text.split(",");
     //  if (smooth.checked == false){
         goHere = angles[0] + "," + angles[1] + "," + angles[2] + "," + angles[3];
     //  } else {
     //    schritte = totalFrames.value / 7;
     //    goHere = angles[0] + "," + angles[1] + "," + angles[2] + "," + Math.round(schritte);
     //  }
       //goHere = options[i].text; 
    }
  
    PTV += ";\n                                    moveTo\(" + goHere + ");waitWhilePanning()";
  }

  if (document.coordinates.autoPan.checked == true){
    PTV +=";\n                                    startAutoPan(0.3,0,1)";
  }
  
  PTV += "\">\n";
  PTV += "</applet>";
  document.coordinates.appletcode.value = PTV;
}

function anzahl() {
  document.coordinates.nummer.value = document.coordinates.LOS.length;
}
  
function loadPanorama() {
   with (document.coordinates.selectPanorama){
     for (i = 0; i <=(length - 1); i++)
       if(options[i].selected == true){
          document.ptviewer.newPanoFromList(i);
	  panoFile = options[i].text;
	  i = length - 1;
       }
   }
}
function deleteSelected() {
   with (document.coordinates.LOS){
     for (i = 0; i <=(length - 1); i++)
       if(options[i].selected == true){
          options[i].text = null;
          for (j = i; j <= (length - 2); j++)
          options[j].text = options[j+1].text;
       length  = length - 1;
       }
   }
}

function start(){
   document.ptviewer.moveTo(180,-90,20,30);
   waitWhilePanning();
   document.ptviewer.moveTo(0,0,90,30);
}

function openPreview() {
  neuesFenster = open("","replayFenster","width=330,height=240");
  neuesFenster.document.open();
  with (neuesFenster.document){
  write("<html><head><title>Preview</title></head>");
  write("<body leftmargin=\"5\" topmargin=\"5\" marginwidth=\"5\" marginheight=\"5\">");
  write(document.coordinates.appletcode.value );
  write("<br><a href=\"javascript:window.close();\">Fenster schlie&szlig;en [x]</a>");
  write("<body></html>");
  }
}

function checkautoPan() {
  with (document.coordinates.autoPan) {
    checked = (checked == true) ? 0 : 1;
  }
}

function checkSmooth() {
  with (document.coordinates.smooth) {
    checked = (checked == true) ? 0 : 1;
  }
}
