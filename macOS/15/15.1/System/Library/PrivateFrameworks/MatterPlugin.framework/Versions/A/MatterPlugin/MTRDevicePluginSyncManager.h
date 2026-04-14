@class NSObject;
@protocol OS_dispatch_queue, MTRDevicePluginSyncManagerDelegate;

@interface MTRDevicePluginSyncManager : NSObject {
    id<MTRDevicePluginSyncManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)receiveMessage:(id)a0;
- (id)initWithEndpoint:(id)a0 delegate:(id)a1 queue:(id)a2;

@end
