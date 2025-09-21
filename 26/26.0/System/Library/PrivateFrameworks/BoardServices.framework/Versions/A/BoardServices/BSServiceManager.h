@class BSRBSService, BSServicesConfiguration, NSMutableDictionary, BSServiceInitiatingConnectionMultiplexer;

@interface BSServiceManager : NSObject {
    BSRBSService *_RBSService;
    BSServiceInitiatingConnectionMultiplexer *_uiMuxer;
    BSServiceInitiatingConnectionMultiplexer *_dfMuxer;
    BSServicesConfiguration *_bootstrapConfiguration;
    BSServicesConfiguration *_lock_viewServiceConfiguration;
    NSMutableDictionary *_lock_identifierToDomain;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _lock_bootstrapExtensions;
    BOOL _lock_bootstrapped;
    BOOL _lock_invalidated;
}

+ (id)debugDescription;

- (id)debugDescription;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
