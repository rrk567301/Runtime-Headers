@interface CPLPowerAssertion : NSObject

@property (class, nonatomic) BOOL hasEnoughPower;

+ (void)_retainAssertion;
+ (void)_doProtected:(id /* block */)a0;
+ (void)_releaseAssertion;
+ (void)disableSleep;
+ (void)enableSleep;
+ (id)powerAssertionStatus;

@end
