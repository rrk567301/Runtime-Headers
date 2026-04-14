@class FBWorkspaceDomain, BSServiceConnectionEndpoint, NSString;

@interface FBWorkspaceEndpointPromise : NSObject {
    BSServiceConnectionEndpoint *_lock_endpoint;
    FBWorkspaceDomain *_lock_domain;
    NSString *_domainIdentifier;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (id)description;
- (void).cxx_destruct;

@end
