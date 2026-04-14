@interface CPLPowerAssertion : NSObject

@property (class, nonatomic) BOOL hasEnoughPower;

+ (void)_doProtected:(id /* block */)a0;
+ (void)_retainAssertion;
+ (void)_releaseAssertion;
+ (void)disableSleep;
+ (void)enableSleep;
+ (id)powerAssertionStatus;

@end
