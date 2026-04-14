@interface CPLPowerAssertion : NSObject

@property (class, nonatomic) BOOL hasEnoughPower;

+ (void)_releaseAssertion;
+ (void)enableSleep;
+ (id)powerAssertionStatus;
+ (void)_retainAssertion;
+ (void)_doProtected:(id /* block */)a0;
+ (void)disableSleep;

@end
