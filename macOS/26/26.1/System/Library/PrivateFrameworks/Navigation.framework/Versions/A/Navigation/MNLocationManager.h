@class CLHeading, MNLocation;
@protocol MNLocationRecorder;

@interface MNLocationManager : NSObject <MNLocationProviderDelegate> {
    void /* unknown type, empty encoding */ _lastHeadingDate;
    void /* function */ locationCorrector;
    void /* unknown type, empty encoding */ mapMatchingProvider;
    void /* unknown type, empty encoding */ _lastLocation;
    void /* unknown type, empty encoding */ _lastHeading;
    void /* unknown type, empty encoding */ _observers;
    void /* unknown type, empty encoding */ _locationProvider;
    void /* unknown type, empty encoding */ _locationStreamContinuation;
    void /* unknown type, empty encoding */ _locationStreamTask;
    void /* unknown type, empty encoding */ _locationProviderType;
    void /* unknown type, empty encoding */ $__lazy_storage_$__locationShifter;
}

@property (class, nonatomic, readonly) MNLocationManager *shared;

@property (nonatomic, readonly) MNLocation *lastLocation;
@property (nonatomic, readonly) CLHeading *lastHeading;
@property (nonatomic, readonly) double expectedGpsUpdateInterval;
@property (nonatomic, readonly) double timeScale;
@property (nonatomic, readonly) long long locationProviderType;
@property (nonatomic, copy) id /* block */ locationCorrector;
@property (nonatomic, retain) id<MNLocationRecorder> locationRecorder;
@property (nonatomic, readonly) BOOL isHeadingAvailable;

- (void)startUpdatingLocation;
- (void)updateDeviceOrientation:(int)a0;
- (void)stopUpdatingHeading;
- (void)stopUpdatingLocation;
- (void)startUpdatingHeading;
- (void)stopAllUpdates;
- (void)useTraceLocationProvider:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)locationProvider:(id)a0 didReceiveError:(id)a1;
- (void)locationProviderDidPauseLocationUpdates:(id)a0;
- (void)pushLocation:(id)a0;
- (BOOL)locationProviderShouldPauseLocationUpdates:(id)a0;
- (void)locationProvider:(id)a0 didUpdateVehicleSpeed:(double)a1 timestamp:(id)a2;
- (void)locationProvider:(id)a0 monitoringDidFailForConditionIdentifier:(id)a1 withError:(id)a2;
- (void)locationProvider:(id)a0 didExitRegion:(id)a1;
- (void)locationProvider:(id)a0 didChangeCoarseMode:(BOOL)a1;
- (void)registerObserver:(id)a0;
- (void)stopMonitoringFor:(id)a0;
- (void)locationProvider:(id)a0 didEnterRegion:(id)a1;
- (void)startMonitoringFor:(id)a0;
- (void)locationProviderDidChangeAuthorizationStatus:(id)a0;
- (void)locationProvider:(id)a0 didUpdateHeading:(id)a1;
- (void).cxx_destruct;
- (void)useGPSLocationProviderWithCLParameters:(id)a0;
- (void)useSimulationLocationProvider:(id)a0;
- (void)locationProviderDidResumeLocationUpdates:(id)a0;
- (void)useHybridLocationProvider;
- (void)locationProvider:(id)a0 didUpdateVehicleHeading:(double)a1 timestamp:(id)a2;
- (id)init;
- (void)locationProvider:(id)a0 didUpdateLocation:(id)a1;

@end
