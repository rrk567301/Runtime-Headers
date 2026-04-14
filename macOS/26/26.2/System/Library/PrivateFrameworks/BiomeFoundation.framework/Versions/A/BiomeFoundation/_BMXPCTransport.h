@class NSMutableDictionary, NSDictionary, NSString, _BMXPCTransportContext, NSObject;
@protocol OS_xpc_object;

@interface _BMXPCTransport : NSObject <_NSXPCTransport> {
    NSObject<OS_xpc_object> *_connection;
    _BMXPCTransportContext *_weakContext;
}

@property (readonly) NSMutableDictionary *exportedUserInfo;
@property (readonly) NSDictionary *remoteUserInfo;
@property (copy) id /* block */ messageHandler;
@property (copy) id /* block */ errorHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)_handleEvent:(id)a0;

- (void)setTargetQueue:(id)a0;
- (void)sendMessage:(id)a0;
- (void)cancel;
- (struct { unsigned int x0[8]; })auditToken;
- (int)processIdentifier;
- (unsigned int)effectiveGroupIdentifier;
- (void)suspend;
- (id)initWithConnection:(id)a0;
- (void)resume;
- (void).cxx_destruct;
- (void)activate;
- (id)sendMessageWithReplySync:(id)a0;
- (unsigned int)effectiveUserIdentifier;
- (int)auditSessionIdentifier;
- (void)dealloc;
- (void)_setTargetUserIdentifier:(unsigned int)a0;
- (void)sendBarrierBlock:(id /* block */)a0;
- (void)sendMessageWithReply:(id)a0 onQueue:(id)a1 replyHandler:(id /* block */)a2;
- (void)sendNotification:(id)a0;
- (void)_willSendMessage:(id)a0;

@end
