@class NSString, NSXPCConnection;

@interface _OSInactivityPredictionClient : NSObject <_OSInactivityPredictionProtocol_Private, _OSInactivityPredictionProtocol>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)validConnection;
- (void)recommendedWaitTimeWithHandler:(id /* block */)a0;
- (void)initConnection;
- (BOOL)restoreRecommendedWaitTime;
- (void)inactivityHistoryDiagnosisWithHandler:(id /* block */)a0;
- (void)modelDescriptionWithHandler:(id /* block */)a0;
- (id)init;
- (id)fixModelOutput:(id)a0;
- (void)handleInterruption;
- (id)deviceUsageDiagnosis;
- (void)restoreRecommendedWaitTimeWithHandler:(id /* block */)a0;
- (void)longInactivityPredictionResultWithOptions:(long long)a0 withHandler:(id /* block */)a1;
- (id)modelDescription;
- (void)longInactivityPredictionResultAtDate:(id)a0 withTimeSinceInactive:(double)a1 withOptions:(long long)a2 withHandler:(id /* block */)a3;
- (id)unfixModelOutput;
- (id)inactivityHistoryDiagnosis;
- (BOOL)restoreInactivityModel;
- (void).cxx_destruct;
- (void)unfixModelOutputWithHandler:(id /* block */)a0;
- (void)restoreInactivityModelWithHandler:(id /* block */)a0;
- (id)modelMetadata;
- (void)longInactivityPredictionResultWithHandler:(id /* block */)a0;
- (id)longInactivityPredictionResultWithError:(id *)a0;
- (void)dealloc;
- (void)overrideRecommendedWaitTimeTo:(double)a0 withHandler:(id /* block */)a1;
- (id)longInactivityPredictionResultAtDate:(id)a0 withTimeSinceInactive:(double)a1 withOptions:(long long)a2 withError:(id *)a3;
- (void)deviceUsageDiagnosisWithHandler:(id /* block */)a0;
- (void)modelMetadataWithHandler:(id /* block */)a0;
- (id)longInactivityPredictionResultWithOptions:(long long)a0 withError:(id *)a1;
- (void)hasEnoughInactivityHistoryWithHandler:(id /* block */)a0;
- (void)backedUpDataWithHandler:(id /* block */)a0;
- (id)backedUpData;
- (BOOL)overrideRecommendedWaitTimeTo:(double)a0;
- (BOOL)hasEnoughInactivityHistory;
- (double)recommendedWaitTime;
- (void)fixModelOutput:(id)a0 withHandler:(id /* block */)a1;

@end
