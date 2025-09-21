@class HKFeatureOnboardingRecord, NSDictionary, NSString;

@interface HKFeatureStatus : NSObject <HKRedactedDescription, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isOnboardingRecordPresent;
@property (readonly, copy, nonatomic) HKFeatureOnboardingRecord *onboardingRecord;
@property (readonly, copy, nonatomic) NSDictionary *requirementsEvaluationByContext;
@property (readonly, copy) NSString *hk_redactedDescription;

- (id)objectForKeyedSubscript:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)includesContext:(id)a0;
- (id)copyUpdatingRequirement:(id)a0 fromRequirements:(id)a1 isSatisfied:(BOOL)a2;
- (unsigned long long)hash;
- (id)initWithOnboardingRecord:(id)a0 requirementsEvaluationByContext:(id)a1;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
