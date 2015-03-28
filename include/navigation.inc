<table cellpadding="0" cellspacing="0" border="0" width="206" class="subnav">
<tr>
  <td width="28"  class="subnav_left"><img src="$(IMG)/subnav_topleft.gif"></td>
  <td width="150" class="subnav_top"><p class="subnavTitle">{#SECTION#}</p></td>
  <td width="28"  class="subnav_right"><img src="$(IMG)/subnav_topright.gif"></td>
</tr>
	   
#include "subnav.inc" select=$(select) name=$(name)
###
### Sprachwahl
###
<tr>
  <td class="subnav_left">&nbsp;</td>
  <td class="subnav_top2"><p class="subnavHeader"><en: Language><de: Sprache></p></td>
  <td class="subnav_right">&nbsp;</td>
</tr>
<tr>
  <td class="subnav_left">&nbsp;</td>
  <td> 
    <en: <href url   = "$(WML_SRC_BASENAME).de.html"
               image = "$(IMG)/de.png\" title=\"umschalten auf deutsch"
               hint  = "umschalten auf deutsch">&nbsp;
         <img  src   = "$(IMG)/en.png">>
    <de: <img  src   = "$(IMG)/de.png">&nbsp;
         <href url   = "$(WML_SRC_BASENAME).en.html"
               image = "$(IMG)/en.png\" title=\"switch to english"
               hint  = "switch to english">>
									    
  </td>
  <td class="subnav_right">&nbsp;</td>
</tr>
<tr>
  <td class="subnav_left">&nbsp;</td>
  <td class="subnav_links"><br></td>
  <td class="subnav_right">&nbsp;</td>
</tr>
###
### Suchmaske
###
<tr>
  <td class="subnav_left">&nbsp;</td>
  <td class="subnav_top2"><p class="subnavHeader"><en: Search><de: Suche></p></td>
  <td class="subnav_right">&nbsp;</td>
</tr>
<tr>
    <td class="subnav_left"> </td>
    <td>
        <form method="get" id="search" action="http://duckduckgo.com/">
        <input type="hidden" name="sites"value="4pi.org"/>
        <input type="hidden" name="kt" value="Helvetica"/>
        <input type="text" name="q" maxlength="255" placeholder="DuckDuckGo Search"/>
        <input type="submit" value="DuckDuckGo Search" style="visibility: hidden;" />
        </form> 
    </td>
    <td class="subnav_right"> </td>
</tr>
<tr>
  <td><img src="$(IMG)/subnav_bottomleft.gif"></td>
  <td class="subnav_bottom"><img src="$(IMG)/subnav_bottommiddle.gif"></td>
  <td><img src="$(IMG)/subnav_bottomright.gif"></td>
</tr>
</table>
	   
<br>


