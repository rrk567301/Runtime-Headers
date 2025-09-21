@interface ICShareNotifier : NSObject

@property (class, nonatomic) char shareNotifierEnabled;

+ (void)clearNotificationForRecordID:(id)a0;
+ (id)defaultsKeyForPreventingNotificationsForIdentifier:(id)a0;
+ (id)notificationTitleForEditors:(id)a0;
+ (id)participantsWithReplicaIDs:(id)a0 inNote:(id)a1;
+ (id)replicaIDsThatEditedTimestamp:(id)a0 sinceTimestamp:(id)a1;
+ (void)setShouldPreventNotifications:(char)a0 forRecordID:(id)a1;
+ (char)shouldPreventNotificationsForRecordID:(id)a0;
+ (char)shouldShowNotificationForNote:(id)a0;
+ (void)showNotificationForNote:(id)a0 editors:(id)a1;
+ (void)showNotificationIfNecessaryForCloudObject:(id)a0 accountID:(id)a1;
+ (void)showNotificationWithTitle:(id)a0 message:(id)a1 userInfo:(id)a2;

@end
