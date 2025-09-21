@class NSSet;

@interface HMDPresenceNotificationCondition : HMDNotificationCondition <HMDBulletinNotificationRegistrationRemoteCoding>

@property (readonly) unsigned long long presenceEventType;
@property (readonly) unsigned long long presenceEventUserType;
@property (readonly, copy) NSSet *userUUIDs;

+ (char)supportsSecureCoding;
+ (id)type;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)attributeDescriptions;
- (id)initWithPresenceEventType:(unsigned long long)a0 presenceEventUserType:(unsigned long long)a1 userUUIDs:(id)a2;
- (id)serializedRegistrationForRemoteMessage;

@end
