@interface CPLPowerAssertion : NSObject

@property (class, nonatomic) BOOL hasEnoughPower;

+ (void)enableSleep;
+ (void)_releaseAssertion;
+ (void)_doProtected:(id /* block */)a0;
+ (id)powerAssertionStatus;
+ (void)_retainAssertion;
+ (void)disableSleep;

@end
