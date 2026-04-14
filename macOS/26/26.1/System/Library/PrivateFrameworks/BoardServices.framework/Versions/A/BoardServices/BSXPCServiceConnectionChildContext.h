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
- (BOOL)isClient;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isNonLaunching;
- (BOOL)isEqual:(id)a0;

@end
