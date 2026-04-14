@interface GeohashCodec : NSObject

+ (void)decodeExactly:(id)a0 intoInterimState:(id)a1;
+ (void)decodeGeohash:(id)a0 intoCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; } *)a1;
+ (id)encodeCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0 withPrecision:(long long)a1;

@end
