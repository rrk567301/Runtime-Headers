@class NSSet, NSPredicate;

@interface HMDBulletinNotificationRegistration : HMFObject <NSCopying, NSSecureCoding, HMDBulletinNotificationRegistrationRemoteCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSSet *conditions;
@property (readonly, copy) NSPredicate *predicate;

+ (id)type;
+ (BOOL)doesTypeMatch:(id)a0 against:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithConditions:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)serializedRegistrationForRemoteMessage;

@end
