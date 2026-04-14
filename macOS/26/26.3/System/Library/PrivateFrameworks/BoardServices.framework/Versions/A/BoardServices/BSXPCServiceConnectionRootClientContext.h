@class BSXPCServiceConnectionEndpoint;

@interface BSXPCServiceConnectionRootClientContext : BSXPCServiceConnectionRootContext {
    BSXPCServiceConnectionEndpoint *_endpoint;
}

- (BOOL)isNonLaunching;
- (void).cxx_destruct;
- (BOOL)isClient;

@end
