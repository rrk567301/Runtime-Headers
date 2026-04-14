@class BSXPCServiceConnectionEndpoint;

@interface BSXPCServiceConnectionRootClientContext : BSXPCServiceConnectionRootContext {
    BSXPCServiceConnectionEndpoint *_endpoint;
}

- (BOOL)isNonLaunching;
- (BOOL)isClient;
- (void).cxx_destruct;

@end
