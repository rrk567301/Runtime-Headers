@interface CPLPowerAssertion : NSObject

@property (class, nonatomic) BOOL hasEnoughPower;

+ (void)_releaseAssertion;
+ (void)enableSleep;
+ (void)_retainAssertion;
+ (void)disableSleep;
+ (void)_doProtected:(id /* block */)a0;
+ (id)powerAssertionStatus;

@end
