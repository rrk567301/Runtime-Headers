@class NSString, TRIExperimentDeployment;

@interface TRIExperimentFactorsState : TRIFactorsState

@property (readonly, nonatomic) TRIExperimentDeployment *deployment;
@property (readonly, nonatomic) NSString *treatmentId;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)experimentIdentifiers;
- (id)persisted;
- (id)initWithDeployment:(id)a0 treatmentId:(id)a1;
- (BOOL)_isEqualToState:(id)a0;

@end
