@interface SAUserSetupState : NSObject

+ (unsigned long long)getSetupStateForUser:(unsigned int)a0;
+ (char)isSetupRunningForSetupUser;
+ (void)notifyWhenUserIsSetup:(unsigned int)a0 withCompletionBlock:(id /* block */)a1;

@end
