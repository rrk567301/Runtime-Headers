@class KVXPCClient;

@interface KVDonateXPCClient : NSObject <KVDonateService> {
    KVXPCClient *_client;
}

- (void).cxx_destruct;
- (id)initWithClientId:(id)a0;
- (oneway void)openDatasetStream:(unsigned long long)a0 itemType:(long long)a1 originAppId:(id)a2 deviceId:(id)a3 userId:(id)a4 options:(unsigned short)a5 completion:(id /* block */)a6;
- (oneway void)closeDatasetStream:(id /* block */)a0;
- (oneway void)abortDatasetStream;
- (void)addItems:(id)a0 completion:(id /* block */)a1;
- (void)removeItemId:(id)a0 completion:(id /* block */)a1;

@end
