@class NSString, MNLocationProviderCLParameters, CLLocationManager, NSObject, geo_isolater;
@protocol OS_dispatch_queue, MNLocationProviderDelegate;

@interface MNCoreLocationProvider : NSObject <CLLocationManagerDelegate, MNLocationProvider> {
    CLLocationManager *_clLocationManager;
    NSObject<OS_dispatch_queue> *_locationsQueue;
    MNLocationProviderCLParameters *_clParameters;
    int _authorizationStatus;
    long long _accuracyAuthorization;
    geo_isolater *_authorizationIsolater;
    NSString *_identifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MNLocationProviderDelegate> delegate;
@property (readonly, nonatomic) BOOL isAuthorized;
@property (nonatomic) int headingOrientation;
@property (readonly, nonatomic) double expectedGpsUpdateInterval;
@property (readonly, nonatomic) BOOL coarseModeEnabled;
@property (readonly, nonatomic) BOOL isTracePlayer;
@property (readonly, nonatomic) unsigned long long traceVersion;
@property (readonly, nonatomic) double timeScale;

- (void)startUpdatingLocation;
- (id)initWithEffectiveBundleIdentifier:(id)a0;
- (void)setDesiredAccuracy:(double)a0;
- (void)setDistanceFilter:(double)a0;
- (void)startMonitoringForRegion:(id)a0;
- (void)stopUpdatingHeading;
- (void)stopUpdatingVehicleHeading;
- (void)startUpdatingVehicleHeading;
- (void)stopMonitoringForRegion:(id)a0;
- (void)stopUpdatingLocation;
- (void)stopUpdatingVehicleSpeed;
- (void)requestLocation;
- (void)startUpdatingVehicleSpeed;
- (id)initWithEffectiveBundle:(id)a0;
- (void)startUpdatingHeading;
- (void)locationManager:(id)a0 didExitRegion:(id)a1;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didEnterRegion:(id)a1;
- (void)resetForActiveTileGroupChanged;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)_forceUpdateAuthorizationStatusWithCompletionHandler:(id /* block */)a0;
- (void)locationManager:(id)a0 monitoringDidFailForRegion:(id)a1 withError:(id)a2;
- (void)dealloc;
- (void)locationManager:(id)a0 didUpdateHeading:(id)a1;
- (void).cxx_destruct;
- (void)locationManagerDidPauseLocationUpdates:(id)a0;
- (void)_updateForCLParameters:(id)a0;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)locationManagerDidResumeLocationUpdates:(id)a0;
- (void)_startUpdatingLocationWithDeterminedAuthorization;
- (id)init;
- (void)setCLParameters:(id)a0;

@end
