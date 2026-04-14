@class NSString, OS_xpc_remote_connection;

@interface _NSXPCRemoteTransport : NSObject <_NSXPCTransport> {
    OS_xpc_remote_connection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)resume;
- (id)initWithConnection:(id)a0;
- (struct { unsigned int x0[8]; })auditToken;
- (int)processIdentifier;
- (void)cancel;
- (void)suspend;
- (void)setEventHandler:(id /* block */)a0;
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
- (id)initWithRemoteService:(id)a0 name:(id)a1 queue:(id)a2 mode:(unsigned long long)a3;

@end
