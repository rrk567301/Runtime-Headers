@class TRIBMLTDeployment;

@interface TRIBMLTFactorsState : TRIFactorsState

@property (readonly, nonatomic) TRIBMLTDeployment *deployment;

+ (char)supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)persisted;
- (id)bmltIdentifiers;
- (char)_isEqualToState:(id)a0;
- (id)initWithDeployment:(id)a0;

@end
