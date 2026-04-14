@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface IMBackgroundMessagingAPIConnection : NSObject {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)_clearConnection;
- (void).cxx_destruct;
- (id)_currentConnection;
- (id)init;
- (void)checkAuthorizationStatusForRecipients:(id)a0 completion:(id /* block */)a1;
- (void)requestBackgroundMessagingAuthorizationForRecipients:(id)a0 completion:(id /* block */)a1;
- (void)sendBackgroundMessage:(id)a0 toRecipient:(id)a1 completion:(id /* block */)a2;
- (id)_backgroundMessagingAPIServiceWithErrorHandler:(id /* block */)a0;

@end
