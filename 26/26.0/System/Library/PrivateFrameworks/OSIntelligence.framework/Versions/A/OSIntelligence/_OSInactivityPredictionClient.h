@class NSString, NSXPCConnection;

@interface _OSInactivityPredictionClient : NSObject <_OSInactivityPredictionProtocol_Private, _OSInactivityPredictionProtocol>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)modelDescription;
- (void)inactivityHistoryDiagnosisWithHandler:(id /* block */)a0;
- (BOOL)overrideRecommendedWaitTimeTo:(double)a0;
- (void)handleInterruption;
- (void)dealloc;
- (void)initConnection;
- (void)restoreInactivityModelWithHandler:(id /* block */)a0;
- (id)longInactivityPredictionResultWithError:(id *)a0;
- (id)fixModelOutput:(id)a0;
- (id)inactivityHistoryDiagnosis;
- (id)longInactivityPredictionResultAtDate:(id)a0 withTimeSinceInactive:(double)a1 withOptions:(long long)a2 withError:(id *)a3;
- (void)hasEnoughInactivityHistoryWithHandler:(id /* block */)a0;
- (id)validConnection;
- (void)longInactivityPredictionResultWithHandler:(id /* block */)a0;
- (BOOL)restoreInactivityModel;
- (id)init;
- (void)modelMetadataWithHandler:(id /* block */)a0;
- (void)deviceUsageDiagnosisWithHandler:(id /* block */)a0;
- (double)recommendedWaitTime;
- (void)backedUpDataWithHandler:(id /* block */)a0;
- (id)unfixModelOutput;
- (void)unfixModelOutputWithHandler:(id /* block */)a0;
- (void)recommendedWaitTimeWithHandler:(id /* block */)a0;
- (id)backedUpData;
- (void)longInactivityPredictionResultAtDate:(id)a0 withTimeSinceInactive:(double)a1 withOptions:(long long)a2 withHandler:(id /* block */)a3;
- (id)longInactivityPredictionResultWithOptions:(long long)a0 withError:(id *)a1;
- (void)modelDescriptionWithHandler:(id /* block */)a0;
- (BOOL)restoreRecommendedWaitTime;
- (void)fixModelOutput:(id)a0 withHandler:(id /* block */)a1;
- (void)longInactivityPredictionResultWithOptions:(long long)a0 withHandler:(id /* block */)a1;
- (id)deviceUsageDiagnosis;
- (void)restoreRecommendedWaitTimeWithHandler:(id /* block */)a0;
- (id)modelMetadata;
- (void).cxx_destruct;
- (void)overrideRecommendedWaitTimeTo:(double)a0 withHandler:(id /* block */)a1;
- (BOOL)hasEnoughInactivityHistory;

@end
