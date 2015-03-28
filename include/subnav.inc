###
### Submenu an der linken Seite
###

#<navbar:jsfuncs>

<define-tag submenu endtag=required>

# Start WML-navbar definition
<navbar:define name=%0
              txtcol_normal="#7a6f6a"
              txtcol_select="#443935"
	       >
<navbar:header>
</navbar:header>

# normale Einträge
<navbar:prolog type=N>
<tr>
  <td class="subnav_left">&nbsp;</td>
  <td class="subnav_link">
</navbar:prolog>

# selektierte Einträge
<navbar:prolog type=S>
<tr>
  <td class="subnav_left"><img src="$(IMG)/subnav_leftmark.png"></td>
  <td class="subnav_link">
</navbar:prolog>

%body

# Mit diesen Tags wird ein Menüeintrag abgeschlossen.

<navbar:epilog type=N>
     </td>
  <td class="subnav_right">&nbsp;</td>
</tr>
</navbar:epilog>

# Das gleiche wieder für selektierte Menüeinträge
<navbar:epilog type=S>
     </td>
  <td class="subnav_right">&nbsp;</td>
</tr>
</navbar:epilog>

# Zum Schluss noch die Tags, die am Ende eines Menüs eingebunden
<navbar:footer>
# zwei Leerzeilen vor dem Suchformular, siehe navigation.inc
<tr>
  <td class="subnav_left">&nbsp;</td>
  <td><br></td>
  <td class="subnav_right">&nbsp;</td>
  </tr>
</navbar:define>

</define-tag>

##
## Defintionen für die Menu auf der Startseite
##

#<navbar:jsfuncs>

<define-tag homemenu endtag=required>

# Start WML-navbar definition
<navbar:define name=%0>
<navbar:header>
</navbar:header>

# normale Einträge
<navbar:prolog type=N>
#<tr>
#  <td class="subnav_left">&nbsp;</td>
#  <td class="subnav_news">
</navbar:prolog>

# selektierte Einträge
<navbar:prolog type=S>
<tr>
  <td class="subnav_left">&nbsp;</td>
  <td class="subnav_news">
</navbar:prolog>

%body

# Mit diesen Tags wird ein Menüeintrag abgeschlossen.

<navbar:epilog type=N>
#     </td>
#  <td class="subnav_right">&nbsp;</td>
#</tr>
</navbar:epilog>

# Das gleiche wieder für selektierte Menüeinträge
<navbar:epilog type=S>
     </td>
  <td class="subnav_right">&nbsp;</td>
</tr>
</navbar:epilog>

# Zum Schluss noch die Tags, die am Ende eines Menüs eingebunden
<navbar:footer>
# zwei Leerzeilen vor dem Suchformular, siehe navigation.inc
<tr>
  <td class="subnav_left">&nbsp;</td>
  <td><br></td>
  <td class="subnav_right">&nbsp;</td>
  </tr>
</navbar:define>

</define-tag>


#
# Tag um einen eigenen Menüeintrag zu definieren
#
# Attributte:
#    id      eindeutige ID für den Menüeintrag
#    txt     Text, der für diesen Eintrag angezeigt werden soll
#    url     URL auf die dieser Eintrag verweist
#    menu    Name (ID) eines Untermenüs für diesen Eintrag. Fall kein
#            Untermenü vorhanden ist dann ""
#

<define-tag nb_button>
    <set-var %attributes>
    <navbar:button id     = "<get-var id>"
                   txt    = "<get-var txt>"
		   url    = "<get-var url>"
		   menu   = "<get-var menu>"
		   hint   = "<get-var hint>"
		   target = "_parent">
</define-tag>

<homemenu "Home">
<nb_button
 id="home_select"
 url=""
#include "latest.inc"
 menu="">

<nb_button
 id="home_select"
 url=""
#include "news.inc"
 menu="">
</homemenu>

<submenu "Panoramas">
    <nb_button id="panoramas_berlin"     url="$(PANORAMAS)/berlin.<en: en><de: de>.html"     txt="<en: Berlin><de: Berlin>"         menu="">
    <nb_button id="panoramas_budapest"   url="$(PANORAMAS)/budapest.<en: en><de: de>.html"   txt="<en: Budapest><de: Budapest>"         menu="">
    <nb_button id="panoramas_danmark"    url="$(PANORAMAS)/danmark.<en: en><de: de>.html"    txt="<en: Danmark><de: Dänemark>"          menu="">
    <nb_button id="panoramas_duesseldorf" url="$(PANORAMAS)/duesseldorf.<en: en><de: de>.html"      txt="<en: Düsseldorf><de: Düsseldorf>"          menu="">
    <nb_button id="panoramas_england"    url="$(PANORAMAS)/england.<en: en><de: de>.html"    txt="<en: England><de: England>"          menu="">
    <nb_button id="panoramas_expo"       url="$(PANORAMAS)/expo.<en: en><de: de>.html"       txt="<en: EXPO 2000><de: EXPO 2000>"        menu="">
    <nb_button id="panoramas_haseluenne" url="$(PANORAMAS)/haseluenne.<en: en><de: de>.html" txt="<en: Haselünne><de: Haselünne>"        menu="">
    <nb_button id="panoramas_koeln"      url="$(PANORAMAS)/koeln.<en: en><de: de>.html"      txt="<en: Cologne><de: Köln>"             menu="">
    <nb_button id="panoramas_krefeld"    url="$(PANORAMAS)/krefeld.<en: en><de: de>.html"    txt="<en: Krefeld><de: Krefeld>"          menu="">
    <nb_button id="panoramas_lapalma"    url="$(PANORAMAS)/lapalma.<en: en><de: de>.html"    txt="<en: La Palma><de: La Palma>"           menu="">
    <nb_button id="panoramas_lisbon"     url="$(PANORAMAS)/lisbon.<en: en><de: de>.html"     txt="<en: Lisbon><de: Lissabon>"           menu="">
    <nb_button id="panoramas_muenchen"   url="$(PANORAMAS)/muenchen.<en: en><de: de>.html"   txt="<en: Munich><de: München>"          menu="">
    <nb_button id="panoramas_paris"      url="$(PANORAMAS)/paris.<en: en><de: de>.html"      txt="<en: Paris><de: Paris>"            menu="">
    <nb_button id="panoramas_salzburg"   url="$(PANORAMAS)/salzburg.<en: en><de: de>.html"   txt="<en: Salzburg><de: Salzburg>"         menu="">
    <nb_button id="panoramas_sweden"     url="$(PANORAMAS)/sweden.<en: en><de: de>.html"     txt="<en: Sweden><de: Schweden>"          menu="">
    <nb_button id="panoramas_teaboxes"   url="$(PANORAMAS)/teaboxes.<en: en><de: de>.html"   txt="<en: Teaboxes><de: Teedosen>"         menu="">
</submenu>

<submenu "Tutorial">
    <nb_button id="tutorial_introduction" url="$(TUTORIAL)/"             txt="<en: Introduction><de: Einleitung>" menu="">
    <nb_button id="tutorial_installation" url="$(TUTORIAL)/installation.<en: en><de: de>.html" txt="<en: Installation><de: Installation>" menu="">
    <nb_button id="tutorial_scripts"      url="$(TUTORIAL)/scripts.<en: en><de: de>.html"      txt="<en: Scripts><de: Skripte>" menu="">
    <nb_button id="tutorial_calibration"  url="$(TUTORIAL)/calibration.<en: en><de: de>.html"  txt="<en: Calibration><de: Kalibrierung>" menu="">
    <nb_button id="tutorial_shear"        url="$(TUTORIAL)/shear.<en: en><de: de>.html"        txt="<en: Shear><de: Scher>" menu="">
    <nb_button id="tutorial_mirror"       url="$(TUTORIAL)/mirror.<en: en><de: de>.html"       txt="<en: Mirror Panoramas><de: Spiegel Panoramen>" menu="">
    <nb_button id="tutorial_ptmorpher"    url="$(TUTORIAL)/ptmorpher.<en: en><de: de>.html"    txt="<en: PTMorpher><de: PTMorpher>" menu="">
    <nb_button id="tutorial_guidedTour"    url="$(TUTORIAL)/guided.html" txt="<en: PTViewer><de: PTViewer>" menu="">
</submenu>

<submenu "Equipment">
    <nb_button id="equipment_panohead" url="$(EQUIPMENT)/"         txt="<en: Panorama head><de: Panorama Kopf>" menu="">
    <nb_button id="equipment_tabletop" url="$(EQUIPMENT)/tabletop.<en: en><de: de>.html"  txt="<en: Tabletop><de: Tabletop>" menu="">
</submenu>

<submenu "Objects">
    <nb_button id="objects_bighead"    url="$(OBJECTS)/bighead.<en: en><de: de>.html"    txt="Large PanoHead" menu="">
    <nb_button id="objects_schroiber"  url="$(OBJECTS)/ptmorpher.<en: en><de: de>.html"  txt="PTMorpher" menu="">
    <nb_button id="objects_sphere"     url="$(OBJECTS)/sphere.<en: en><de: de>.html"     txt="Spherical Panorama" menu="">
</submenu>

<submenu "Links">
    <nb_button id="links_PanoTools"    url="#PanoTools"         txt="<en: Panorama Tools><de: Panorama Tools>" menu="">
    <nb_button id="links_photography"  url="#photography"       txt="<en: Photography><de: Photographie>" menu="">
    <nb_button id="links_webdesign"    url="#webdesign"         txt="<en: Webdesign><de: Webdesign>" menu="">
</submenu>

<submenu "Contact">
    <nb_button id="contact_address"     url="#address"         txt="<en: Address><de: Adresse>" menu="">
</submenu>




<navbar:render name=$(name) :a.N:class=nav-n :a.S:class=nav-s menumode=outer select=$(select)>

