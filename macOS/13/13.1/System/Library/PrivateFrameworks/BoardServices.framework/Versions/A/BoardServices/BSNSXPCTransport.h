@class NSString, BSXPCServiceConnection, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface BSNSXPCTransport : NSObject <BSNSXPCConnectionConfiguring, _NSXPCTransport> {
    BSXPCServiceConnection *_connection;
    NSString *_explanation;
    NSArray *_perMessageAttributes;
    id /* block */ _perMessageAssertionProvider;
    unsigned char _messageOptions;
    NSObject<OS_dispatch_queue> *_targetQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resume;
- (void).cxx_destruct;
- (int)processIdentifier;
- (struct { unsigned int x0[8]; })auditToken;
- (void)setErrorHandler:(id /* block */)a0;
- (void)cancel;
- (void)suspend;
- (void)setMessageHandler:(id /* block */)a0;
- (void)sendMessage:(id)a0;
- (id)sendMessageWithReplySync:(id)a0;
- (void)sendMessageWithReply:(id)a0 onQueue:(id)a1 replyHandler:(id /* block */)a2;
- (void)sendNotification:(id)a0;
- (void)sendBarrierBlock:(id /* block */)a0;
- (void)setTargetQueue:(id)a0;
- (void)activate;
- (int)auditSessionIdentifier;
- (unsigned int)effectiveUserIdentifier;
- (unsigned int)effectiveGroupIdentifier;
- (void)setPerMessageAssertionAttributes:(id)a0;

@end
