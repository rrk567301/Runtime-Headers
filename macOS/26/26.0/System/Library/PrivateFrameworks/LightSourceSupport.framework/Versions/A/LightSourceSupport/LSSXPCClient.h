@class NSObject;
@protocol OS_xpc_object, LSSXPCClientDelegate;

@interface LSSXPCClient : NSObject {
    NSObject<OS_xpc_object> *_connection;
    unsigned int _options;
    id<LSSXPCClientDelegate> _delegate;
}

- (void)dealloc;
- (void).cxx_destruct;

@end
