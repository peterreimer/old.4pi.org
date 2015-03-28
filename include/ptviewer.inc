###
### PTViewer instructions
###
<define-tag instructions >
<table width=400 cellpadding=0 cellspacing=0 border=0><tr><td align=center>
<small>
<en: In order to change the view click into the panorama and move the mouse.
While panning, use control and shift keys to zoom in and out. 
Alternatively use the buttons below the panorama.
Click here for <href url="javascript:GetInfo('instructions')" name="detailed instructions">.>

<de: Um die Blickrichtung zu ändern, einfach ins Panorama klicken und die Maus bewegen.
Während des Schwenken kann mit den Strg und Umschalt Tasten heraus- bzw. hineingezoomt werde.
Alternativ können die Knöpfe unter dem Panorama verwendet werden.
Hier klicken für eine <href url="javascript:GetInfo('instructions')" name="genauere Anleitung">.>
</small>

</td></tr></table>
<br>
</define-tag>

###
### select panorama view
###

<define-tag view >
<preserve number />
<preserve key />
<preserve desc />
<preserve title />
<set-var %attributes />
<tr>
 <td  valign="top" colspan=2><h3 class="thumbs"><get-var title></h3></td>
</tr>
<tr>
 <td valign=top width="150"><a  href="javascript:startPano(<get-var number />)"><img src="thumbs/<get-var key />.jpg" border="0"></a></td>
 <td valign="bottom">
    <p class="thumbs">
    <get-var desc /><br>
  [ <href url="javascript:FlatPano('flat/<get-var key />.<en: en><de: de>.html')" name="postcard"> |
    <href url="javascript:startPano(<get-var number />)" name="movie"> ]
 </td>
</tr>
<restore number />	  
<restore key />	  
<restore desc />	  
<restore title />	  
</define-tag>
