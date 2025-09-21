@class NSUUID, HMDDeviceAddress, HMDDevice;

@interface HMDBulletinNotificationRegistrationSource : HMFObject <NSCopying, NSSecureCoding, HMDBulletinNotificationRegistrationRemoteCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) NSUUID *userUUID;
@property (readonly, copy) HMDDeviceAddress *deviceAddress;
@property (readonly, copy) HMDDevice *device;

+ (id)type;
+ (char)doesTypeMatch:(id)a0 against:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)attributeDescriptions;
- (id)initWithUserUUID:(id)a0 deviceAddress:(id)a1;
- (id)serializedRegistrationForRemoteMessage;

@end
