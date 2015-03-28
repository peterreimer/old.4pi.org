#include "nav_struktur.inc"
<hauptmenu "Panoramas">
    <nb_button id="panoramas_budapest"   url="$(PANORAMAS)/budapest"   txt="<en: Budapest><de: Budapest>"         menu="">
    <nb_button id="panoramas_duesseldorf"   url="$(PANORAMAS)/duesseldorf" txt="<en: Düsseldorf><de: Düsseldorf>"         menu="">
    <nb_button id="panoramas_england"    url="$(PANORAMAS)/england"    txt="<en: England><de: England>"          menu="">
    <nb_button id="panoramas_expo"       url="$(PANORAMAS)/expo"       txt="<en: EXPO 2000><de: EXPO 2000>"        menu="">
    <nb_button id="panoramas_haseluenne" url="$(PANORAMAS)/haseluenne" txt="<en: Haselünne><de: Haselünne>"        menu="">
    <nb_button id="panoramas_koeln"      url="$(PANORAMAS)/koeln"      txt="<en: Cologne><de: Köln>"             menu="">
    <nb_button id="panoramas_danmark"    url="$(PANORAMAS)/danmark"    txt="<en: Danmark><de: Dänemark>"          menu="">
    <nb_button id="panoramas_sweden"     url="$(PANORAMAS)/sweden"     txt="<en: Sweden><de: Schweden>"          menu="">
    <nb_button id="panoramas_krefeld"    url="$(PANORAMAS)/krefeld"    txt="<en: Krefeld><de: Krefeld>"          menu="">
    <nb_button id="panoramas_lisbon"     url="$(PANORAMAS)/lisbon"     txt="<en: Lisbon><de: Lissabon>"           menu="">
    <nb_button id="panoramas_muenchen"   url="$(PANORAMAS)/muenchen"   txt="<en: Munich><de: München>"          menu="">
    <nb_button id="panoramas_paris"      url="$(PANORAMAS)/paris"      txt="<en: Paris><de: Paris>"            menu="">
    <nb_button id="panoramas_salzburg"   url="$(PANORAMAS)/salzburg"   txt="<en: Salzburg><de: Salzburg>"         menu="">
    <nb_button id="panoramas_teaboxes"   url="$(PANORAMAS)/teaboxes"   txt="<en: Teaboxes><de: Teedosen>"         menu="">
</hauptmenu>

#<navbar:render name=Panoramas :a.N:class=nav-n :a.S:class=nav-s menumode=outer select=$(select)>
<navbar:render name=$(name) :a.N:class=nav-n :a.S:class=nav-s menumode=outer select=$(select)>



