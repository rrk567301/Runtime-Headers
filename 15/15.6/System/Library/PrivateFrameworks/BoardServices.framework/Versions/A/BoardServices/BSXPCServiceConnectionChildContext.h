@class BSXPCServiceConnectionRootContext;

@interface BSXPCServiceConnectionChildContext : BSXPCServiceConnectionContext {
    BSXPCServiceConnectionRootContext *_parent;
    char _remote;
    unsigned long long _identifier;
}

- (id)debugDescription;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)isServer;
- (char)isNonLaunching;
- (char)isClient;
- (char)isChild;
- (id)endpointDescription;

@end
