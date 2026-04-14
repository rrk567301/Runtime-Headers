@class NSArray, NSString;

@interface IMDFamilyInviteNotificationContext : NSObject <IMDNotificationContextProtocol>

@property (copy, nonatomic) NSArray *actions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)notificationCategories;
- (void).cxx_destruct;
- (BOOL)canPopulateUserInfoForMessageBalloonBundleID:(id)a0;
- (BOOL)inviteeIsTeen;
- (void)populateUserInfoForNotificationContent:(id)a0 messageBalloonBundleID:(id)a1 payloadData:(id)a2;

@end
