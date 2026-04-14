@class NSOrderedSet, NSDictionary, NSString, NSArray;

@interface HKFeatureAvailabilityRequirementsEvaluation : NSObject <HKRedactedDescription, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *satisfactionByRequirementIdentifier;
@property (readonly, copy, nonatomic) NSOrderedSet *requirementIdentifiersOrderedByPriority;
@property (readonly, nonatomic) NSString *highestPriorityUnsatisfiedRequirement;
@property (readonly, copy, nonatomic) NSArray *unsatisfiedRequirementIdentifiers;
@property (readonly, copy) NSString *hk_redactedDescription;

+ (id)emptyEvaluation;
+ (id)evaluationOfRequirements:(id)a0 dataSource:(id)a1 overrides:(id)a2 error:(id *)a3;

- (id)objectForKeyedSubscript:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithRequirementIdentifiersOrderedByPriority:(id)a0 satisfactionByRequirementIdentifier:(id)a1;
- (BOOL)areAllRequirementsSatisfied;
- (id)copyUpdatingRequirementForIdentifier:(id)a0 isSatisfied:(BOOL)a1;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)unsatisfiedRequirementIdentifiersDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isRequirementSatisfiedWithIdentifier:(id)a0;

@end
