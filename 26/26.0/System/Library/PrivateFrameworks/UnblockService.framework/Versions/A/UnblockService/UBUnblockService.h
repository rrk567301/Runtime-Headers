@class NSObject;
@protocol OS_xpc_object, OS_dispatch_workloop;

@interface UBUnblockService : NSObject {
    NSObject<OS_xpc_object> *_listenerConnection;
    NSObject<OS_dispatch_workloop> *_workloop;
    unsigned long long _options;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (id)sharedInstance;

- (id)_init;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)handleIncomingMessage:(id)a0;
- (id)handleReactiveRecoveryRequest:(id)a0;
- (void)openListenerConnection;
- (int)setupAndActivate:(unsigned long long)a0;

@end
