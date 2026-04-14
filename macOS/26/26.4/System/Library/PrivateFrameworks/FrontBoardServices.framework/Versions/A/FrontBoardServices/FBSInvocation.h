@class NSString, BSXPCCoder, BSMutableSettings, BSAtomicSignal;

@interface FBSInvocation : NSObject <BSXPCAutoCoding> {
    NSString *_protocolName;
    NSString *_selectorName;
    NSString *_encoding;
    BSXPCCoder *_context;
    BSMutableSettings *_objects;
    BSAtomicSignal *_invoked;
    id /* block */ _reply;
    BOOL _resolved;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (Class)extension;
- (id)membersForCoder;
- (id /* block */)resolve;
- (SEL)selector;
- (id)context;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)selectorName;
- (void)dealloc;
- (void)decodeWithCoder:(id)a0;
- (BOOL)invoked;
- (void)cannotResolveForReason:(id)a0;
- (BOOL)compatibleWithTarget:(id)a0;
- (void)invokeWithReceiver:(id)a0 replyHandler:(id /* block */)a1;
- (void)invokeWithTarget:(id)a0 replyHandler:(id /* block */)a1;

@end
