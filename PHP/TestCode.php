<?php

echo "===========TIPE DATA INTIGER==========\n";

//tipe data intiger
echo "Decimal : ";
var_dump(1234);

echo "octal : ";
var_dump(0123);

echo "Hexadecimal : ";
var_dump(0x1A);

echo "Binary : ";
var_dump(0b11111111);

echo "Underscore di Number : ";
var_dump(1_234_567);

echo "==============FLOATING=============\n";

// floating
echo "floating point :";
var_dump(1.234);

echo "floating point dengan E notation :(1.7 x 1000) :";
var_dump(1.7e3);

echo "floating point dengan E notation :(1.7 x 0.001) :";
var_dump(1.7e-3);

echo "underscore di floating point :";
var_dump(1_234.234);

// echo "=============INTIGER OVERFLOW============\n";

// // intiger overflow
// echo "overflow";
// var_dump(9223372836854775888);

echo "============VARIABLE============\n";

// variable
$name = "arfienade aycia munwanar";
// $name = null;
$age = 18;
$sekolah = "SMK Nusantara 1 Ciputat";
$jurusan = "RPL (Rekayasa perangkat lunak)";
$hobi = "Futsal dan Berenang";

// unset($name); //untuk menghapus variable
echo "nama = $name";
echo "\n";
echo "umur = $age";
echo "\n";
echo "sekolah = ";
echo $sekolah;
echo "\n";
echo "Jurusan = ";
echo $jurusan;
echo "\n";
echo "Hobi = ";
echo $hobi;
echo "\n";

echo "null ? ";
var_dump(isset($name));
echo "\n";

echo <<<AR
nama saya $name
saya bersekolah di $sekolah
jurusan yang saya ambil adalah $jurusan
hobi saya $hobi

AR;

echo "============CONSTANT============\n";

define("NAMA", "Arfienade Munawar");
define("KELAS", "10 PPLG");

echo "nama :";
echo NAMA;
echo "\n";
echo "Kelas :";
echo KELAS;
echo "\n";

echo "============ARRAY============\n";

$value = [
    11,
    12,
    13,
    14,
];
var_dump($value);
echo "\n"; // enter untuk pemisah
var_dump(count($value));

$names = array("arfi", "nade", "munawar");
var_dump($names);
echo "\n"; 
var_dump($names[0]); 

$names[0] = "arvinc"; 
var_dump($names);