@class NSString, NSArray;

@interface HKFeatureAvailabilityBaseRequirement : NSObject <HKFeatureAvailabilityRequirement, NSCopying>

@property (class, readonly, nonatomic) NSString *requirementIdentifier;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *requirementDescription;
@property (readonly, nonatomic) NSArray *requiredEntitlements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)isSatisfiedWithDataSource:(id)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)_hk_featureAvailabilityRequirements;

@end
