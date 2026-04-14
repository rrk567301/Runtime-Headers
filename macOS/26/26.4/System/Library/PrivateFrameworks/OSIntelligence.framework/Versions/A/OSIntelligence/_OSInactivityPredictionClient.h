@class NSString, NSXPCConnection;

@interface _OSInactivityPredictionClient : NSObject <_OSInactivityPredictionProtocol_Private, _OSInactivityPredictionProtocol>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)longInactivityPredictionResultAtDate:(id)a0 withTimeSinceInactive:(double)a1 withOptions:(long long)a2 withError:(id *)a3;
- (void)restoreInactivityModelWithHandler:(id /* block */)a0;
- (void)inactivityHistoryDiagnosisWithHandler:(id /* block */)a0;
- (void)longInactivityPredictionResultWithOptions:(long long)a0 withHandler:(id /* block */)a1;
- (id)validConnection;
- (void)hasEnoughInactivityHistoryWithHandler:(id /* block */)a0;
- (id)modelDescription;
- (void)deviceUsageDiagnosisWithHandler:(id /* block */)a0;
- (void)longInactivityPredictionResultAtDate:(id)a0 withTimeSinceInactive:(double)a1 withOptions:(long long)a2 withHandler:(id /* block */)a3;
- (id)unfixModelOutput;
- (void)unfixModelOutputWithHandler:(id /* block */)a0;
- (BOOL)overrideRecommendedWaitTimeTo:(double)a0;
- (void)overrideRecommendedWaitTimeTo:(double)a0 withHandler:(id /* block */)a1;
- (void)modelMetadataWithHandler:(id /* block */)a0;
- (BOOL)restoreRecommendedWaitTime;
- (void)backedUpDataWithHandler:(id /* block */)a0;
- (double)recommendedWaitTime;
- (void).cxx_destruct;
- (id)fixModelOutput:(id)a0;
- (void)initConnection;
- (id)backedUpData;
- (id)init;
- (void)longInactivityPredictionResultWithHandler:(id /* block */)a0;
- (void)fixModelOutput:(id)a0 withHandler:(id /* block */)a1;
- (BOOL)restoreInactivityModel;
- (void)recordEngagementFrom:(id)a0 to:(id)a1 wasInterrupted:(BOOL)a2 withPredictedMetadata:(id)a3 predictedOutput:(id)a4 withAdditionalParameters:(id)a5 withHandler:(id /* block */)a6;
- (id)modelMetadata;
- (id)inactivityHistoryDiagnosis;
- (BOOL)hasEnoughInactivityHistory;
- (id)longInactivityPredictionResultWithOptions:(long long)a0 withError:(id *)a1;
- (void)modelDescriptionWithHandler:(id /* block */)a0;
- (void)restoreRecommendedWaitTimeWithHandler:(id /* block */)a0;
- (void)dealloc;
- (void)recommendedWaitTimeWithHandler:(id /* block */)a0;
- (id)longInactivityPredictionResultWithError:(id *)a0;
- (id)deviceUsageDiagnosis;
- (void)handleInterruption;

@end
