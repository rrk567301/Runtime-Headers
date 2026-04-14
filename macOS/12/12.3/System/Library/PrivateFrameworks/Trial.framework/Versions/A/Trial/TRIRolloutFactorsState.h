@class TRIRolloutDeployment;

@interface TRIRolloutFactorsState : TRIFactorsState

@property (readonly, nonatomic) TRIRolloutDeployment *deployment;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)rolloutIdentifiers;
- (id)persisted;
- (id)initWithDeployment:(id)a0;
- (BOOL)_isEqualToState:(id)a0;

@end
