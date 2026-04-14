@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CALNInMemoryTriggeredEventNotificationDataStorage : NSObject <CALNTriggeredEventNotificationDataStorage>

@property (readonly, nonatomic) NSMutableDictionary *notificationDataMap;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)notificationDataWithIdentifier:(id)a0;
- (void)addNotificationData:(id)a0 withIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)removeNotificationData;
- (id)init;
- (void)removeNotificationDataWithIdentifier:(id)a0;
- (id)notificationData;

@end
