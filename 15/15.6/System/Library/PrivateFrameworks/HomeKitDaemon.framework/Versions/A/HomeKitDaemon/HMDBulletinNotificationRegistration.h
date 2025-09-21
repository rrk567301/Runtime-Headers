@class NSSet, NSPredicate;

@interface HMDBulletinNotificationRegistration : HMFObject <NSCopying, NSSecureCoding, HMDBulletinNotificationRegistrationRemoteCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) NSSet *conditions;
@property (readonly, copy) NSPredicate *predicate;

+ (id)type;
+ (char)doesTypeMatch:(id)a0 against:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithConditions:(id)a0;
- (id)attributeDescriptions;
- (id)serializedRegistrationForRemoteMessage;

@end
