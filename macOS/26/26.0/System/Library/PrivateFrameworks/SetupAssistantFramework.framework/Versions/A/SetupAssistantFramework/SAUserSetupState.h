@interface SAUserSetupState : NSObject

+ (unsigned long long)getSetupStateForUser:(unsigned int)a0;
+ (void)notifyWhenUserIsSetup:(unsigned int)a0 withCompletionBlock:(id /* block */)a1;
+ (BOOL)hasSetupRunThisBootForUser:(unsigned int)a0;
+ (BOOL)isSetupRunningForSetupUser;

@end
