###
### H2 commandline
###

#<define-tag h2 endtag=required>
#<table width=100%><tr><td>
#<protect><h2></protect>
#%body
#<protect></h2></protect>
#</td><td width=31>
#<href url="#top" image="$(IMG)/top.png">
#</td></tr></table>
#</define-tag>

###
### USER commandline
###

<define-tag user >
<preserve dir />
<preserve command />
<set-var %attributes />

<p class="bash">peter@debian:<get-var dir />$&nbsp;<b><get-var command /></b>
</p>

<restore command />
<restore dir />
</define-tag>

###
### ROOT commandline
###

<define-tag root >
<preserve dir />
<preserve command />
<set-var %attributes />

<p class="bash">debian:<get-var dir />#&nbsp;<b><get-var command /></b>
</p>

<restore command />
<restore dir />
</define-tag>

###
### OUTPUT
###

<define-tag output >
<preserve output />
<set-var %attributes />

<p class="output"><get-var output /></p>

<restore output />
</define-tag>

##
## box mit script
##

<define-tag script >
<preserve content />
<set-var %attributes />
<center>
<table  border="0" cellspacing="0" cellpadding="1" bgcolor="#4c4c4c" summary="">
<tr>
  <td class="header">
    <table width="100%" border="0" cellspacing="0" cellpadding="10" bgcolor="#ffffff" summary="">
    <tr>
      <td>

      <p class="script"><get-var content />
      </td>
    </tr>
   </table>
   </td>
</tr>
</table>
</center>
<restore content />
</define-tag>

###
### Bild mit Unterschrift
###

<define-tag fig>
<preserve nr />
<preserve content />
<preserve caption />
<set-var %attributes />
<center>
<br>
<get-var content />
<br>
<small><b><en: Fig.><de: Abb.> <get-var nr />: </b><get-var caption /></small>
<br>
</center>
<restore nr />
<restore content />
<restore caption />
</define-tag>


###
### Eintrag auf der logbook Seite
###

<define-tag logbook>
<preserve date />
<preserve news />
<set-var %attributes />
<tr>
  <td valign="top"><p><b><get-var date /></b></td>
  <td valign="top"><ul><get-var news /></ul></td>
</tr>
<restore news />
<restore date />
</define-tag>
