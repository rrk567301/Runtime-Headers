@interface MSPowerAssertionManager : NSObject

@property (nonatomic) BOOL isBusy;
@property (nonatomic) BOOL isAssertingPowerAssertion;
@property (nonatomic) int busyCount;
@property (nonatomic) int UIBusyCount;

+ (id)sharedManager;

- (void)retainBusy;
- (void)_deassertPowerAssertion;
- (void)releaseBusy;
- (void)retainUIBusy;
- (void)toggleAssertion;
- (void)releaseUIBusy;
- (void)_assertPowerAssertion;
- (void)_recomputePowerAssertion;

@end
