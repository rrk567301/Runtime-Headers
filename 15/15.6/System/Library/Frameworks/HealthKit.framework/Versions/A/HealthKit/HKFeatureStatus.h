@class HKFeatureOnboardingRecord, NSDictionary;

@interface HKFeatureStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char isOnboardingRecordPresent;
@property (readonly, copy, nonatomic) HKFeatureOnboardingRecord *onboardingRecord;
@property (readonly, copy, nonatomic) NSDictionary *requirementsEvaluationByContext;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (id)copyUpdatingRequirement:(id)a0 fromRequirements:(id)a1 isSatisfied:(char)a2;
- (char)includesContext:(id)a0;
- (id)initWithOnboardingRecord:(id)a0 requirementsEvaluationByContext:(id)a1;

@end
