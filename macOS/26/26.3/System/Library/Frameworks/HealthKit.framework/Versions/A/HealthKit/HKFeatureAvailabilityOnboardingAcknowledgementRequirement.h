@class NSString;

@interface HKFeatureAvailabilityOnboardingAcknowledgementRequirement : HKFeatureAvailabilityOnboardingRecordRequirement

@property (readonly, copy, nonatomic) NSString *onboardingAcknowledgedKey;
@property (readonly, nonatomic) BOOL isAcknowledged;

+ (BOOL)supportsSecureCoding;

- (id)isSatisfiedWithOnboardingRecord:(id)a0 dataSource:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFeatureIdentifier:(id)a0 onboardingAcknowledgedKey:(id)a1 isAcknowledged:(BOOL)a2;

@end
