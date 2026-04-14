@interface MSPowerAssertionManager : NSObject

@property (nonatomic) BOOL isBusy;
@property (nonatomic) BOOL isAssertingPowerAssertion;
@property (nonatomic) int busyCount;
@property (nonatomic) int UIBusyCount;

+ (id)sharedManager;

- (void)_recomputePowerAssertion;
- (void)_assertPowerAssertion;
- (void)retainUIBusy;
- (void)releaseUIBusy;
- (void)releaseBusy;
- (void)toggleAssertion;
- (void)_deassertPowerAssertion;
- (void)retainBusy;

@end
