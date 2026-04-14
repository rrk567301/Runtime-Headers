@class CMIOExtensionClient, NSString, NSObject;
@protocol OS_xpc_object, OS_os_transaction, OS_dispatch_queue, CMIOExtensionProxyContextDelegate;

@interface CMIOExtensionProxyContext : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_os_transaction> *_transaction;
    NSString *_description;
}

@property (readonly, weak, nonatomic) id<CMIOExtensionProxyContextDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *serverConnection;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) CMIOExtensionClient *clientInfo;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, nonatomic) BOOL hasCameraAttribution;

- (void)dealloc;
- (id)description;
- (void)invalidate;
- (void).cxx_destruct;
- (void)handleClientMessageWithConnection:(id)a0 message:(id)a1;
- (void)receivedSample:(id)a0 message:(id)a1;
- (void)handleServerMessageWithConnection:(id)a0 message:(id)a1;
- (void)sendClientInfo;
- (id)initWithConnection:(id)a0 serverConnection:(id)a1 queue:(id)a2 delegate:(id)a3;

@end
