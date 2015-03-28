function formHandler(){
var URL = document.form.site.options[document.form.site.selectedIndex].value;
window.location.href = URL;
}

document.write('<form name="form">');
document.write('<select name="site" size=1>');
document.write('<option value="">[direct access]');
document.write('<option value="">-----------------------');
document.write('<option value="/panoramas/">PANORAMAS');
document.write('<option value="/panoramas/england.html">&nbsp;&nbsp;>&nbsp;South England');
document.write('<option value="/panoramas/salzburg.html">&nbsp;&nbsp;>&nbsp;Salzburg');
document.write('<option value="/panoramas/lisbon.html">&nbsp;&nbsp;>&nbsp;Lisboa');
document.write('<option value="/panoramas/krefeld.html">&nbsp;&nbsp;>&nbsp;Krefeld');
document.write('<option value="/panoramas/budapest.html">&nbsp;&nbsp;>&nbsp;Budapest');
document.write('<option value="/objects/">OBJECTS');
document.write('<option value="/objects/panohead">&nbsp;&nbsp;>&nbsp;panorama head');
document.write('<option value="/objects/nodal">&nbsp;&nbsp;>&nbsp;nodal point');
document.write('<option value="/objects/cubic">&nbsp;&nbsp;>&nbsp;cubic pano');
document.write('<option value="/objects/sphere">&nbsp;&nbsp;>&nbsp;spherical pano');
document.write('<option value="/tutorial/">TUTORIAL');
document.write('<option value="/equipment/">EQUIPMENT');
document.write('<option value="/downloads/">DOWNLOADS');
document.write('<option value="/links/">LINKS');
document.write('<option value="/links/index.html#tutorials">&nbsp;&nbsp;>&nbsp;tutorials');
document.write('<option value="/links/index.html#photography">&nbsp;&nbsp;>&nbsp;photography');
document.write('<option value="/links/index.html#webdesign">&nbsp;&nbsp;>&nbsp;webdesign');
document.write('<option value="/contact/">CONTACT');
document.write('</select>');
document.write('<input type=button value="Go!" onClick="javascript:formHandler()">');
document.write('</form>');
