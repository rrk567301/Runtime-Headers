@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface WLKPrewarming : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSXPCConnection *_connection;
}

+ (id)sharedInstance;

- (id)init;
- (id)_init;
- (void).cxx_destruct;
- (id)_connection;
- (void)prewarm;
- (void)prewarmDevice;
- (void)_onQueue_prewarmDevice;
- (void)prewarmDeviceAndNetwork;

@end
