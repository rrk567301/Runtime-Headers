@class NSString, NSMutableArray, NSObject;
@protocol OS_xpc_object;

@interface CMIOExtensionProxy : NSObject <CMIOExtensionProxyContextDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_xpc_object> *_listener;
    NSObject<OS_xpc_object> *_endpoint;
    NSObject<OS_xpc_object> *_proxyEndpoint;
    NSMutableArray *_contexts;
}

@property (readonly) NSObject<OS_xpc_object> *endpoint;
@property (readonly) NSObject<OS_xpc_object> *proxyEndpoint;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)proxyWithEndpoint:(id)a0;

- (void)dealloc;
- (void)invalidate;
- (id)initWithEndpoint:(id)a0;
- (void)addConnection:(id)a0;
- (void)proxyContextHasBeenInvalidated:(id)a0;

@end
