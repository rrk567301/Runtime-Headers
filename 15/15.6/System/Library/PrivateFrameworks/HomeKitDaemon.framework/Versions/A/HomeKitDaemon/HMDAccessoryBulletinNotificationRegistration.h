@class NSUUID, NSNumber;

@interface HMDAccessoryBulletinNotificationRegistration : HMDBulletinNotificationRegistration <NSCopying, NSSecureCoding, HMDBulletinNotificationRegistrationRemoteCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) NSUUID *accessoryUUID;
@property (readonly, copy) NSNumber *serviceInstanceID;
@property (readonly, copy) NSNumber *characteristicInstanceID;

+ (id)type;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)attributeDescriptions;
- (id)initWithAccessoryUUID:(id)a0 serviceInstanceID:(id)a1 characteristicInstanceID:(id)a2 conditions:(id)a3;
- (id)serializedRegistrationForRemoteMessage;

@end
