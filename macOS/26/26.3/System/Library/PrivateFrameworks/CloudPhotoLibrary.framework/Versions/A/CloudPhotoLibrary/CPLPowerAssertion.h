@interface CPLPowerAssertion : NSObject

@property (class, nonatomic) BOOL hasEnoughPower;

+ (id)powerAssertionStatus;
+ (void)_retainAssertion;
+ (void)_releaseAssertion;
+ (void)_doProtected:(id /* block */)a0;
+ (void)enableSleep;
+ (void)disableSleep;

@end
