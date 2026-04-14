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

- (double)distanceFromSchoolOfCurrentLocationInMeters;
- (BOOL)isTourist;
- (void)beginMonitoringRegion:(id)a0;
- (void)stopMonitoringRegionWithIdentifier:(id)a0;
- (BOOL)locationEnabled;
- (void)_updatePredictedExitTimesIfTimeElapsed;
- (id)previousLOIAndCurrentLOI;
- (unsigned long long)getCurrentRoutineModeWithCurrentDate:(id)a0;
- (BOOL)preciseLocationEnabled;
- (BOOL)isNearFrequentLocationOfInterest;
- (long long)stateForRegion:(id)a0 withTimeout:(double)a1;
- (void)fetchAllLocationsOfInterest:(id /* block */)a0;
- (id)predictedExitTimes;
- (void)_gotLocation:(id)a0 forLocationOfInterest:(long long)a1;
- (void)invalidateLocationOfInterestCache;
- (void)clearLocationOfInterest;
- (id)predictedLocationsOfInterest;
- (void)updateCurrentLocationOfInterestIfTimeElapsed;
- (id)initWithStateStore:(id)a0 modeGlobals:(id)a1;
- (id)getCurrentLocation;
- (double)_distanceOfCurrentLocationFrom:(id)a0;
- (void)locationOfInterestAtCurrentLocationWithCompletionHandler:(id /* block */)a0;
- (BOOL)isLocationNearKnownTypeLocationOfInterest:(id)a0;
- (double)distanceFromGymOfCurrentLocationInMeters;
- (void)locationManagerGPS:(id)a0 didExitRegionWithIdentifier:(id)a1;
- (void)didChangePreciseLocationEnabled:(BOOL)a0;
- (id)getCurrentLocation_RequestPreciseLocation:(BOOL)a0;
- (id)locationOfInterestAtCurrentLocation;
- (void)getCurrentLocationWithCompletionHandler:(id /* block */)a0;
- (id)getPredictedLocationsOfInterestFromLOIName:(id)a0 startDate:(id)a1;
- (void).cxx_destruct;
- (id)getPredictedExitTimesFromLOIName:(id)a0 startDate:(id)a1;
- (BOOL)isTouristWithCurrentDate:(id)a0;
- (void)updateCurrentLocationOfInterest;
- (id)getCurrentPreciseLocation;
- (void)updateCurrentLocationOfInterestWithCompletionHandler:(id /* block */)a0;
- (void)_handleRoutineError:(id)a0 forThing:(id)a1;
- (void)didChangeLocationEnabled:(BOOL)a0;
- (double)distanceFromWorkOfCurrentLocationInMeters;
- (void)gotState:(id)a0;
- (double)distanceFromHomeOfCurrentLocationInMeters;
- (void)locationManagerGPS:(id)a0 didEnterRegionWithIdentifier:(id)a1;
- (void)updatePredictedLocationsOfInterest;
- (id)_updateLocationsOfInterestWithCurrentLocation:(id)a0;
- (void)fetchLocationsOfInterestVisitedDuring:(id)a0 handler:(id /* block */)a1;
- (BOOL)isNearKnownTypeOrFrequentLocationOfInterest;
- (void)_updatePredictedLocationsOfInterestIfTimeElapsed;
- (id)cachedLocationOfInterestAtCurrentLocation;
- (void)updatePredictedExitTimes;
- (void)_fetchLocationOfInterest:(long long)a0 inGroup:(id)a1;
- (void)_updateCurrentLocationOfInterestIfTimeElapsedWithCompletionHandler:(id /* block */)a0;
- (BOOL)isAvailableLocationOfInterestType:(long long)a0;
- (id)init;
- (BOOL)isNearKnownTypeLocationOfInterest;
- (void)fetchLOILocationOfType:(long long)a0 reply:(id /* block */)a1;
- (id)_currentLocationAndNeedsUpdate_RequestPreciseLocation:(BOOL)a0;
- (id)initWithGPS:(id)a0 routine:(id)a1 stateStore:(id)a2 now:(id)a3 modeGlobals:(id)a4;

@end
