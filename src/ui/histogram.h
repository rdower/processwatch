/******************************************
*               histogram.h
* This is a small library which, given data
* representing a histogram, produces a two-
* dimensional array of strings which
* represent a little ASCII histogram.
******************************************/

typedef struct {
  size_t width, height;
  char ***str;
} histogram;

typedef struct {
  size_t width, height;
  char ***str;
} histogram_legend;

static histogram *generate_histogram() {

}
