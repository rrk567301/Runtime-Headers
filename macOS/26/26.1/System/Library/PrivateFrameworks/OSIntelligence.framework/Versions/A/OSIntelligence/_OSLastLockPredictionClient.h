@class NSString, NSXPCConnection;

@interface _OSLastLockPredictionClient : NSObject <_OSLastLockPredictionProtocol_Private, _OSLastLockPredictionProtocol>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)modelDescription;
- (void)unfixModelOutputWithHandler:(id /* block */)a0;
- (void)handleInterruption;
- (id)validConnection;
- (id)fixModelOutput:(id)a0;
- (void)fixModelOutput:(id)a0 withHandler:(id /* block */)a1;
- (id)unfixModelOutput;
- (void)deviceUsageDiagnosisWithHandler:(id /* block */)a0;
- (void)dealloc;
- (void)modelMetadataWithHandler:(id /* block */)a0;
- (void)modelDescriptionWithHandler:(id /* block */)a0;
- (id)modelMetadata;
- (void).cxx_destruct;
- (id)deviceUsageDiagnosis;
- (void)initConnection;
- (id)init;
- (id)lastLockPredictionResultWithError:(id *)a0;
- (void)lastLockPredictionResultAtDate:(id)a0 withTimeSinceActive:(double)a1 withHandler:(id /* block */)a2;
- (id)activityHistoryDiagnosis;
- (void)activityHistoryDiagnosisWithHandler:(id /* block */)a0;
- (BOOL)hasEnoughActivityHistory;
- (void)hasEnoughActivityHistoryWithHandler:(id /* block */)a0;
- (id)lastLockPredictionResultAtDate:(id)a0 withTimeSinceActive:(double)a1 withError:(id *)a2;
- (void)lastLockPredictionResultWithHandler:(id /* block */)a0;
- (BOOL)overrideRecommendedRequeryTimeTo:(double)a0;
- (void)overrideRecommendedRequeryTimeTo:(double)a0 withHandler:(id /* block */)a1;
- (double)recommendedRequeryTime;
- (void)recommendedRequeryTimeWithHandler:(id /* block */)a0;
- (BOOL)restoreLastLockModel;
- (void)restoreLastLockModelWithHandler:(id /* block */)a0;
- (BOOL)restoreRecommendedRequeryTime;
- (void)restoreRecommendedRequeryTimeWithHandler:(id /* block */)a0;

@end
