##
## Box mit Kopfzeile und Schatten
##

<define-tag kasten >
<preserve content />
<preserve width />
<set-var %attributes />

<table width=<get-var width />
       border=0
       cellspacing=0
       cellpadding=0
       bgcolor="#ffffff">
    <tr>
       <td>
       <table bgcolor="#ffffff" cellpadding="2" cellspacing="1" border="0" width="100%">
       <get-var content />
       </table>
       </td>
       <td class="box_rt"><img src="$(IMG)/shd_rt.png"></td>
    </tr>
    <tr>
       <td class="box_bl"><img src="$(IMG)/shd_bl.png"></td>
       <td class="box_br"><img src="$(IMG)/shd_br.png"></td>
    </tr>
</table>

<restore width />
<restore content />
</define-tag>

##
## Box mit Kopfzeile und Schatten im PAge Header
##

<define-tag kasten_header >
<preserve content />
<preserve width />
<set-var %attributes />

<table width=<get-var width />
       border=0
       cellspacing=0
       cellpadding=0
       bgcolor="#ffffff">
    <tr>
       <td>
       <table bgcolor="#ffffff" cellpadding="0" cellspacing="0" border="0" width="100%">
       <get-var content />
       </table>
       </td>
       <td class="box_rt"><img src="$(IMG)/shd_rt.png"></td>
    </tr>
    <tr>
       <td class="box_bl"><img src="$(IMG)/shd_bl.png"></td>
       <td class="box_br"><img src="$(IMG)/shd_br.png"></td>
    </tr>
</table>

<restore width />
<restore content />
</define-tag>
