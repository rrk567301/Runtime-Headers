@class NSUUID;

@interface HMDCameraSignificantEventBulletinNotificationRegistration : HMDBulletinNotificationRegistration <NSCopying, NSSecureCoding, HMDBulletinNotificationRegistrationRemoteCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) NSUUID *cameraIdentifier;
@property (readonly) unsigned long long notificationModes;
@property (readonly) unsigned long long significantEventTypes;
@property (readonly) unsigned long long personFamiliarityOptions;

+ (id)type;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)predicate;
- (id)attributeDescriptions;
- (id)initWithCameraIdentifier:(id)a0 notificationModes:(unsigned long long)a1 significantEventTypes:(unsigned long long)a2 personFamiliarityOptions:(unsigned long long)a3 conditions:(id)a4;
- (id)serializedRegistrationForRemoteMessage;

@end
