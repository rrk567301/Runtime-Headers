@interface PXPowerController : NSObject

@property (class, readonly, nonatomic) PXPowerController *sharedController;

@property (nonatomic) double powerAssertionStartTime;
@property (nonatomic, getter=isBackgrounded) BOOL backgrounded;
@property (readonly, nonatomic) BOOL hasPowerAssertion;
@property (readonly, nonatomic) BOOL hasBackgroundAssertion;

- (unsigned int)generateAssertionIdentifier;
- (void)addPowerAssertionForIdentifier:(unsigned int)a0 withReason:(unsigned int)a1;
- (void)removePowerAssertionForIdentifier:(unsigned int)a0 withReason:(unsigned int)a1;
- (void)handleEnteringForeground;
- (void)handleEnteringBackground;
- (void)acquireBackgroundAssertion;
- (void)invalidateBackgroundAssertion;

@end
