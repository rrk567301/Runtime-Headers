@class UNUserNotificationCenter, NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BRCUserNotificationManager : NSObject <UNUserNotificationCenterDelegate> {
    UNUserNotificationCenter *_birdNotificationCenter;
    NSObject<OS_dispatch_queue> *_notificationsQueue;
    NSMutableDictionary *_sessionsForAccountID;
    NSMutableDictionary *_pendingNotification;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)init;
- (void).cxx_destruct;
- (id)_getQueue;
- (id)_getSessionContextForAccountID:(id)a0;
- (id)_buildNotificationWithMetadata:(id)a0 requestID:(id)a1;
- (void)_configureUserNotificationCenter;
- (id)_notificationCategories;
- (void)addPendingNotificationWithMetadata:(id)a0 requestID:(id)a1 forKey:(id)a2;
- (BOOL)hasPendingNotificationsForIdentifier:(id)a0;
- (void)registerSessionContext:(id)a0 forAccountID:(id)a1;
- (void)removeDeliveredNotificationsMatchingPredicate:(id /* block */)a0;
- (void)scheduleNotificationWithMetadata:(id)a0 requestID:(id)a1;
- (void)schedulePendingNotificationWithIdentifier:(id)a0;
- (void)unRegisterSessionContextForAccountID:(id)a0;

@end
