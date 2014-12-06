
#ifndef OPENAV_AVTK_HELPERS_HXX
#define OPENAV_AVTK_HELPERS_HXX

static void roundedBox(cairo_t* cr, double x, double y, double w, double h)
{
  static const double radius  = 4;
  static const double degrees = 3.14159265 / 180.0;

  cairo_new_sub_path(cr);
  cairo_arc(cr,
            x + w - radius,
            y + radius,
            radius, -90 * degrees, 0 * degrees);
  cairo_arc(cr,
            x + w - radius, y + h - radius,
            radius, 0 * degrees, 90 * degrees);
  cairo_arc(cr,
            x + radius, y + h - radius,
            radius, 90 * degrees, 180 * degrees);
  cairo_arc(cr,
            x + radius, y + radius,
            radius, 180 * degrees, 270 * degrees);
  cairo_close_path(cr);
}

#endif // OPENAV_AVTK_HELPERS_HXX
