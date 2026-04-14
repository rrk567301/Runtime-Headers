@interface MKGeodesicPolyline : MKPolyline

+ (id)polylineWithPoints:(const struct { double x0; double x1; } *)a0 count:(unsigned long long)a1;
+ (id)polylineWithCoordinates:(const struct CLLocationCoordinate2D { double x0; double x1; } *)a0 count:(unsigned long long)a1;

@end
