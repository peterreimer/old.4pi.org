
// Calculating the hfov for spherical mirror

function calculateAngle(){
	with (document.hiddenAngle){
		r = radius.value;
		d = distance.value;
		if (r=="" || d==""){
		alert("Please enter values for radius and distance");
		} else {
		angleRadiant = 2 * Math.asin(r*1 / ( r*1 + d*1 ) ) ;
		angle.value  = Math.round(10*180 / Math.PI * angleRadiant)/10;
		hfov.value   = 360 - angle.value;
		}
	}
}

// PTViewer related stuff

function startPano(n) {
        document.ptviewer.newPanoFromList(n);
}

function autoPan() {
        document.ptviewer.startAutoPan(1,1,1);
}


function GetInfo(newin) {
  flyout=window.open(newin,"flyout","resizable=yes,scrollbars=auto,width=200,height=300,top=100,left=100")
}


function change_img(img_name,img_src) {
document[img_name].src=img_src;
}
function FlatPano(newin) {
  flyout=window.open(newin,"flyout","resizable=yes,scrollbars=auto,width=780,height=375,top=100,left=10")
  flyout.focus();
}

