@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface IMBackgroundMessagingAPIConnection : NSObject {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)_clearConnection;
- (id)init;
- (id)_currentConnection;
- (void).cxx_destruct;
- (void)checkAuthorizationStatusForRecipients:(id)a0 completion:(id /* block */)a1;
- (void)requestBackgroundMessagingAuthorizationForRecipients:(id)a0 completion:(id /* block */)a1;
- (void)sendBackgroundMessage:(id)a0 toRecipient:(id)a1 completion:(id /* block */)a2;
- (id)_backgroundMessagingAPIServiceWithErrorHandler:(id /* block */)a0;

@end
