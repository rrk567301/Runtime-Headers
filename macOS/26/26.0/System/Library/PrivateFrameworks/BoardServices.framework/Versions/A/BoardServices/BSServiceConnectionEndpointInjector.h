@class NSString, RBSAssertion;

@interface BSServiceConnectionEndpointInjector : NSObject <BSInvalidatable> {
    NSString *_description;
    RBSAssertion *_lock_assertion;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_invalidated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)injectorWithConfigurator:(id /* block */)a0;

- (void)dealloc;
- (void)invalidate;
- (id)init;
- (void).cxx_destruct;

@end
