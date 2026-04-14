@class NSMutableDictionary, NSDictionary, NSString, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface _BMXPCTransport : NSObject <_NSXPCTransport> {
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain) NSMutableDictionary *exportedUserInfo;
@property (retain) NSDictionary *remoteUserInfo;
@property (copy) id /* block */ messageHandler;
@property (copy) id /* block */ errorHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (void)resume;
- (void)_setTargetUserIdentifier:(unsigned int)a0;
- (void)activate;
- (struct { unsigned int x0[8]; })auditToken;
- (int)processIdentifier;
- (void)suspend;
- (void)setTargetQueue:(id)a0;
- (int)auditSessionIdentifier;
- (void)cancel;
- (unsigned int)effectiveGroupIdentifier;
- (unsigned int)effectiveUserIdentifier;
- (void)sendBarrierBlock:(id /* block */)a0;
- (void)sendMessage:(id)a0;
- (void)sendMessageWithReply:(id)a0 onQueue:(id)a1 replyHandler:(id /* block */)a2;
- (id)sendMessageWithReplySync:(id)a0;
- (void)sendNotification:(id)a0;
- (id /* block */)_handleEvent;
- (void)_willSendMessage:(id)a0;

@end
