@class GEOPerformanceEventLogger, NSString, MNSimulatedLocationGenerator, MNDispatchTimer, NSMutableArray;
@protocol MNLocationProviderDelegate;

@interface MNSimulationLocationProvider : NSObject <MNLocationProvider> {
    MNDispatchTimer *_locationUpdateTimer;
    long long _simulationType;
    MNSimulatedLocationGenerator *_locationGenerator;
    BOOL _simulateGeoFences;
    NSMutableArray *_monitoredGeoFences;
    NSMutableArray *_currentGeoFences;
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

- (void)stopUpdatingVehicleSpeed;
- (void)startUpdatingHeading;
- (void)stopUpdatingLocation;
- (void)stopUpdatingHeading;
- (void)startUpdatingVehicleSpeed;
- (void)stopMonitoringForRegion:(id)a0;
- (void)resetForActiveTileGroupChanged;
- (void)startMonitoringForRegion:(id)a0;
- (void)startUpdatingLocation;
- (void)stopUpdatingVehicleHeading;
- (void)startUpdatingVehicleHeading;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithStartNavigationDetails:(id)a0;
- (void)updatePosition:(double)a0;
- (void)_resetLocationUpdateInterval;
- (void)_sendLocationUpdate;
- (id)initWithSimulationParameters:(id)a0 alternateRouteInfos:(id)a1;
- (void)updateWithRouteInfo:(id)a0 rerouteReason:(unsigned long long)a1;

@end
