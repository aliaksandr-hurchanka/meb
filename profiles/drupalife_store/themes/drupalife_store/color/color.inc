<?php
$info = array();

$info['fields'] = array(
  'main_color' => t('Main color'),
  'text' => '',
);

// Color names generated by http://chir.ag/projects/name-that-color
// Then don't need translation.
$info['schemes'] = array(
  'default' => array(
    'title' => 'Wisteria',
    'colors' => array(
      'main_color' => '#8a73bb',
    ),
  ),
  'green' => array(
    'title' => 'Fern',
    'colors' => array(
      'main_color' => '#75bb73',
    ),
  ),
  'cardinal' => array(
    'title' => 'Flush Mahogany',
    'colors' => array(
      'main_color' => '#ce4040',
    ),
  ),
  'violet_red' => array(
    'title' => 'Mulberry',
    'colors' => array(
      'main_color' => '#ce4090',
    ),
  ),
  'dark_purple' => array(
    'title' => 'Purple Heart',
    'colors' => array(
      'main_color' => '#8a40ce',
    ),
  ),
  'blue_steel' => array(
    'title' => 'Shakespeare',
    'colors' => array(
      'main_color' => '#4095ce',
    ),
  ),
  'alyzor' => array(
    'title' => 'Sunset Orange',
    'colors' => array(
      'main_color' => '#fd4843',
    ),
  ),
);

$info['css'] = array('color/color.css');

/**
 * Настройки ниже - пустышки. Они нужны модулю color, даже если мы их не
 * используем в своей теме.
 */

// Путь указывается относительно корня темы.
$info['css'] = array('color/color.css');

// Файлы для копирования. (color.css - копируется автоматически)
$info['copy'] = array();

// Файлы которые будут использоваться в превью.
$info['preview_css'] = 'color/preview.css';
$info['preview_js'] = 'color/preview.js';
$info['preview_html'] = 'color/preview.html';

// Объявление градиентов.
$info['gradients'] = array();

// Координаты для заливки.
$info['fill'] = array();

// Координаты для нарезки изображения.
$info['slices'] = array();

// Базовая картинка.
$info['base_image'] = 'color/base.png';