@class BSService, NSString, BSServiceSpecification, BSServiceDomain, BSServiceConnectionEndpoint;
@protocol BSInvalidatable;

@interface BSServiceConnectionListener : NSObject <BSServiceListener, BSInvalidatable> {
    BSServiceDomain *_domain;
    BSService *_service;
    id /* block */ _lock_handler;
    id<BSInvalidatable> _registrationLock_assertion;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _registrationLock;
    BOOL _lock_activated;
    BOOL _lock_invalidated;
}

@property (readonly, copy, nonatomic) NSString *domain;
@property (readonly, copy, nonatomic) NSString *service;
@property (readonly, copy, nonatomic) NSString *instance;
@property (readonly, nonatomic) BSServiceSpecification *specification;
@property (readonly, copy, nonatomic) BSServiceConnectionEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)listenerWithConfiguration:(id)a0 handler:(id /* block */)a1;
+ (id)extendBootstrap;
+ (id)listenerWithConfigurator:(id /* block */)a0;

- (id)service;
- (void)didReceiveConnection:(id)a0;
- (id)domain;
- (void)dealloc;
- (void)invalidate;
- (id)init;
- (id)specification;
- (void)activate;
- (void).cxx_destruct;

@end
