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

- (void)beginMonitoringRegion:(id)a0;
- (void)locationManagerGPS:(id)a0 didExitRegionWithIdentifier:(id)a1;
- (BOOL)isLocationNearKnownTypeLocationOfInterest:(id)a0;
- (void)invalidateLocationOfInterestCache;
- (id)predictedLocationsOfInterest;
- (double)distanceFromHomeOfCurrentLocationInMeters;
- (id)getPredictedLocationsOfInterestFromLOIName:(id)a0 startDate:(id)a1;
- (void)_updateCurrentLocationOfInterestIfTimeElapsedWithCompletionHandler:(id /* block */)a0;
- (double)distanceFromSchoolOfCurrentLocationInMeters;
- (void)stopMonitoringRegionWithIdentifier:(id)a0;
- (void)fetchLOILocationOfType:(long long)a0 reply:(id /* block */)a1;
- (void)locationManagerGPS:(id)a0 didEnterRegionWithIdentifier:(id)a1;
- (BOOL)isTourist;
- (void)fetchLocationsOfInterestVisitedDuring:(id)a0 handler:(id /* block */)a1;
- (id)locationOfInterestAtCurrentLocation;
- (unsigned long long)getCurrentRoutineModeWithCurrentDate:(id)a0;
- (void)_updatePredictedLocationsOfInterestIfTimeElapsed;
- (void)updateCurrentLocationOfInterestIfTimeElapsed;
- (id)initWithStateStore:(id)a0 modeGlobals:(id)a1;
- (id)cachedLocationOfInterestAtCurrentLocation;
- (BOOL)preciseLocationEnabled;
- (void)didChangePreciseLocationEnabled:(BOOL)a0;
- (id)getCurrentPreciseLocation;
- (BOOL)locationEnabled;
- (id)getCurrentLocation_RequestPreciseLocation:(BOOL)a0;
- (long long)stateForRegion:(id)a0 withTimeout:(double)a1;
- (BOOL)isAvailableLocationOfInterestType:(long long)a0;
- (BOOL)isTouristWithCurrentDate:(id)a0;
- (double)distanceFromGymOfCurrentLocationInMeters;
- (void)updateCurrentLocationOfInterestWithCompletionHandler:(id /* block */)a0;
- (BOOL)isNearKnownTypeOrFrequentLocationOfInterest;
- (id)getCurrentLocation;
- (id)_currentLocationAndNeedsUpdate_RequestPreciseLocation:(BOOL)a0;
- (void)_updatePredictedExitTimesIfTimeElapsed;
- (id)predictedExitTimes;
- (void)_handleRoutineError:(id)a0 forThing:(id)a1;
- (void)locationOfInterestAtCurrentLocationWithCompletionHandler:(id /* block */)a0;
- (id)_updateLocationsOfInterestWithCurrentLocation:(id)a0;
- (void).cxx_destruct;
- (void)updateCurrentLocationOfInterest;
- (id)previousLOIAndCurrentLOI;
- (void)clearLocationOfInterest;
- (void)updatePredictedLocationsOfInterest;
- (void)_gotLocation:(id)a0 forLocationOfInterest:(long long)a1;
- (id)initWithGPS:(id)a0 routine:(id)a1 stateStore:(id)a2 now:(id)a3 modeGlobals:(id)a4;
- (BOOL)isNearFrequentLocationOfInterest;
- (void)_fetchLocationOfInterest:(long long)a0 inGroup:(id)a1;
- (void)fetchAllLocationsOfInterest:(id /* block */)a0;
- (void)getCurrentLocationWithCompletionHandler:(id /* block */)a0;
- (void)didChangeLocationEnabled:(BOOL)a0;
- (BOOL)isNearKnownTypeLocationOfInterest;
- (id)getPredictedExitTimesFromLOIName:(id)a0 startDate:(id)a1;
- (double)distanceFromWorkOfCurrentLocationInMeters;
- (void)updatePredictedExitTimes;
- (double)_distanceOfCurrentLocationFrom:(id)a0;
- (void)gotState:(id)a0;
- (id)init;

@end
