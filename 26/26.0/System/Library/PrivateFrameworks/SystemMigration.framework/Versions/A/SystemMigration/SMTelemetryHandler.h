@class SMTelemetryPayload;

@interface SMTelemetryHandler : NSObject

@property (retain, nonatomic) SMTelemetryPayload *payload;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)recordError:(long long)a0;
- (void)clearError;
- (void)recordDataSize:(unsigned long long)a0;
- (id)stringForPhase:(unsigned long long)a0;
- (void)addDuration:(double)a0 forStep:(id)a1;
- (void)determineSuccess;
- (id)generateStateTrackerKeyForStep:(id)a0 phase:(unsigned long long)a1;
- (id)getPayloadDictionary;
- (id)getRunType:(id)a0;
- (id)payloadKeyForStepDuration:(id)a0;
- (void)recordCompletion;
- (void)recordDisconnect;
- (void)recordFatalFailure;
- (void)recordIncompatibleBundleID:(id)a0;
- (void)recordIncompatibleBundleName:(id)a0;
- (void)recordInitialConnectionType:(id)a0;
- (void)recordIsPreReboot:(id)a0;
- (void)recordNewRulesEngineRun:(BOOL)a0;
- (void)recordNumberOfUsersMigrated:(long long)a0;
- (void)recordOriginatingApplication:(unsigned long long)a0;
- (void)recordPathingDuration:(double)a0;
- (void)recordRunType:(id)a0;
- (void)recordSourceModel:(id)a0;
- (void)recordSourceVersion:(id)a0;
- (void)recordStop;
- (void)recordSuspend;
- (void)recordTelemetryType:(unsigned long long)a0;
- (void)recordTotalDuration:(double)a0;
- (void)sendEvent;
- (void)setStateTracker:(id)a0 phase:(unsigned long long)a1;

@end
