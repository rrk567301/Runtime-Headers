@class BSServiceSpecification, NSMutableDictionary, BSZeroingWeakReference, BSServiceDomainSpecification, NSMutableArray;

@interface BSService : NSObject {
    BSServiceSpecification *_specification;
    BSServiceDomainSpecification *_domainSpecification;
    BSZeroingWeakReference *_lock_globalListener;
    NSMutableDictionary *_lock_instanceToListener;
    NSMutableArray *_lock_pendedConnections;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_invalidated;
}

- (id)debugDescription;
- (void).cxx_destruct;

@end
