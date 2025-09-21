@class NSArray;

@interface HMDMatterBulletinNotificationRegistration : HMDBulletinNotificationRegistration <NSCopying, NSSecureCoding, HMDBulletinNotificationRegistrationRemoteCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSArray *matterPaths;

+ (id)type;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithMatterPaths:(id)a0 conditions:(id)a1;
- (id)initWithDictionary:(id)a0 withHome:(id)a1;
- (id)serializedRegistrationForRemoteMessage;

@end
