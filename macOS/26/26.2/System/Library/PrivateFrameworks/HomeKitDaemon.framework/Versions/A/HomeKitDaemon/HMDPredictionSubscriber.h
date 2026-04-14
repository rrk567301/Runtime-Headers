@class HMFMessageDispatcher, NSObject;
@protocol OS_dispatch_queue, HMDarwinNotificationProvider, HMDPredictionSubscriberDataSource;

@interface HMDPredictionSubscriber : HMFObject

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) id<HMDarwinNotificationProvider> darwinNotificationProvider;
@property long long notificationBackend;
@property int predictionsChangedNotificationToken;
@property (weak) id<HMDPredictionSubscriberDataSource> dataSource;

- (void)configure;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithWorkQueue:(id)a0 messageDispatcher:(id)a1 notificationBackend:(long long)a2;
- (id)initWithWorkQueue:(id)a0 messageDispatcher:(id)a1 notificationBackend:(long long)a2 darwinNotificationProvider:(id)a3;
- (id)notificationNameForBackend:(long long)a0;

@end
