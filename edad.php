<?php
// Fecha de nacimiento
$birthDate = new DateTime("1990-12-15");
// Fecha actual
$today = new DateTime();

// Diferencia de años
$age = $today->diff($birthDate)->y;

echo "Edad: $age";
?>
