$link=mysql_connect("localhost","peter","ngc253");
mysql_select_db("panoramas");
$abfrage="SELECT file,place,country FROM panoList WHERE place='Salzburg';";
$ergebnis = mysql_query($abfrage);

while ($zeile = mysql_fetch_row($ergebnis))
{for ($j = 0; $j < mysql_num_fields($ergebnis);$j++)
	{echo "<img src=thumbs/$zeile[$j].jpg>";};
echo "<br>";}
echo "<img src=thumb/'$zeile[0].jpg'>";