@class BSXPCServiceConnectionRootContext;

@interface BSXPCServiceConnectionChildContext : BSXPCServiceConnectionContext {
    BSXPCServiceConnectionRootContext *_parent;
    BOOL _remote;
    unsigned long long _identifier;
}

- (id)debugDescription;
- (id)endpointDescription;
- (BOOL)isNonLaunching;
- (BOOL)isEqual:(id)a0;
- (BOOL)isClient;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isServer;
- (BOOL)isChild;

@end
