@interface HMFPowerAssertion : HMFAssertion

@property (nonatomic) unsigned int identifier;

- (void)invalidate;
- (void)_cleanUpPowerAssertion;
- (id)initWithName:(id)a0 timeout:(double)a1;
- (id)initWithName:(id)a0;

@end
