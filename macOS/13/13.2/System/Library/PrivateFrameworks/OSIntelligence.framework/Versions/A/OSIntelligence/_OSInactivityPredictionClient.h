@class NSString, NSXPCConnection;

@interface _OSInactivityPredictionClient : NSObject <_OSInactivityPredictionProtocol_Private, _OSInactivityPredictionProtocol>

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)modelDescription;
- (void)fixModelOutput:(id)a0 withHandler:(id /* block */)a1;
- (void)unfixModelOutputWithHandler:(id /* block */)a0;
- (id)fixModelOutput:(id)a0;
- (void)recommendedWaitTimeWithHandler:(id /* block */)a0;
- (void)longInactivityPredictionResultWithHandler:(id /* block */)a0;
- (void)longInactivityPredictionResultAtDate:(id)a0 withHandler:(id /* block */)a1;
- (void)modelDescriptionWithHandler:(id /* block */)a0;
- (void)hasEnoughInactivityHistoryWithHandler:(id /* block */)a0;
- (void)inactivityHistoryDiagnosisWithHandler:(id /* block */)a0;
- (void)deviceUsageDiagnosisWithHandler:(id /* block */)a0;
- (void)overrideRecommendedWaitTimeTo:(double)a0 withHandler:(id /* block */)a1;
- (void)restoreRecommendedWaitTimeWithHandler:(id /* block */)a0;
- (void)forceInactivityTwoStageModelWithHandler:(id /* block */)a0;
- (void)restoreInactivityModelWithHandler:(id /* block */)a0;
- (void)backedUpDataWithHandler:(id /* block */)a0;
- (double)recommendedWaitTime;
- (id)longInactivityPredictionResultWithError:(id *)a0;
- (id)longInactivityPredictionResultAtDate:(id)a0 withError:(id *)a1;
- (BOOL)hasEnoughInactivityHistory;
- (id)inactivityHistoryDiagnosis;
- (id)deviceUsageDiagnosis;
- (id)unfixModelOutput;
- (BOOL)overrideRecommendedWaitTimeTo:(double)a0;
- (BOOL)restoreRecommendedWaitTime;
- (BOOL)forceInactivityTwoStageModel;
- (BOOL)restoreInactivityModel;
- (id)backedUpData;

@end
