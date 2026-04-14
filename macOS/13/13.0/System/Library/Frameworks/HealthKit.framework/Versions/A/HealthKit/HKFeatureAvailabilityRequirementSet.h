@class NSDictionary;

@interface HKFeatureAvailabilityRequirementSet : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *requirementsByContext;

+ (id)noRequirements;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)allRequirements;
- (id)initWithRequirementsByContext:(id)a0;
- (id)_initWithRequirementsByContext:(id)a0;
- (id)evaluationByContextWithDataSource:(id)a0 overrides:(id)a1 error:(id *)a2;
- (id)evaluationForContext:(id)a0 dataSource:(id)a1 overrides:(id)a2 error:(id *)a3;
- (id)allRequirementIdentifiers;
- (id)allObservableRequirements;

@end
