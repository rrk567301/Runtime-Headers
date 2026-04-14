@class NSString, NSDate, NSObject, _PASLock;
@protocol ATXLocationManagerGPS, ATXLocationManagerStateStore, ATXLocationParameters, ATXLocationManagerRoutine, OS_dispatch_queue;

@interface ATXLocationManager : NSObject <ATXLocationManagerGPSDelegate, ATXLocationManagerProtocol, ATXPredictedLocationsManagerProtocol, ATXLocationOfInterestManagerProtocol> {
    id<ATXLocationManagerGPS> _gps;
    id<ATXLocationManagerRoutine> _routine;
    id<ATXLocationManagerStateStore> _stateStore;
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_loiUpdateQueue;
    id<ATXLocationParameters> _modeGlobals;
}

@property (retain, nonatomic) NSDate *now;
@property (nonatomic) double predictedNextLOITimeout;
@property (nonatomic) double predictedExitDateTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stringForLOIType:(long long)a0;
+ (id)debugDescriptionForCLLocation:(id)a0;

- (BOOL)isTourist;
- (void)updateCurrentLocationOfInterest;
- (BOOL)locationEnabled;
- (void)clearLocationOfInterest;
- (BOOL)preciseLocationEnabled;
- (id)getPredictedExitTimesFromLOIName:(id)a0 startDate:(id)a1;
- (void)_gotLocation:(id)a0 forLocationOfInterest:(long long)a1;
- (BOOL)isAvailableLocationOfInterestType:(long long)a0;
- (void)beginMonitoringRegion:(id)a0;
- (unsigned long long)getCurrentRoutineModeWithCurrentDate:(id)a0;
- (double)distanceFromWorkOfCurrentLocationInMeters;
- (void)fetchAllLocationsOfInterest:(id /* block */)a0;
- (void)_fetchLocationOfInterest:(long long)a0 inGroup:(id)a1;
- (id)_updateLocationsOfInterestWithCurrentLocation:(id)a0;
- (id)getCurrentPreciseLocation;
- (void)_updateCurrentLocationOfInterestIfTimeElapsedWithCompletionHandler:(id /* block */)a0;
- (void)updateCurrentLocationOfInterestWithCompletionHandler:(id /* block */)a0;
- (void)_updatePredictedExitTimesIfTimeElapsed;
- (id)locationOfInterestAtCurrentLocation;
- (BOOL)isNearKnownTypeOrFrequentLocationOfInterest;
- (void)updateCurrentLocationOfInterestIfTimeElapsed;
- (id)initWithGPS:(id)a0 routine:(id)a1 stateStore:(id)a2 now:(id)a3 modeGlobals:(id)a4;
- (void)gotState:(id)a0;
- (id)getCurrentLocation;
- (void)stopMonitoringRegionWithIdentifier:(id)a0;
- (id)getCurrentLocation_RequestPreciseLocation:(BOOL)a0;
- (double)distanceFromSchoolOfCurrentLocationInMeters;
- (BOOL)isTouristWithCurrentDate:(id)a0;
- (void).cxx_destruct;
- (void)invalidateLocationOfInterestCache;
- (void)fetchLocationsOfInterestVisitedDuring:(id)a0 handler:(id /* block */)a1;
- (id)predictedExitTimes;
- (double)distanceFromGymOfCurrentLocationInMeters;
- (void)didChangePreciseLocationEnabled:(BOOL)a0;
- (void)didChangeLocationEnabled:(BOOL)a0;
- (void)updatePredictedExitTimes;
- (id)initWithStateStore:(id)a0 modeGlobals:(id)a1;
- (id)init;
- (void)locationManagerGPS:(id)a0 didExitRegionWithIdentifier:(id)a1;
- (double)_distanceOfCurrentLocationFrom:(id)a0;
- (void)_handleRoutineError:(id)a0 forThing:(id)a1;
- (BOOL)isNearKnownTypeLocationOfInterest;
- (void)fetchLOILocationOfType:(long long)a0 reply:(id /* block */)a1;
- (void)_updatePredictedLocationsOfInterestIfTimeElapsed;
- (void)locationManagerGPS:(id)a0 didEnterRegionWithIdentifier:(id)a1;
- (id)_currentLocationAndNeedsUpdate_RequestPreciseLocation:(BOOL)a0;
- (long long)stateForRegion:(id)a0 withTimeout:(double)a1;
- (id)predictedLocationsOfInterest;
- (id)getPredictedLocationsOfInterestFromLOIName:(id)a0 startDate:(id)a1;
- (id)previousLOIAndCurrentLOI;
- (BOOL)isNearFrequentLocationOfInterest;
- (double)distanceFromHomeOfCurrentLocationInMeters;
- (BOOL)isLocationNearKnownTypeLocationOfInterest:(id)a0;
- (void)updatePredictedLocationsOfInterest;
- (void)locationOfInterestAtCurrentLocationWithCompletionHandler:(id /* block */)a0;
- (void)getCurrentLocationWithCompletionHandler:(id /* block */)a0;
- (id)cachedLocationOfInterestAtCurrentLocation;

@end
