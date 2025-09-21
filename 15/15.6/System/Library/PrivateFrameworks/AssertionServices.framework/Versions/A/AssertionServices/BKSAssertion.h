@class NSMutableArray, NSString, RBSTarget, RBSAssertion;

@interface BKSAssertion : NSObject <RBSAssertionObserving> {
    RBSAssertion *_internalAssertion;
    id /* block */ _acquisitionHandler;
    id /* block */ _invalidationHandler;
    RBSTarget *_target;
    NSMutableArray *_attributes;
    NSString *_name;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) char valid;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (id)_target;
- (void)_setTarget:(id)a0;
- (id)_attributes;
- (void)assertion:(id)a0 didInvalidateWithError:(id)a1;
- (void)assertionWillInvalidate:(id)a0;
- (char)acquire;
- (void)_setAttributes:(id)a0;
- (id /* block */)_acquisitionHandler;
- (void)_acquireAsynchronously;
- (unsigned long long)_bksErrorForRBSAssertionError:(unsigned long long)a0;
- (id)_initWithName:(id)a0 handler:(id /* block */)a1;
- (id)_internalAssertion;
- (void)_invalidateSynchronously:(char)a0;
- (void)_lock:(id /* block */)a0;
- (id /* block */)_lock_acquisitionHandler;
- (id)_lock_attributes;
- (id)_lock_internalAssertion;
- (id)_lock_name;
- (void)_lock_reaquireAssertion;
- (void)_lock_setAttributes:(id)a0;
- (void)_lock_setInternalAssertion:(id)a0;
- (void)_lock_setName:(id)a0;

@end
