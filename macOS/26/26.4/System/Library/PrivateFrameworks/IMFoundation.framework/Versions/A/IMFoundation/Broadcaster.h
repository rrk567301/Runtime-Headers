@class Protocol, NSString, NSArray, IMMessageContext, IMRemoteObjectBroadcaster;

@interface Broadcaster : NSProxy <IDSSendXPCProtocol> {
    NSArray *_targets;
    IMRemoteObjectBroadcaster *_parent;
    Protocol *_protocol;
    IMMessageContext *_messageContext;
    id /* block */ _completion;
    id /* block */ _hookBlock;
}

@property (nonatomic) int curXPCMessagePriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendXPCObject:(id)a0;
- (void)forwardInvocation:(id)a0;
- (id)initWithNotifier:(id)a0 messageContext:(id)a1 protocol:(id)a2 targets:(id)a3;
- (void)setInvocationHook:(id /* block */)a0;
- (id)initWithNotifier:(id)a0 messageContext:(id)a1 protocol:(id)a2 targets:(id)a3 priority:(int)a4 completion:(id /* block */)a5;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)dealloc;
- (id)initWithNotifier:(id)a0 messageContext:(id)a1 protocol:(id)a2 targets:(id)a3 priority:(int)a4;

@end
