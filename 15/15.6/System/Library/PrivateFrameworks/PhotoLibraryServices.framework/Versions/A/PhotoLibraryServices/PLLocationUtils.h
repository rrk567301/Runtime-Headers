@interface PLLocationUtils : NSObject

+ (char)canUseCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
+ (struct PLCartesianCoordinate3D { float x0; float x1; float x2; })cartesianCoordinateFromLatitude:(float)a0 longitude:(float)a1;
+ (struct CLLocationCoordinate2D { double x0; double x1; })defaultLocationCoordinate2D;
+ (char)horizontalAccuracyIsCoarse:(double)a0;
+ (char)locationIsCoarse:(id)a0;
+ (id)predicateForAssetWithLocation;
+ (id)predicateForMomentWithLocation;

@end
