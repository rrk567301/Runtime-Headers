@class NSString, NSMutableDictionary, MNSimulatedLocationGenerator, MNDispatchTimer, GEOPerformanceEventLogger;
@protocol MNLocationProviderDelegate;

@interface MNSimulationLocationProvider : NSObject <MNLocationProvider> {
    MNDispatchTimer *_locationUpdateTimer;
    long long _simulationType;
    MNSimulatedLocationGenerator *_locationGenerator;
    BOOL _simulateGeoFences;
    NSMutableDictionary *_monitoredGeoFences;
    NSMutableDictionary *_currentGeoFences;
    GEOPerformanceEventLogger *_performanceEventLogger;
}

@property (nonatomic) double speedOverride;
@property (nonatomic) double updateIntervalSpeedMultiplier;
@property (weak, nonatomic) id<MNLocationProviderDelegate> delegate;
@property (readonly, nonatomic) BOOL isAuthorized;
@property (nonatomic) int headingOrientation;
@property (readonly, nonatomic) double expectedGpsUpdateInterval;
@property (readonly, nonatomic) BOOL coarseModeEnabled;
@property (readonly, nonatomic) BOOL isTracePlayer;
@property (readonly, nonatomic) unsigned long long traceVersion;
@property (readonly, nonatomic) double timeScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopUpdatingHeading;
- (void)startUpdatingVehicleHeading;
- (void)stopMonitoringForIdentifier:(id)a0;
- (void)stopUpdatingVehicleSpeed;
- (void)startUpdatingHeading;
- (void)startUpdatingLocation;
- (void)startUpdatingVehicleSpeed;
- (void)stopUpdatingVehicleHeading;
- (void)dealloc;
- (void)resetForActiveTileGroupChanged;
- (void)startMonitoringForCondition:(id)a0 identifier:(id)a1;
- (void)stopUpdatingLocation;
- (void).cxx_destruct;
- (id)initWithStartNavigationDetails:(id)a0;
- (void)updatePosition:(double)a0;
- (void)_resetLocationUpdateInterval;
- (void)_sendLocationUpdate;
- (id)initWithSimulationParameters:(id)a0 alternateRouteInfos:(id)a1;
- (void)updateWithRouteInfo:(id)a0 rerouteReason:(unsigned long long)a1;

@end
