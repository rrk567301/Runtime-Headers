@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface WLKPrewarming : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSXPCConnection *_connection;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)prewarm;
- (id)_connection;
- (id)_init;
- (void)prewarmSubscriptionData;
- (void)prewarmWithConfigCachePolicy:(unsigned long long)a0;
- (void)_onQueue_prewarmDevice;
- (void)prewarmDevice;
- (void)prewarmDeviceAndNetwork;

@end
