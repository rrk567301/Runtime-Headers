@class NSSet;

@interface HMDPresenceNotificationCondition : HMDNotificationCondition <HMDBulletinNotificationRegistrationRemoteCoding>

@property (readonly) unsigned long long presenceEventType;
@property (readonly) unsigned long long presenceEventUserType;
@property (readonly, copy) NSSet *userUUIDs;

+ (BOOL)supportsSecureCoding;
+ (id)type;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)attributeDescriptions;
- (id)serializedRegistrationForRemoteMessage;
- (id)initWithPresenceEventType:(unsigned long long)a0 presenceEventUserType:(unsigned long long)a1 userUUIDs:(id)a2;

@end
