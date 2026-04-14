@class RTVehicleLocationProvider, RTDistanceCalculator, NSString;

@interface RTPredictedLocationOfInterestProviderVehicleLocation : NSObject <RTPredictedLocationOfInterestProvider>

@property (readonly, nonatomic) RTVehicleLocationProvider *vehicleLocationProvider;
@property (readonly, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchPredictedExitDatesWithCriteria:(id)a0 handler:(id /* block */)a1;
- (id)initWithVehicleLocationProvider:(id)a0 distanceCalculator:(id)a1;
- (BOOL)parkingEventIsUsualAndNearHome:(id)a0;
- (void)fetchPredictedLocationsOfInterestWithCriteria:(id)a0 handler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)locationOfInterestFromVehicleEvent:(id)a0;
- (void)fetchNextPredictedLocationsOfInterestWithCriteria:(id)a0 handler:(id /* block */)a1;
- (id)init;
- (id)predictedLocationOfInterestFromVehicleEvent:(id)a0;
- (BOOL)requiresRoutineEnablement;

@end
