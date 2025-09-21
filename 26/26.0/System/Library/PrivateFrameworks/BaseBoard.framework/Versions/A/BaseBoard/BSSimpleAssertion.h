@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface BSSimpleAssertion : NSObject <BSSimpleAssertionInvalidationContext, BSDescriptionStreaming, BSInvalidatable, BSDescriptionProviding> {
    union { id /* block */ withArgs; id /* block */ noArgs; id value; } _invalidationBlock;
    NSObject<OS_dispatch_queue> *_queue;
    _Atomic BOOL _invalidated;
    unsigned char _invalidationType;
}

@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic) BSSimpleAssertion *assertion;
@property (readonly, nonatomic) BOOL wasExplicit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)appendDescriptionToStream:(id)a0;
- (void)invalidate;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)init;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 forReason:(id)a1 invalidationBlock:(id /* block */)a2;
- (id)initWithIdentifier:(id)a0 forReason:(id)a1 queue:(id)a2 invalidationBlock:(id /* block */)a3;
- (id)initWithReason:(id)a0 identifier:(id)a1 requiredInvalidationQueue:(id)a2 deallocPolicy:(long long)a3 invalidatedWithContextBlock:(id /* block */)a4;
- (id)initWithReason:(id)a0 invalidatedBlock:(id /* block */)a1;
- (id)initWithReason:(id)a0 invalidatedWithContextBlock:(id /* block */)a1;

@end
