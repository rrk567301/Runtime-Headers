@class NSString, NSXPCConnection, AFInstanceContext, NSObject;
@protocol OS_dispatch_queue;

@interface AFSecurityConnection : NSObject <AFSecurityService> {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    AFInstanceContext *_instanceContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_connection;
- (id)initWithInstanceContext:(id)a0;
- (oneway void)setInternalAuthSessionToken:(id)a0 completion:(id /* block */)a1;
- (oneway void)setInternalAuthAppleConnectServiceTicket:(id)a0 completion:(id /* block */)a1;
- (void)_invalidateConnection;
- (void)_processDataMap:(id)a0 usingProcedure:(long long)a1 completion:(id /* block */)a2;
- (oneway void)processData:(id)a0 usingProcedure:(long long)a1 completion:(id /* block */)a2;
- (void)_dispatchCallbackForProcessedDataMap:(id)a0 errorMap:(id)a1 completion:(id /* block */)a2;
- (void)invalidate;
- (oneway void)internalAuthSessionToken:(id /* block */)a0;
- (void)dealloc;
- (oneway void)processDataMap:(id)a0 usingProcedure:(long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (oneway void)setKeychainValue:(id)a0 forKey:(id)a1 accountIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)_connectionInvalidated;
- (oneway void)internalAuthAppleConnectServiceTicket:(id /* block */)a0;
- (void)_dispatchCallbackForProcessedData:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)_processData:(id)a0 usingProcedure:(long long)a1 completion:(id /* block */)a2;
- (void)_connectionInterrupted;
- (id)init;

@end
