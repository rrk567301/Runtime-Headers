@interface HMDTimePeriodElement : HMFObject <HMDBulletinNotificationRegistrationRemoteCoding>

+ (id)type;
+ (char)doesTypeMatch:(id)a0 against:(id)a1;

- (id)initWithDictionary:(id)a0;
- (id)serializedRegistrationForRemoteMessage;

@end
