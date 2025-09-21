@class NSSet, NSString, NSArray, HMRestrictedGuestHomeAccessSchedule;

@interface HMRestrictedGuestHomeAccessSettings : NSObject <HMFObject, NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSSet *accessAllowedToAccessories;
@property (copy, nonatomic) HMRestrictedGuestHomeAccessSchedule *guestAccessSchedule;
@property (copy, nonatomic) NSSet *identifiersOfAccessAllowedToAccessories;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (char)doesAccessoryHaveRestrictedGuestCapableServiceTypes:(id)a0;
+ (id)secureClassServices;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)doAllAccessoriesBelongToHome:(id)a0;
- (void)fixupAccessoriesForHome:(id)a0;
- (id)locksWithReducedFunctionalityDueToSchedule;

@end
