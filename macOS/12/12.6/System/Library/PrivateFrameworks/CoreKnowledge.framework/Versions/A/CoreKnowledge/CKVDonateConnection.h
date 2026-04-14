@class CKVDonateRequest, NSXPCConnection, CKVIndexUpdater, NSObject;
@protocol CKVDonateRequestDelegate;

@interface CKVDonateConnection : NSObject <KVDonateService> {
    NSObject<CKVDonateRequestDelegate> *_delegate;
    NSXPCConnection *_xpc;
    CKVDonateRequest *_request;
    id /* block */ _requestCompletion;
    CKVIndexUpdater *_updater;
}

- (id)init;
- (void).cxx_destruct;
- (void)interrupt;
- (BOOL)isXPC;
- (void)handleRequest:(id)a0;
- (oneway void)openDatasetStream:(unsigned long long)a0 itemType:(long long)a1 originAppId:(id)a2 deviceId:(id)a3 userId:(id)a4 options:(unsigned short)a5 completion:(id /* block */)a6;
- (oneway void)closeDatasetStream:(id /* block */)a0;
- (oneway void)abortDatasetStream;
- (void)addItems:(id)a0 completion:(id /* block */)a1;
- (void)removeItemId:(id)a0 completion:(id /* block */)a1;
- (id)initWithRequestDelegate:(id)a0 xpc:(id)a1;

@end
