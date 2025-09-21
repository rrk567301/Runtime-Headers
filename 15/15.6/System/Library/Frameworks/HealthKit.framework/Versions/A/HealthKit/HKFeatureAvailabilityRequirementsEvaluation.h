@class NSOrderedSet, NSDictionary, NSString, NSArray;

@interface HKFeatureAvailabilityRequirementsEvaluation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *satisfactionByRequirementIdentifier;
@property (readonly, copy, nonatomic) NSOrderedSet *requirementIdentifiersOrderedByPriority;
@property (readonly, nonatomic) NSString *highestPriorityUnsatisfiedRequirement;
@property (readonly, copy, nonatomic) NSArray *unsatisfiedRequirementIdentifiers;

+ (id)emptyEvaluation;
+ (id)evaluationOfRequirements:(id)a0 dataSource:(id)a1 overrides:(id)a2 error:(id *)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (char)areAllRequirementsSatisfied;
- (id)copyUpdatingRequirementForIdentifier:(id)a0 isSatisfied:(char)a1;
- (id)initWithRequirementIdentifiersOrderedByPriority:(id)a0 satisfactionByRequirementIdentifier:(id)a1;
- (char)isRequirementSatisfiedWithIdentifier:(id)a0;
- (id)unsatisfiedRequirementIdentifiersDescription;

@end
