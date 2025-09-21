@class NSString, MNTracePlayer, MNTraceRecorder, MNTraceNetworkEvent;
@protocol MNVirtualGarageProviderDelegate, MNLocationProviderDelegate, MNNavigationTraceManagerDelegate, GEOMotionContextProviderDelegate;

@interface MNNavigationTraceManager : NSObject <MNTracePlayerObserver, GEOMotionContextProvider, MNLocationProvider, MNVirtualGarageProvider> {
    BOOL _isSimulation;
    MNTraceNetworkEvent *_initialNetworkState;
    NSString *_hardwareModel;
}

@property (weak, nonatomic) id<MNNavigationTraceManagerDelegate> traceManagerDelegate;
@property (readonly, nonatomic) MNTracePlayer *tracePlayer;
@property (readonly, nonatomic) MNTraceRecorder *traceRecorder;
@property (nonatomic) long long navigationType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<GEOMotionContextProviderDelegate> motionDelegate;
@property (weak, nonatomic) id<MNLocationProviderDelegate> delegate;
@property (readonly, nonatomic) BOOL isAuthorized;
@property (nonatomic) int headingOrientation;
@property (readonly, nonatomic) double expectedGpsUpdateInterval;
@property (readonly, nonatomic) BOOL coarseModeEnabled;
@property (readonly, nonatomic) BOOL isTracePlayer;
@property (readonly, nonatomic) unsigned long long traceVersion;
@property (readonly, nonatomic) double timeScale;
@property (weak, nonatomic) id<MNVirtualGarageProviderDelegate> virtualGarageDelegate;
@property (readonly, nonatomic) unsigned long long vehiclesCount;
@property (readonly, nonatomic) BOOL assumesFullCharge;
@property (readonly, nonatomic) BOOL isStarted;

+ (void)_clearOldTracesInDirectory:(id)a0 matchingExpression:(id)a1 beforeDate:(id)a2;
+ (void)clearOldTraces;

- (void)stopUpdatingHeading;
- (void)startUpdatingVehicleHeading;
- (void)stopMonitoringForIdentifier:(id)a0;
- (void)stopUpdatingVehicleSpeed;
- (void)startUpdatingHeading;
- (void)startUpdatingLocation;
- (void)startUpdatingVehicleSpeed;
- (void)stopUpdatingVehicleHeading;
- (id)hardwareModel;
- (void)dealloc;
- (void)resetForActiveTileGroupChanged;
- (BOOL)_isNavigating;
- (void)startMonitoringForCondition:(id)a0 identifier:(id)a1;
- (void)stopUpdatingLocation;
- (void)close;
- (void).cxx_destruct;
- (void)startMotionUpdates;
- (void)stopMotionUpdates;
- (void)updatedVehicleStateWithHandler:(id /* block */)a0;
- (void)_copyTraceToCrashReporterDirectory:(id)a0;
- (void)_createSymlinkForTracePath:(id)a0;
- (id)_defaultTraceNameForDestination:(id)a0 isSimulation:(BOOL)a1;
- (void)_recordEnvironmentInfo:(id)a0;
- (void)_recordStylesheet:(id)a0;
- (unsigned long long)_startIndexForNavigation;
- (void)openForPlaybackWithTracePath:(id)a0;
- (void)openForRecordingWithTraceRecordingData:(id)a0 traceName:(id)a1 selectedRouteIndex:(unsigned long long)a2 isReconnecting:(BOOL)a3 isSimulation:(BOOL)a4;
- (void)openForSimulationWithRoute:(id)a0 traceRecordingData:(id)a1 traceNameOverride:(id)a2;
- (void)saveRoutePlanningTrace:(id)a0;
- (void)startVirtualGarageUpdates;
- (void)stopVirtualGarageUpdates;
- (void)tracePlayer:(id)a0 didJumpToRouteResponse:(id)a1 request:(id)a2 waypoints:(id)a3;
- (void)tracePlayer:(id)a0 didPlayAtTime:(double)a1;
- (void)tracePlayer:(id)a0 didReceiveLocationError:(id)a1;
- (void)tracePlayer:(id)a0 didRecieveNetworkEvent:(id)a1;
- (void)tracePlayer:(id)a0 didSeekToTime:(double)a1 fromTime:(double)a2 location:(id)a3;
- (void)tracePlayer:(id)a0 didSeekToTransportType:(int)a1;
- (void)tracePlayer:(id)a0 didUpdateEVData:(id)a1;
- (void)tracePlayer:(id)a0 didUpdateHeading:(id)a1;
- (void)tracePlayer:(id)a0 didUpdateLocation:(id)a1;
- (void)tracePlayer:(id)a0 didUpdateMotion:(unsigned long long)a1 exitType:(unsigned long long)a2 confidence:(unsigned long long)a3;
- (void)tracePlayer:(id)a0 didUpdateVehicleHeading:(double)a1 timestamp:(id)a2;
- (void)tracePlayer:(id)a0 didUpdateVehicleSpeed:(double)a1 timestamp:(id)a2;
- (void)tracePlayerDidPause:(id)a0;
- (void)tracePlayerDidPauseLocationUpdates:(id)a0;
- (void)tracePlayerDidResume:(id)a0;
- (void)tracePlayerDidResumeLocationUpdates:(id)a0;
- (void)tracePlayerDidStart:(id)a0;
- (void)tracePlayerDidStayOnRoute:(id)a0;
- (void)tracePlayerDidStop:(id)a0;

@end
