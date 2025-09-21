@interface CPLPowerAssertion : NSObject

@property (class, nonatomic) char hasEnoughPower;

+ (void)_doProtected:(id /* block */)a0;
+ (void)_releaseAssertion;
+ (void)_retainAssertion;
+ (void)disableSleep;
+ (void)enableSleep;
+ (id)powerAssertionStatus;

@end
