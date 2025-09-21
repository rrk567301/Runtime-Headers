@class NSString, BSServiceManager, NSMutableOrderedSet, NSArray, RBSTarget;

@interface BSServiceConnectionEndpointInjectorConfiguration : NSObject <BSServiceConnectionEndpointInjectorConfiguring> {
    BSServiceManager *_lock_manager;
    id /* block */ _lock_assertionGenerator;
    RBSTarget *_lock_target;
    NSString *_lock_domain;
    NSString *_lock_service;
    NSString *_lock_instance;
    NSMutableOrderedSet *_lock_endpoints;
    NSString *_lock_inheritingEnvironment;
    NSArray *_lock_additionalAttributes;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (void)setService:(id)a0;
- (void)addEndpoint:(id)a0;
- (void)setInstance:(id)a0;
- (id)init;
- (void)setDomain:(id)a0;
- (void)setTarget:(id)a0;
- (void).cxx_destruct;
- (void)setAdditionalAttributes:(id)a0;
- (void)setInheritingEnvironment:(id)a0;

@end
