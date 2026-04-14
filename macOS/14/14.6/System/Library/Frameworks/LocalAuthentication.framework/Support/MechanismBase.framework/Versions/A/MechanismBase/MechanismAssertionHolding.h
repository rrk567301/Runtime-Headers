@interface MechanismAssertionHolding : MechanismAssertion

@property (readonly, nonatomic) id object;

- (void).cxx_destruct;
- (void)dropWithReason:(id)a0;
- (id)additionalDescription;
- (id)initWithMechanism:(id)a0 object:(id)a1;

@end
