// show the Color Palette
function showColorPalette() {
   var farben = window.open('colors.html', 'colorPalette', 
   'width=250,height=175,scrollbars=no,resizable=no,status=no');

   if (farben.opener == null) {
       farben.opener = window;
   }
}


function createAppletCode() {
	PTV  = "<applet";
	with(document.basics){
		appletAttributes  = " name=\"" + appletName.value + "\"";
		appletAttributes += " archive=\"" + appletArchive.value + "\"";
		appletAttributes += " code=ptviewer.class";
		appletAttributes += " width=\"" + appletWidth.value + "\"";
		appletAttributes += " height=\"" + appletHeight.value + "\"";
		appletAttributes += (appletMayscript.checked == true) ? " mayscript=true" : "";
		appletView  = (ptvViewWidth.value != "")      ? "<param name=view_width  value=\"" + ptvViewWidth.value +  "\">\n" : "";
		appletView += (ptvViewHeight.value != "")     ? "<param name=view_height value=\"" + ptvViewHeight.value + "\">\n" : "";
		appletView += (ptvViewX.value != "")          ? "<param name=view_x      value=\"" + ptvViewX.value +      "\">\n" : "";
		appletView += (ptvViewY.value != "")          ? "<param name=view_y      value=\"" + ptvViewY.value +      "\">\n" : "";
		appletView += (ptvBgColor.value != "#c0c0c0") ? "<param name=bgcolor     value=\"" + ptvBgColor.value +    "\">\n" : "";
		appletView += (ptvQuality[0].checked == true)  ? "<param name=quality     value=\"" + ptvQuality[0].value + "\">\n" : "";
		appletView += (ptvQuality[1].checked == true) ? "<param name=quality     value=\"" + ptvQuality[1].value + "\">\n" : "";
		appletView += (ptvQuality[2].checked == true) ? "<param name=quality     value=\"" + ptvQuality[2].value + "\">\n" : "";
		appletView += (ptvQuality[3].checked == true) ? ""                                                            : "";
		appletView += (ptvCursor[0].checked == true)  ? "<param name=cursor      value=\"" + ptvCursor[0].value + "\">\n" : "";
		appletView += (ptvCursor[1].checked == true)  ? "<param name=cursor      value=\"" + ptvCursor[1].value + "\">\n" : "";
		appletView += (ptvCursor[2].checked == true)  ? "" : "";
		appletView += (ptvMass.checked == true)       ? "<param name=mass        value=\"" + ptvMassValue.value + "\">\n" : "";
	}
	PTV += appletAttributes;
	PTV += ">\n"
	PTV += "<param name=file        value=\"ptviewer:0\">\n";
	PTV += "<param name=pano0       value=\"{file=../panoramas/panos/ystad.jpg}\">\n";
	PTV += appletView;
	PTV += "</applet>";
	document.AppletDetails.appletcode.value = PTV;
}

function openPreview() {
//  winprops = 'height='+h+',width='+w+',top='+wint+',left='+winl+',scrollbars='+scroll+',resizable'
//  win = window.open(mypage, myname, winprops)
  
  var previewBorder = 5;
  var previewWidth  = document.basics.appletWidth.value  * 1 + 2 * previewBorder;
  var previewHeight = document.basics.appletHeight.value * 1 + 2 * previewBorder + 100;
  
  //winprops = 'height='+previewHeight+',width='+previewWidth+',top='100',left='100',resizable'
  //winprops = 'height=250,width=320,top='100',left='100',resizable';
  neuesFenster = open("","replayFenster","width="+previewWidth+",height="+previewHeight+",top=200,left=250");
  //neuesFenster = open("","replayFenster",winprops);
  neuesFenster.document.open();
  with (neuesFenster.document){
  write("<html><head><title>Preview</title></head>");
  write("<body leftmargin=\"5\" topmargin=\"5\" marginwidth=\"5\" marginheight=\"5\">");
  write(document.AppletDetails.appletcode.value );
  write("<br><a href=\"javascript:window.close();\">Fenster schlie&szlig;en [x]</a>");
  write(previewWidth + "x" + previewHeight);
  write("<body></html>");
  }
}


/* 
   State variables to keep track of current tab and folder
*/
var currentTab = "Tab2";
var currentFolder = "Folder2";

// Function to switch tabs and folders
function turnOn(newTab, newFolder) {
    if (currentTab != newTab) {
        // Adjust the background colors for the tabs
        var thisTab = document.getElementById(newTab);
        thisTab.style.backgroundImage = "url(img/tabOn.gif)";
        currentzIndex = thisTab.style.zIndex;
        thisTab.style.zIndex = "10";
        var oldTab = document.getElementById(currentTab);
        oldTab.style.backgroundImage = "url(img/tabOff.gif)";
        oldTab.style.zIndex = currentzIndex;

        // Make the new tab the current tab
        currentTab = newTab;

        // Adjust the visibility and background color for the folders
        var thisFolder = document.getElementById(newFolder);
        thisFolder.style.visibility = "visible";
        thisFolder.style.backgroundColor = "#f2f2f2";
        var oldFolder = document.getElementById(currentFolder);
        oldFolder.style.visibility = "hidden";

        // Make the new folder the current folder
        currentFolder = newFolder;
    }
}
