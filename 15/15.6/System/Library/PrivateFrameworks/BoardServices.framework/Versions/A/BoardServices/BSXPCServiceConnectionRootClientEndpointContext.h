@class NSUUID, NSObject;
@protocol OS_xpc_object;

@interface BSXPCServiceConnectionRootClientEndpointContext : BSXPCServiceConnectionRootContext {
    char _nonLaunching;
    NSObject<OS_xpc_object> *_endpoint;
    NSUUID *_oneshot;
}

- (void).cxx_destruct;
- (char)isNonLaunching;
- (char)isClient;

@end
