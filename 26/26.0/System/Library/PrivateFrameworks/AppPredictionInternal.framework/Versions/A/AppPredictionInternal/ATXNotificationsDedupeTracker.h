@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface ATXNotificationsDedupeTracker : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_recordsTable;
}

+ (id)sharedInstance;

- (BOOL)addNotificationId:(id)a0;
- (id)init;
- (void)insertEvent:(long long)a0 notificationID:(id)a1;
- (void).cxx_destruct;

@end
