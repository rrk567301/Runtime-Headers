@interface PCLocationUtils : NSObject

+ (double)boundValue:(double)a0 toMin:(double)a1 max:(double)a2;
+ (id)cartesianFromProtoLocation:(id)a0;
+ (void)cleanCurrentVisitWithMissingData:(id)a0;
+ (double)cosineSimilarityBetween:(id)a0 and:(id)a1;
+ (id)currentLocationWithLocationHistory:(id)a0 currentTime:(double)a1;
+ (id)currentLocationWithLocationHistory:(id)a0 visitHistory:(id)a1 currentTime:(double)a2;
+ (double)distanceInMetersBetweenLocation:(id)a0 andLocation:(id)a1;
+ (BOOL)isLocation:(id)a0 withinThreshold:(id)a1;
+ (id)latLonToCartesianWithLatLon:(id)a0;
+ (id)vectorFrom:(id)a0 to:(id)a1;

@end
