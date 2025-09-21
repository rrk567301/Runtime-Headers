@interface TRICEnvironmentManager : NSObject

+ (int)checkDeviceUnlocked;
+ (int)checkIfConnectedToVPN:(char *)a0;
+ (long long)currentEnv;
+ (id)envToString:(long long)a0;
+ (const struct passwd { char *x0; char *x1; unsigned int x2; unsigned int x3; long long x4; char *x5; char *x6; char *x7; char *x8; long long x9; } *)getLoginPasswd;
+ (int)resetDaemonProcess;
+ (id)trialDaemonUserName;
+ (char)validateTrialPath:(id)a0 requireUserPath:(char)a1;

@end
