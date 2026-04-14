@interface MSPowerAssertionManager : NSObject

@property (nonatomic) BOOL isBusy;
@property (nonatomic) BOOL isAssertingPowerAssertion;
@property (nonatomic) int busyCount;
@property (nonatomic) int UIBusyCount;

+ (id)sharedManager;

- (void)retainUIBusy;
- (void)_assertPowerAssertion;
- (void)releaseBusy;
- (void)_recomputePowerAssertion;
- (void)releaseUIBusy;
- (void)retainBusy;
- (void)_deassertPowerAssertion;
- (void)toggleAssertion;

@end
