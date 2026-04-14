@interface _BEUtil : NSObject

+ (BOOL)isDeveloperModeEnabled;
+ (void)checkEligibility;
+ (const struct { unsigned int x0[8]; } *)auditTokenForCurrentProcess;
+ (BOOL)currentProcessIsPlatformBinary;
+ (void)setEligibilityForTesting:(BOOL)a0;

@end
