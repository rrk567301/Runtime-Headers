@class TRIRolloutDeployment;

@interface TRIRolloutFactorsState : TRIFactorsState

@property (readonly, nonatomic) TRIRolloutDeployment *deployment;

+ (char)supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)rolloutIdentifiers;
- (id)persisted;
- (char)_isEqualToState:(id)a0;
- (id)initWithDeployment:(id)a0;

@end
