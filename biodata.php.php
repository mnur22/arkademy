<?php
 $sumber = 'biodata.json';
 $konten = file_get_contents($sumber);
 $data = json_decode($konten);

 echo "<h1 align='center'>BIODATA</h1>";
 echo "<br/>";
 echo "Nama Lengkap :" . $data->nama_lengkap ."<br/>";
 echo "Addres  : " . $data->alamat ."<br>";
 echo "Hobbies  : " . $data->hoby ."<br>";
 echo "is_married  : " . $data->menikah ."<br>";
 echo "Schoolll  : " . $data->school ."<br>";
 echo "skils  : " . $data->Skill ."<br>";
?>
