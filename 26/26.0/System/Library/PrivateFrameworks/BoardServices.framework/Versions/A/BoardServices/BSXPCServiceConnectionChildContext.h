@class BSXPCServiceConnectionRootContext;

@interface BSXPCServiceConnectionChildContext : BSXPCServiceConnectionContext {
    BSXPCServiceConnectionRootContext *_parent;
    BOOL _remote;
    unsigned long long _identifier;
}

- (id)debugDescription;
- (id)endpointDescription;
- (BOOL)isChild;
- (BOOL)isNonLaunching;
- (BOOL)isServer;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isClient;
- (void).cxx_destruct;

@end
