@class NSString;

@interface IMDSafetyMonitorNotificationContext : NSObject <IMDNotificationContextProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)notificationCategories;
- (char)canPopulateUserInfoForMessageBalloonBundleID:(id)a0;
- (void)populateUserInfoForNotificationContent:(id)a0 messageBalloonBundleID:(id)a1 payloadData:(id)a2 chatIdentifier:(id)a3 isUrgentMessageTrigger:(char *)a4 shouldSuppressNotification:(char *)a5;

@end
