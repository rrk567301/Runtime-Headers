@class RTLocationManager, NSMutableArray, RTSignalGeneratorOptions;

@interface RTSignalGenerator : NSObject {
    RTSignalGeneratorOptions *_signalGeneratorOptions;
    RTLocationManager *_locationManager;
    unsigned long long _totalVisitLocationsGeneratedCount;
    unsigned long long _totalTransitionLocationsGeneratedCount;
}

@property (retain) NSMutableArray *generatedLocations;

+ (double)minSpeedToFilterHyperParameter;
+ (double)perpendicularAngleForAngle:(double)a0;
+ (double)anglePerpendicularToLineBetweenLocation1:(id)a0 location2:(id)a1;
+ (double)angleOfLineBetweenCoordinate1:(struct CLLocationCoordinate2D { double x0; double x1; })a0 coordinate2:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
+ (double)angleSweptFromStartAngle:(double)a0 ToEndAngle:(double)a1;
+ (double)arcDistanceForStartLocation:(id)a0 endLocation:(id)a1 centerLocation:(id)a2;
+ (double)latLongDisplacementBetweenCoordinate1:(struct CLLocationCoordinate2D { double x0; double x1; })a0 coordinate2:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
+ (struct CLLocationCoordinate2D { double x0; double x1; })averageCoordinateOfCoordinate1:(struct CLLocationCoordinate2D { double x0; double x1; })a0 coordinate2:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
+ (struct CLLocationCoordinate2D { double x0; double x1; })coordinateAtDisplacement:(double)a0 fromCenterCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 atAngle:(double)a2;
+ (id)locationBetweenLowerDistanceBound:(double)a0 upperDistanceBound:(double)a1 fromStartLocation:(id)a2 endLocation:(id)a3 betweenTargetLowLocation:(id)a4 targetHighLocation:(id)a5;
+ (id)centerProducingArcBetweenLowerDistanceBound:(double)a0 upperDistanceBound:(double)a1 fromStartLocation:(id)a2 endLocation:(id)a3 examiningLatLongDisplacement:(double)a4 fromIntersectingLocation:(id)a5 atAngle:(double)a6;
+ (id)centerProducingArcBetweenLowerDistanceBound:(double)a0 upperDistanceBound:(double)a1 FromStartLocation:(id)a2 endLocation:(id)a3;
+ (id)necessaryCenterOfArcBetweenStartLocation:(id)a0 endLocation:(id)a1 minimumSpeed:(double)a2;
+ (void)injectSignalForSignalGeneratorOptions:(id)a0 locationManager:(id)a1 handler:(id /* block */)a2;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSignalGeneratorOptions:(id)a0 locationManager:(id)a1 generatedLocations:(id)a2;
- (id)initWithSignalGeneratorOptions:(id)a0 locationManager:(id)a1;
- (unsigned long long)locationCountInStoreWithError:(id *)a0;
- (id)addGeneratedLocation:(id)a0 forceInject:(BOOL)a1;
- (id)transitionLocationsBetweenStartLocation:(id)a0 endLocation:(id)a1;
- (id)transitionLocationsAlongArcBetweenStartLocation:(id)a0 endLocation:(id)a1 forCenterLocation:(id)a2;
- (id)transitionLocationsBetweenStartLocation:(id)a0 endLocation:(id)a1 coordinateCalculationBlock:(id /* block */)a2;
- (id)locationsForVisit:(id)a0;
- (id)generateLocations;

@end
