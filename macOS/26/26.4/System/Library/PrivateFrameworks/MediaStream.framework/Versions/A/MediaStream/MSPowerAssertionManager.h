@interface MSPowerAssertionManager : NSObject

@property (nonatomic) BOOL isBusy;
@property (nonatomic) BOOL isAssertingPowerAssertion;
@property (nonatomic) int busyCount;
@property (nonatomic) int UIBusyCount;

+ (id)sharedManager;

- (void)retainBusy;
- (void)releaseBusy;
- (void)toggleAssertion;
- (void)releaseUIBusy;
- (void)_assertPowerAssertion;
- (void)_recomputePowerAssertion;
- (void)_deassertPowerAssertion;
- (void)retainUIBusy;

@end
