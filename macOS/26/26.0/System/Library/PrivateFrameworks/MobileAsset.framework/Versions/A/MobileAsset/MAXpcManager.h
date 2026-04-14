@class NSString, NSMutableDictionary, MAXpcConnection, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface MAXpcManager : NSObject {
    MAXpcConnection *_maConnection;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_progressQueue;
    NSString *_serviceName;
    NSMutableDictionary *_progressHandlers;
    unsigned long long _connectionRetryCount;
    NSMutableArray *_postConnectionRetryCallbacks;
}

- (void)setClientName:(id)a0;
- (void)ensureConnection;
- (id)initWithServiceName:(id)a0 callbackQueue:(id)a1;
- (void)sendAsync:(id)a0 clientHandler:(id /* block */)a1 taskDescriptor:(id)a2 withRetry:(BOOL)a3;
- (void)clearConnection:(id)a0;
- (void)sendAsync:(id)a0 clientHandler:(id /* block */)a1 taskDescriptor:(id)a2 withRetry:(BOOL)a3 retryInitialReconnectionCount:(unsigned long long)a4;
- (void)attachProgressHandler:(id)a0 assetId:(id)a1 callBack:(id /* block */)a2 withPurpose:(id)a3;
- (void)restoreProgressCallbacks:(id)a0 assetType:(id)a1 assetId:(id)a2 withPurpose:(id)a3;
- (void)notifyClientsOfProgress:(id)a0;
- (id)progressCallbacksForAssetType:(id)a0 assetId:(id)a1 withPurpose:(id)a2;
- (id)sendSync:(id)a0 gettingResponseCode:(long long *)a1 codeForXpcError:(long long)a2 loggingName:(id)a3;
- (void)setClientConnectionHandler;
- (void)sendAsync:(id)a0 clientHandler:(id /* block */)a1 taskDescriptor:(id)a2;
- (void).cxx_destruct;

@end
