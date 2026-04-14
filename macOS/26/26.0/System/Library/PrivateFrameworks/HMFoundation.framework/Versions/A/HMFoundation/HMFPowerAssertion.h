@interface HMFPowerAssertion : HMFAssertion

@property (nonatomic) unsigned int identifier;

- (void)invalidate;
- (id)initWithName:(id)a0 timeout:(double)a1;
- (void)_cleanUpPowerAssertion;
- (id)initWithName:(id)a0;

@end
