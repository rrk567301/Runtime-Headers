@interface MSPowerAssertionManager : NSObject

@property (nonatomic) char isBusy;
@property (nonatomic) char isAssertingPowerAssertion;
@property (nonatomic) int busyCount;
@property (nonatomic) int UIBusyCount;

+ (id)sharedManager;

- (void)toggleAssertion;
- (void)_assertPowerAssertion;
- (void)_deassertPowerAssertion;
- (void)_recomputePowerAssertion;
- (void)releaseBusy;
- (void)releaseUIBusy;
- (void)retainBusy;
- (void)retainUIBusy;

@end
