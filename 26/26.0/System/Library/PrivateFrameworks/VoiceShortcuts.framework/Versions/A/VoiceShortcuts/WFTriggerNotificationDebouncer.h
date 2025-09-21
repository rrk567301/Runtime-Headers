@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, WFTriggerNotificationDebouncerDelegate;

@interface WFTriggerNotificationDebouncer : NSObject

@property (readonly, nonatomic) NSMutableDictionary *notificationItemTable;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<WFTriggerNotificationDebouncerDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)addEventsWithIdentifiers:(id)a0 notificationType:(unsigned long long)a1 configuredTrigger:(id)a2 workflowReference:(id)a3;
- (void)debouncerDidFire:(id)a0;

@end
