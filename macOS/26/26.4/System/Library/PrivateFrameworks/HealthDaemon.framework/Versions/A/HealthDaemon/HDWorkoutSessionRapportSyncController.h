@class NSString, HDRapportMessenger, HDWorkoutSessionServer, NSMutableDictionary, HKRateLimiter;

@interface HDWorkoutSessionRapportSyncController : NSObject <HDWorkoutSessionSyncController, HDRapportMessengerObserver> {
    HDRapportMessenger *_rapportMessenger;
    HDWorkoutSessionServer *_sessionServer;
    HKRateLimiter *_dataRateLimiter;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_lock_pendingTransactionsByRequest;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_decodedTransactionWithData:(id)a0 error:(id *)a1;

- (id)sessionConfiguration;
- (void).cxx_destruct;
- (void)sendDataToRemoteWorkoutSession:(id)a0 completion:(id /* block */)a1;
- (void)receivedEventUpdate:(id)a0 completion:(id /* block */)a1;
- (void)sendStateEvent:(long long)a0 date:(id)a1 completion:(id /* block */)a2;
- (void)receivedStateUpdate:(id)a0 completion:(id /* block */)a1;
- (void)_enqueueTransaction:(id)a0 requestName:(id)a1;
- (BOOL)_isDataRateLimiterDisabledByUserDefaults;
- (void)_sendPendingTransactions;
- (id)initWithRapportMessenger:(id)a0 sessionServer:(id)a1;
- (void)rapportMessenger:(id)a0 didReceiveRequest:(id)a1 idsIdentifier:(id)a2 data:(id)a3 responseHandler:(id /* block */)a4;
- (void)receivedBackgroundRuntimeRequestWithCompletion:(id /* block */)a0;
- (void)receivedCurrentActivityUpdate:(id)a0 completion:(id /* block */)a1;
- (void)receivedDataFromRemoteWorkoutSession:(id)a0 completion:(id /* block */)a1;
- (void)receivedMirroringStopRequestWithCompletion:(id /* block */)a0;
- (void)receivedRecoveryRequestWithResponseHandler:(id /* block */)a0;
- (void)receivedStateEvent:(id)a0 completion:(id /* block */)a1;
- (void)sendBackgroundRuntimeRequestWithCompletion:(id /* block */)a0;
- (void)sendCurrentActivityUpdate:(id)a0 completion:(id /* block */)a1;
- (void)sendEventUpdate:(id)a0 completion:(id /* block */)a1;
- (void)sendMirroringStartRequestWithCompletion:(id /* block */)a0;
- (void)sendMirroringStopRequestWithCompletion:(id /* block */)a0;
- (void)sendRequest:(id)a0 transaction:(id /* block */)a1 completion:(id /* block */)a2;
- (void)sendRequest:(id)a0 transaction:(id /* block */)a1 responseHandler:(id /* block */)a2;
- (void)sendStateUpdate:(long long)a0 date:(id)a1 completion:(id /* block */)a2;
- (id)sessionGlobalState;

@end
