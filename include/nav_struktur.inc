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
#<table bgcolor="#ffffff" cellpadding="2" cellspacing="1" border="0" width="150">
</navbar:header>

# normale Einträge
<navbar:prolog type=N>

<tr>
  <td class="mainnav">

</navbar:prolog>

# selektierte Einträge
<navbar:prolog type=S>
<tr>
  <td class="mainnav">
</navbar:prolog>

%body

# Mit diesen Tags wird ein Menüeintrag abgeschlossen.

<navbar:epilog type=N>
     </td>
</tr>
</navbar:epilog>

# Das gleiche wieder für selektierte Menüeinträge
<navbar:epilog type=S>
     </td>

</tr>
</navbar:epilog>

# Zum Schluss noch die Tags, die am Ende eines Menüs eingebunden
<navbar:footer>
#</table>
</navbar:footer>

</navbar:define>

</define-tag>

##
## Defintionen für die Untermenues
##

<define-tag untermenu endtag=required>

# Start WML-navbar definition
<navbar:define name=%0 txtcol_normal="" txtcol_select="">

#
<navbar:header>
</navbar:header>

# normale Einträge
<navbar:prolog type=N>
<tr>
  <td class="subnav">&nbsp;&raquo;&nbsp;
  </navbar:prolog>

# selektierte Einträge
<navbar:prolog type=S>
<tr>
  <td class="subnav">&nbsp;&raquo;&nbsp;
</navbar:prolog>

%body

# Mit diesen Tags wird ein Menüeintrag abgeschlossen.
<navbar:epilog type=N>
  </td>
</tr>
</navbar:epilog>

# Das gleiche wieder für selektierte Menüeinträge
<navbar:epilog type=S>
  </td>
</tr>
</navbar:epilog>

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




