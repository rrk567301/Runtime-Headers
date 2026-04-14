@class NSString, MNLocationProviderCLParameters, CLMonitorConfiguration, CLLocationManager, geo_isolater, GEOPerformanceEventLogger;
@protocol MNLocationProviderDelegate;

@interface MNCoreLocationProvider : NSObject <CLLocationManagerDelegate, MNLocationProvider> {
    CLLocationManager *_clLocationManager;
    CLMonitorConfiguration *_clMonitorConfiguration;
    MNLocationProviderCLParameters *_clParameters;
    int _authorizationStatus;
    long long _accuracyAuthorization;
    geo_isolater *_authorizationIsolater;
    NSString *_identifier;
    GEOPerformanceEventLogger *_performanceEventLogger;
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

- (void)stopUpdatingHeading;
- (void)startUpdatingVehicleHeading;
- (void)setDistanceFilter:(double)a0;
- (void)stopMonitoringForIdentifier:(id)a0;
- (void)stopUpdatingVehicleSpeed;
- (void)startUpdatingHeading;
- (id)initWithEffectiveBundleIdentifier:(id)a0;
- (void)startUpdatingLocation;
- (void)_startUpdatingLocationWithDeterminedAuthorization;
- (void)setCLParameters:(id)a0;
- (void)requestLocation;
- (void)startUpdatingVehicleSpeed;
- (id)initWithEffectiveBundle:(id)a0;
- (void)setDesiredAccuracy:(double)a0;
- (void)stopUpdatingVehicleHeading;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)dealloc;
- (void)locationManagerDidPauseLocationUpdates:(id)a0;
- (void)resetForActiveTileGroupChanged;
- (void)locationManagerDidResumeLocationUpdates:(id)a0;
- (void)_createCLInUseAssertion;
- (void)_forceUpdateAuthorizationStatusWithCompletionHandler:(id /* block */)a0;
- (void)startMonitoringForCondition:(id)a0 identifier:(id)a1;
- (id)init;
- (void)stopUpdatingLocation;
- (void)_updateForCLParameters:(id)a0;
- (void)_monitorEventHandlerForMonitor:(id)a0 forEvent:(id)a1;
- (void)locationManager:(id)a0 didUpdateHeading:(id)a1;
- (void).cxx_destruct;
- (void)_createMasqueradedCLMonitor;

@end
