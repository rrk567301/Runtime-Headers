@class NSString, VSSubscriptionSource, NSData, NSDate, NSArray;

@interface VSSubscription : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSDate *modificationDate;
@property (copy, nonatomic) NSString *subscriptionInfo;
@property (copy, nonatomic) NSString *derivedSubscriptionInfo;
@property (copy, nonatomic) NSString *providedSubscriptionInfo;
@property (copy, nonatomic) VSSubscriptionSource *source;
@property (readonly, copy, nonatomic) NSData *versionHash;
@property (copy, nonatomic) NSString *subscriberIdentifierHash;
@property (retain, nonatomic) NSString *modifierIdentifier;
@property (retain, nonatomic) NSString *modifierType;
@property (copy, nonatomic) NSDate *expirationDate;
@property (nonatomic) long long accessLevel;
@property (copy, nonatomic) NSArray *tierIdentifiers;
@property (copy, nonatomic) NSString *billingIdentifier;

+ (id)keyPathsForValuesAffectingVersionHash;
+ (id)keyPathsForValuesAffectingSubscriptionInfo;

- (void)setNilValueForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)_updateHash:(id)a0 withValueForProperty:(id)a1;

@end
