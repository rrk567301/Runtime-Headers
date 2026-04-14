@class NSString, NSBundle, NSTimer, MNSimulatedLocationGenerator, CLSimulationManager, NSMutableArray;
@protocol MNLocationProviderDelegate;

@interface MNSimulationLocationProvider : NSObject <MNLocationProvider> {
    NSTimer *_locationUpdateTimer;
    long long _simulationType;
    MNSimulatedLocationGenerator *_locationGenerator;
    BOOL _simulateGeoFences;
    CLSimulationManager *_simulationManager;
    NSMutableArray *_monitoredGeoFences;
    NSMutableArray *_currentGeoFences;
}

@property (weak, nonatomic) id<MNLocationProviderDelegate> delegate;
@property (retain, nonatomic) NSBundle *effectiveBundle;
@property (copy, nonatomic) NSString *effectiveBundleIdentifier;
@property (readonly, nonatomic) BOOL isAuthorized;
@property (readonly, nonatomic) double expectedGpsUpdateInterval;
@property (readonly, nonatomic) BOOL coarseModeEnabled;
@property (readonly, nonatomic) BOOL isTracePlayer;
@property (readonly, nonatomic) unsigned long long traceVersion;
@property (readonly, nonatomic) double timeScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)startUpdatingLocation;
- (void)stopUpdatingLocation;
- (void)startMonitoringForRegion:(id)a0;
- (void)startUpdatingHeading;
- (void)stopUpdatingHeading;
- (void)stopMonitoringForRegion:(id)a0;
- (void)startUpdatingVehicleSpeed;
- (void)stopUpdatingVehicleSpeed;
- (void)startUpdatingVehicleHeading;
- (void)stopUpdatingVehicleHeading;
- (void)resetForActiveTileGroupChanged;
- (void)updateWithRouteInfo:(id)a0;
- (void)_sendLocationUpdate:(id)a0;
- (id)initWithSimulationType:(long long)a0 routeInfo:(id)a1;

@end
