@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface ENXPCServiceListener : NSObject {
    NSMutableSet *_connections;
    NSObject<OS_xpc_object> *_xpcListener;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcEndpoint;

+ (id)sharedServiceListener;

- (void).cxx_destruct;
- (id)_init;
- (void)invalidate;
- (void)activate;
- (void)main;
- (id)initAnonymousListener;
- (void)connectionInvalidated:(id)a0;
- (void)xpcConnectionAccept:(id)a0;
- (void)xpcListenerEvent:(id)a0;

@end
