##
## Hauptmenu in der Navigation
##

#<navbar:jsfuncs>

<define-tag hauptmenu endtag=required>

# Start WML-navbar definition
<navbar:define name=%0
#               txtcol_normal="#4c4c4c"
               txtcol_select="#cc3333"
	       >
<navbar:header>
</navbar:header>

# normale Einträge
<navbar:prolog type=N>
</navbar:prolog>

# selektierte Einträge
<navbar:prolog type=S>
</navbar:prolog>

%body

# Mit diesen Tags wird ein Menüeintrag abgeschlossen.

<navbar:epilog type=N>
::
</navbar:epilog>

# Das gleiche wieder für selektierte Menüeinträge
<navbar:epilog type=S>
::
</navbar:epilog>

# Zum Schluss noch die Tags, die am Ende eines Menüs eingebunden
<navbar:footer>
</navbar:footer>

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

##
##  Hauptnavigation am linken Rand
##

<hauptmenu "topnav">
    <nb_button id=Home       txt="<en: Home><de: Startseite>"      url="$(ROOT)/"      hint="Visit the Panorama Gallery" menu="">
    <nb_button id=Panoramas  txt="<en: Panoramas><de: Panoramen>"  url="$(PANORAMAS)/" hint="Visit the Panorama Gallery" menu="">
    <nb_button id=Objects    txt="<en: Objects><de: Objekte>"      url="$(OBJECTS)/"   hint="Visit the Object Movie Gallery" menu="">
    <nb_button id=Tutorial   txt="<en: Tutorial><de: Tutorial>"    url="$(TUTORIAL)/"  hint="Learn more about the use of PanoTools" menu="">
    <nb_button id=Equipment  txt="<en: Equipment><de: Ausrüstung>" url="$(EQUIPMENT)/" hint="The obligatory Equipment page" menu="">
    <nb_button id=Downloads  txt="<en: Downloads><de: Downloads>"  url="$(DOWNLOADS)/" hint="Go to the Download section" menu="">
    <nb_button id=Links      txt="<en: Links><de: Links>"          url="$(LINKS)/"     hint="What would the web be without links?" menu="">
    <nb_button id=Contact    txt="<en: Contact><de: Kontakt>"      url="$(CONTACT)/"   hint="Please, drop a line" menu="">
</hauptmenu>

##
##  Untermenus
##

<untermenu "dummy">
</untermenu>


<navbar:render name=topnav :a.N:class=nav-n :a.S:class=nav-s menumode=outer select=$(name)>



