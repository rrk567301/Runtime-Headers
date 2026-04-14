@class BSXPCServiceConnectionEndpoint;

@interface BSXPCServiceConnectionRootClientContext : BSXPCServiceConnectionRootContext {
    BSXPCServiceConnectionEndpoint *_endpoint;
}

- (BOOL)isClient;
- (void).cxx_destruct;
- (BOOL)isNonLaunching;

@end
