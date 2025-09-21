@class NSPredicate;

@interface HMMutableCameraUserNotificationSettings : HMCameraUserNotificationSettings

@property long long version;
@property (getter=isAccessModeChangeNotificationEnabled) char accessModeChangeNotificationEnabled;
@property (getter=isReachabilityEventNotificationEnabled) char reachabilityEventNotificationEnabled;
@property (getter=isSmartBulletinBoardNotificationEnabled) char smartBulletinBoardNotificationEnabled;
@property (copy) NSPredicate *smartBulletinBoardNotificationCondition;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
