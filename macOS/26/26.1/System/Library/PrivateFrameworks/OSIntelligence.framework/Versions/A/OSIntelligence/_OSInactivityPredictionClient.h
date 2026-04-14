@class NSString, NSXPCConnection;

@interface _OSInactivityPredictionClient : NSObject <_OSInactivityPredictionProtocol_Private, _OSInactivityPredictionProtocol>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)modelDescription;
- (void)restoreInactivityModelWithHandler:(id /* block */)a0;
- (void)unfixModelOutputWithHandler:(id /* block */)a0;
- (void)handleInterruption;
- (id)inactivityHistoryDiagnosis;
- (BOOL)restoreRecommendedWaitTime;
- (void)longInactivityPredictionResultWithHandler:(id /* block */)a0;
- (id)validConnection;
- (id)longInactivityPredictionResultWithError:(id *)a0;
- (id)fixModelOutput:(id)a0;
- (void)fixModelOutput:(id)a0 withHandler:(id /* block */)a1;
- (void)backedUpDataWithHandler:(id /* block */)a0;
- (void)longInactivityPredictionResultWithOptions:(long long)a0 withHandler:(id /* block */)a1;
- (BOOL)hasEnoughInactivityHistory;
- (id)longInactivityPredictionResultWithOptions:(long long)a0 withError:(id *)a1;
- (id)unfixModelOutput;
- (void)deviceUsageDiagnosisWithHandler:(id /* block */)a0;
- (void)overrideRecommendedWaitTimeTo:(double)a0 withHandler:(id /* block */)a1;
- (id)longInactivityPredictionResultAtDate:(id)a0 withTimeSinceInactive:(double)a1 withOptions:(long long)a2 withError:(id *)a3;
- (void)dealloc;
- (void)hasEnoughInactivityHistoryWithHandler:(id /* block */)a0;
- (void)modelMetadataWithHandler:(id /* block */)a0;
- (void)inactivityHistoryDiagnosisWithHandler:(id /* block */)a0;
- (void)modelDescriptionWithHandler:(id /* block */)a0;
- (id)modelMetadata;
- (void)recommendedWaitTimeWithHandler:(id /* block */)a0;
- (BOOL)overrideRecommendedWaitTimeTo:(double)a0;
- (double)recommendedWaitTime;
- (void).cxx_destruct;
- (BOOL)restoreInactivityModel;
- (void)longInactivityPredictionResultAtDate:(id)a0 withTimeSinceInactive:(double)a1 withOptions:(long long)a2 withHandler:(id /* block */)a3;
- (id)deviceUsageDiagnosis;
- (void)restoreRecommendedWaitTimeWithHandler:(id /* block */)a0;
- (id)backedUpData;
- (void)initConnection;
- (id)init;

@end
