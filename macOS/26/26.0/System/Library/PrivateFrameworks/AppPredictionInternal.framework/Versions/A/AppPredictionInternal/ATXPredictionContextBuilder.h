@class _PASLock, NSDate;

@interface ATXPredictionContextBuilder : NSObject <ATXPredictionContextBuilderProtocol>

@property (retain, nonatomic) NSDate *now;
@property (readonly, nonatomic) _PASLock *lock;

+ (id)sharedInstance;
+ (id)loadContextOverrideFromJSONFile:(id)a0;

- (BOOL)tryInitContextSourcesAndReturnSuccess:(id)a0;
- (id)_getContextForOverrideKey:(id)a0 fromContextOverride:(id)a1 withDefaultContext:(id)a2 allowNilValues:(BOOL)a3;
- (id)userContextForCurrentContext:(id)a0;
- (BOOL)tryInitBiomeStreamsAndReturnSuccess:(id)a0;
- (id)timeContextForContextOverride:(id)a0 guardedData:(id)a1;
- (id)ambientLightContextForCurrentContext:(id)a0;
- (id)userContextForContextOverride:(id)a0 guardedData:(id)a1;
- (id)initWithAppInfoManager:(id)a0 locationManager:(id)a1 motionManagerWrapper:(id)a2 ambientLightMonitor:(id)a3 deviceStateMonitorClass:(Class)a4 contextSourcesInitialized:(BOOL)a5;
- (id)init;
- (id)ambientLightContextForContextOverride:(id)a0 guardedData:(id)a1;
- (id)predictionContextForCurrentContext;
- (id)locationMotionContextForCurrentContext:(id)a0;
- (id)initWithAppInfoManager:(id)a0 locationManager:(id)a1 motionManagerWrapper:(id)a2 ambientLightMonitor:(id)a3 deviceStateMonitorClass:(Class)a4 contextSourcesInitialized:(BOOL)a5 contextStream:(id)a6 biomeStreamsInitialized:(BOOL)a7;
- (id)predictionContextForCurrentContextAndCandidatePublisher:(id)a0 contextOverride:(id)a1;
- (id)locationMotionContextForContextOverride:(id)a0 guardedData:(id)a1;
- (id)timeContextForCurrentContext:(id)a0;
- (void).cxx_destruct;
- (id)deviceStateContextForContextOverride:(id)a0 guardedData:(id)a1;
- (id)deviceStateContextForCurrentContext:(id)a0;
- (id)updateContextStreamAndReturnPredictionContextForCurrentContext;
- (id)predictionContextForContextOverride:(id)a0;

@end
