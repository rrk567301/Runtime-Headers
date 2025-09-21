@class ARMemoryPressureMonitor, NSString, NSArray, ARDaemonServiceListener, ARServer, NSUUID, ARServiceCoordinator, NSObject, ARSystemTimeSnapshot, ARStreamingSetupHelper;
@protocol OS_dispatch_source, ARDaemonConfiguration;

@interface ARDaemon : NSObject <ARMemoryPressureMonitorDelegate, ARLocalDaemon> {
    id<ARDaemonConfiguration> _configuration;
    NSObject<OS_dispatch_source> *_heartbeatTimer;
    ARMemoryPressureMonitor *_memoryPressureMonitor;
    ARSystemTimeSnapshot *_spawnTime;
    NSUUID *_sessionUUID;
    double _lastDaemonHeartbeatEventReportedTimestamp;
    ARServiceCoordinator *_serviceCoordinator;
    ARStreamingSetupHelper *_streamingSetupHelper;
}

@property (readonly, nonatomic) ARDaemonServiceListener *listener;
@property (readonly, nonatomic) ARServer *server;
@property (readonly, nonatomic) NSArray *runningRemoteServices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isReplay;
@property (readonly, nonatomic) unsigned long long state;

+ (id)_runningDaemons;
+ (id)_fullDescription;
+ (id)createAnonymousListenerDaemon;
+ (id)createAnonymousListenerDaemonWithReplayURL:(id)a0 deterministic:(BOOL)a1 replayDelegate:(id)a2;
+ (id)createAnonymousListenerDaemonWithReplayURL:(id)a0 replayEnableTelemetry:(BOOL)a1 deterministic:(BOOL)a2 replayDelegate:(id)a3 isDryRun:(BOOL)a4;

- (void)shutdown;
- (void)dealloc;
- (void)startup;
- (void)printInfo;
- (void).cxx_destruct;
- (id)listenerEndPointForServiceNamed:(id)a0;
- (void)startWithServices:(id)a0;
- (id)_fullDescription;
- (void)_heartbeat;
- (id)initWithConfiguration:(id)a0 spawnTime:(id)a1 watchdogMonitor:(id)a2;
- (id)initWithConfiguration:(id)a0 spawnTime:(id)a1 watchdogMonitor:(id)a2 graphScheduler:(id)a3 replayDelegate:(id)a4;
- (void)memoryPressureMonitor:(id)a0 didUpdateProcessMemoryPressureCondition:(long long)a1;
- (void)memoryPressureMonitor:(id)a0 didUpdateSystemMemoryPressureCondition:(long long)a1;
- (void)setLocalAnonymousListenerDaemon:(id)a0;

@end
