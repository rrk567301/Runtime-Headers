@class NSPredicate, NSString, NSArray;

@interface HMCameraUserNotificationSettings : NSObject <HMFObject, NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property long long version;
@property (getter=isAccessModeChangeNotificationEnabled) char accessModeChangeNotificationEnabled;
@property (getter=isReachabilityEventNotificationEnabled) char reachabilityEventNotificationEnabled;
@property (getter=isSmartBulletinBoardNotificationEnabled) char smartBulletinBoardNotificationEnabled;
@property (copy) NSPredicate *smartBulletinBoardNotificationCondition;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
