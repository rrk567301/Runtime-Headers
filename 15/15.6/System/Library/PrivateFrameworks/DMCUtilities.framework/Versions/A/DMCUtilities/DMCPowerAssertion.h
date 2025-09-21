@interface DMCPowerAssertion : DMCProcessAssertion

@property (readonly, nonatomic, getter=isParked) char parked;

- (void)dealloc;
- (id)initWithReason:(id)a0;
- (void)park;
- (void)unpark;

@end
