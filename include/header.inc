#include "kasten.inc"


<table cellpadding="0" cellspacing="0" border="0" width="100%" class="header">
#<colgroup>
#  <col width="28">
#  <col width="*">
#  <col width="*">
#  <col width="28">
#</colgroup>
<tr>
  <td class="header_left"  width="28"><img src="$(IMG)/subnav_topleft.gif"></td>
  <td class="header_top" align="left" width="150">
  
  <MAP NAME="map">
  <AREA SHAPE="POLY" COORDS="2,21,112,21,112,50,172,50,172,67,22,67,22,50,2,50" HREF="$(ROOT)/" alt="" target="_parent">
  </MAP>
  <img src="$(IMG)/logo.gif" usemap="#map" border="0" alt="4pi.org - Spherical Panoramas"></td>
  <td class="header_top" align="right" width=100%><img src="$(IMG)/header_panorama.jpg"></td>
  <td class="header_right" width="28"><img src="$(IMG)/header_right.png"></td>
</tr>
<tr>
  <td class="header_left" ><img src="$(IMG)/subnav_bottomleft.gif"></td>
  <td class="header_bottom" align="left"><img src="$(IMG)/subnav_bottommiddle.gif"></td>
  <td class="header_bottom" align="right">
# #include "mainnav.inc" select=$(name)
<MAP NAME="nav">
 <AREA SHAPE="RECT" COORDS="5,2,81,18"    
       HREF="$(PANORAMAS)/"
       alt="" 
       target="_parent" 
#       onmouseover="return overlib('Mostly Spherical Panoramas, but also a few cylindrcal', CAPTION, 'Panoramas');" 
#       onmouseout="return nd();"
>
 <AREA SHAPE="RECT" COORDS="92,2,144,18"  
       HREF="$(OBJECTS)/"
       alt=""
       target="_parent" 
#       onmouseover="return overlib('Here you will find both computer generated and real world object movies', CAPTION, 'Objects');" 
#       onmouseout="return nd();"
>
 <AREA SHAPE="RECT" COORDS="155,2,208,18"
       HREF="$(TUTORIAL)/" 
       alt="" 
       target="_parent" 
#       onmouseover="return overlib('How to install and use Panorama Tools under Linux', CAPTION, 'Tutorial');" 
#       onmouseout="return nd();"
>
 <AREA SHAPE="RECT" COORDS="217,2,290,18" 
       HREF="$(EQUIPMENT)/"
       alt="" 
       target="_parent" 
#       onmouseover="return overlib('Stuff i use for shooting panoramas', CAPTION, 'Equipment');" 
#       onmouseout="return nd();"
>
 <AREA SHAPE="RECT" COORDS="300,2,374,18" 
       HREF="$(DOWNLOADS)/" 
       alt="" 
       target="_parent" 
#       onmouseover="return overlib('A few little scripts which make life a bit easier', CAPTION, 'Downloads');" 
#       onmouseout="return nd();"
>
 <AREA SHAPE="RECT" COORDS="384,2,422,18"
       HREF="#"
       alt="" 
       target="_parent" 
#       onmouseover="return overlib('There is much mor to read in the internet', CAPTION, 'Links');" 
#       onmouseout="return nd();"
>
 <AREA SHAPE="RECT" COORDS="433,2,485,18" 
       HREF="$(CONTACT)/" 
       alt="" 
       target="_parent" 
#       onmouseover="return overlib('Comment, Critics? Drop a line either via email or in the guestbook', CAPTION, 'Contact');" 
#       onmouseout="return nd();"
>
</MAP>

  <img src="$(IMG)/navigation.<en: en><de: de>.png" usemap="#nav" border="0" alt=""></td>
  
  
  <td class="header_right"><img src="$(IMG)/subnav_bottomright.gif"></td>
</tr>
</table>

