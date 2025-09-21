@class NSMutableArray;

@interface IMExtensionNotificationManager : NSObject

@property (retain, nonatomic) NSMutableArray *notificationsContext;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)notificationCategories;
- (char)canPopulateUserInfoForMessageBalloonBundleID:(id)a0;
- (void)populateUserInfoForNotificationContent:(id)a0 messageBalloonBundleID:(id)a1 payloadData:(id)a2 chatIdentifier:(id)a3 isUrgentMessageTrigger:(char *)a4 shouldSuppressNotification:(char *)a5;
- (char)shouldRetractedMessageForBalloonBundleID:(id)a0;

@end
