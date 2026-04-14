@class BSXPCServiceConnectionRootContext;

@interface BSXPCServiceConnectionChildContext : BSXPCServiceConnectionContext {
    BSXPCServiceConnectionRootContext *_parent;
    BOOL _remote;
    unsigned long long _identifier;
}

- (id)debugDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isServer;
- (BOOL)isClient;
- (BOOL)isNonLaunching;
- (BOOL)isChild;
- (id)endpointDescription;

@end
