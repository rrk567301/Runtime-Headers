@class NSString, NSXPCConnection;

@interface _OSInactivityPredictionClient : NSObject <_OSInactivityPredictionProtocol_Private, _OSInactivityPredictionProtocol>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleInterruption;
- (id)modelDescription;
- (BOOL)overrideRecommendedWaitTimeTo:(double)a0;
- (void)longInactivityPredictionResultAtDate:(id)a0 withTimeSinceInactive:(double)a1 withOptions:(long long)a2 withHandler:(id /* block */)a3;
- (id)inactivityHistoryDiagnosis;
- (void)modelMetadataWithHandler:(id /* block */)a0;
- (void)inactivityHistoryDiagnosisWithHandler:(id /* block */)a0;
- (id)unfixModelOutput;
- (id)backedUpData;
- (id)validConnection;
- (id)deviceUsageDiagnosis;
- (void)fixModelOutput:(id)a0 withHandler:(id /* block */)a1;
- (void)longInactivityPredictionResultWithOptions:(long long)a0 withHandler:(id /* block */)a1;
- (void)initConnection;
- (void).cxx_destruct;
- (id)longInactivityPredictionResultWithOptions:(long long)a0 withError:(id *)a1;
- (BOOL)restoreInactivityModel;
- (void)restoreRecommendedWaitTimeWithHandler:(id /* block */)a0;
- (void)overrideRecommendedWaitTimeTo:(double)a0 withHandler:(id /* block */)a1;
- (id)modelMetadata;
- (id)longInactivityPredictionResultAtDate:(id)a0 withTimeSinceInactive:(double)a1 withOptions:(long long)a2 withError:(id *)a3;
- (void)deviceUsageDiagnosisWithHandler:(id /* block */)a0;
- (void)unfixModelOutputWithHandler:(id /* block */)a0;
- (double)recommendedWaitTime;
- (id)longInactivityPredictionResultWithError:(id *)a0;
- (void)longInactivityPredictionResultWithHandler:(id /* block */)a0;
- (void)backedUpDataWithHandler:(id /* block */)a0;
- (BOOL)restoreRecommendedWaitTime;
- (BOOL)hasEnoughInactivityHistory;
- (void)modelDescriptionWithHandler:(id /* block */)a0;
- (void)restoreInactivityModelWithHandler:(id /* block */)a0;
- (id)fixModelOutput:(id)a0;
- (id)init;
- (void)recommendedWaitTimeWithHandler:(id /* block */)a0;
- (void)hasEnoughInactivityHistoryWithHandler:(id /* block */)a0;
- (void)dealloc;

@end
