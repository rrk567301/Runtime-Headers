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

- (void)startUpdatingVehicleHeading;
- (void)locationManager:(id)a0 monitoringDidFailForRegion:(id)a1 withError:(id)a2;
- (void)startMonitoringForRegion:(id)a0;
- (void)resetForActiveTileGroupChanged;
- (void)setDistanceFilter:(double)a0;
- (id)initWithEffectiveBundleIdentifier:(id)a0;
- (void)stopUpdatingVehicleHeading;
- (void)stopUpdatingVehicleSpeed;
- (void)stopUpdatingHeading;
- (void)startUpdatingVehicleSpeed;
- (void)startUpdatingLocation;
- (void)startUpdatingHeading;
- (void)stopMonitoringForRegion:(id)a0;
- (void)stopUpdatingLocation;
- (void)requestLocation;
- (id)initWithEffectiveBundle:(id)a0;
- (void)setDesiredAccuracy:(double)a0;
- (void)locationManager:(id)a0 didEnterRegion:(id)a1;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didExitRegion:(id)a1;
- (void)_forceUpdateAuthorizationStatusWithCompletionHandler:(id /* block */)a0;
- (void)locationManagerDidPauseLocationUpdates:(id)a0;
- (void)locationManager:(id)a0 didUpdateHeading:(id)a1;
- (void).cxx_destruct;
- (void)_startUpdatingLocationWithDeterminedAuthorization;
- (void)locationManagerDidResumeLocationUpdates:(id)a0;
- (void)setCLParameters:(id)a0;
- (id)init;
- (void)_updateForCLParameters:(id)a0;
- (void)dealloc;

@end
