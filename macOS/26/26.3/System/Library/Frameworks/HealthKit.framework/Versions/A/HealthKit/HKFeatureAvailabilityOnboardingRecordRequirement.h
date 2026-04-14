@class NSString;

@interface HKFeatureAvailabilityOnboardingRecordRequirement : HKFeatureAvailabilityBaseRequirement <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *featureIdentifier;

- (id)isSatisfiedWithOnboardingRecord:(id)a0 dataSource:(id)a1 error:(id *)a2;
- (id)isSatisfiedWithDataSource:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithFeatureIdentifier:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
