@class NSUUID;

@interface HMDCameraReachabilityBulletinNotificationRegistration : HMDBulletinNotificationRegistration <NSCopying, NSSecureCoding, HMDBulletinNotificationRegistrationRemoteCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *accessoryUUID;

+ (id)type;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)attributeDescriptions;
- (id)serializedRegistrationForRemoteMessage;
- (id)initWithAccessoryUUID:(id)a0 remoteDeviceIdentifier:(id)a1 conditions:(id)a2;

@end
