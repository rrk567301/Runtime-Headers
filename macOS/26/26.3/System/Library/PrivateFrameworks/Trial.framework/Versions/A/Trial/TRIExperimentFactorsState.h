@class NSString, TRIExperimentDeployment;

@interface TRIExperimentFactorsState : TRIFactorsState

@property (readonly, nonatomic) TRIExperimentDeployment *deployment;
@property (readonly, nonatomic) NSString *treatmentId;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)experimentIdentifiers;
- (id)persisted;
- (id)initWithDeployment:(id)a0 treatmentId:(id)a1;
- (BOOL)_isEqualToState:(id)a0;

@end
