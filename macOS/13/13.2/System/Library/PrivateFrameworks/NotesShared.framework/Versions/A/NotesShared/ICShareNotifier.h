@interface ICShareNotifier : NSObject

+ (void)clearNotificationForRecordID:(id)a0;
+ (void)showNotificationIfNecessaryForCloudObject:(id)a0 accountID:(id)a1;
+ (BOOL)shouldShowNotificationForNote:(id)a0;
+ (id)replicaIDsThatEditedTimestamp:(id)a0 sinceTimestamp:(id)a1;
+ (id)participantsWithReplicaIDs:(id)a0 inNote:(id)a1;
+ (void)showNotificationForNote:(id)a0 editors:(id)a1;
+ (void)showNotificationWithTitle:(id)a0 message:(id)a1 userInfo:(id)a2;
+ (id)notificationTitleForEditors:(id)a0;
+ (id)defaultsKeyForPreventingNotificationsForIdentifier:(id)a0;
+ (BOOL)shouldPreventNotificationsForRecordID:(id)a0;
+ (void)setShouldPreventNotifications:(BOOL)a0 forRecordID:(id)a1;

@end
