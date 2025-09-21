@interface CPLPowerAssertion : NSObject

@property (class, nonatomic) BOOL hasEnoughPower;

+ (void)_releaseAssertion;
+ (void)enableSleep;
+ (void)_doProtected:(id /* block */)a0;
+ (void)disableSleep;
+ (void)_retainAssertion;
+ (id)powerAssertionStatus;

@end
