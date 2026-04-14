@class NSString, NSObject, DTXConnection;
@protocol OS_dispatch_queue, DTXAllowedRPC;

@interface DTXChannel : NSObject <DTXMessenger> {
    DTXConnection *_strongConnection;
    NSObject<OS_dispatch_queue> *_serialQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _handlerGuard;
    struct __DTXChannelGuarded_private { struct { NSObject<OS_dispatch_queue> *userDispatchQueue; id<DTXAllowedRPC> dispatchTarget; id /* block */ messageHandler; id /* block */ dispatchValidator; } _fields; } _channelGuarded;
}

@property BOOL isCanceled;
@property (readonly, nonatomic) unsigned int channelCode;
@property int compressionTypeHint;
@property (readonly, nonatomic) DTXConnection *_connection;
@property (copy, nonatomic) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resume;
- (void).cxx_destruct;
- (void)cancel;
- (void)suspend;
- (void)setMessageHandler:(id /* block */)a0;
- (void)setDispatchTarget:(id)a0;
- (void)registerDisconnectHandler:(id /* block */)a0;
- (void)sendControlAsync:(id)a0 replyHandler:(id /* block */)a1;
- (void)sendControlSync:(id)a0 replyHandler:(id /* block */)a1;
- (void)sendMessage:(id)a0 replyHandler:(id /* block */)a1;
- (BOOL)sendMessageAsync:(id)a0 replyHandler:(id /* block */)a1;
- (void)sendMessageSync:(id)a0 replyHandler:(id /* block */)a1;
- (id)initWithConnection:(id)a0 channelIdentifier:(unsigned int)a1 label:(id)a2;
- (void)_scheduleBlock:(id /* block */)a0;
- (void)_scheduleMessage:(id)a0 tracker:(id)a1 withHandler:(id /* block */)a2;
- (struct { id x0; id x1; id /* block */ x2; id /* block */ x3; })_callbackSnapshot;
- (void)_setDispatchTarget:(id)a0 queue:(id)a1;
- (void)_setDispatchValidator:(id /* block */)a0;

@end
