@class NSString, TRIExperimentDeployment;

@interface TRIExperimentFactorsState : TRIFactorsState

@property (readonly, nonatomic) TRIExperimentDeployment *deployment;
@property (readonly, nonatomic) NSString *treatmentId;

+ (char)supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)experimentIdentifiers;
- (id)persisted;
- (id)initWithDeployment:(id)a0 treatmentId:(id)a1;
- (char)_isEqualToState:(id)a0;

@end
