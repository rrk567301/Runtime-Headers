@class BSXPCServiceConnectionRootContext;

@interface BSXPCServiceConnectionChildContext : BSXPCServiceConnectionContext {
    BSXPCServiceConnectionRootContext *_parent;
    BOOL _remote;
    unsigned long long _identifier;
}

- (BOOL)isServer;
- (BOOL)isChild;
- (id)debugDescription;
- (BOOL)isNonLaunching;
- (id)endpointDescription;
- (void).cxx_destruct;
- (BOOL)isClient;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
