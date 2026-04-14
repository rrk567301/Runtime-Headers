@class BSXPCServiceConnectionRootContext;

@interface BSXPCServiceConnectionChildContext : BSXPCServiceConnectionContext {
    BSXPCServiceConnectionRootContext *_parent;
    BOOL _remote;
    unsigned long long _identifier;
}

- (BOOL)isServer;
- (BOOL)isChild;
- (id)endpointDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isClient;
- (id)debugDescription;
- (void).cxx_destruct;
- (BOOL)isNonLaunching;

@end
