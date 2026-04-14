@class NSDictionary, BSServiceDomainSpecification, BSXPCServiceConnectionListener, NSMutableArray;

@interface BSServiceDomain : NSObject {
    BSServiceDomainSpecification *_specification;
    BSXPCServiceConnectionListener *_xpcListener;
    NSDictionary *_identifierToService;
    NSMutableArray *_lock_incomingConnections;
    unsigned long long _lock_activations;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_deactivating;
    BOOL _lock_invalidated;
}

- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;

@end
