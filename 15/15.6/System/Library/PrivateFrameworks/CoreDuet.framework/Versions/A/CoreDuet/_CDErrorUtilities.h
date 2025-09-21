@interface _CDErrorUtilities : NSObject

+ (char)isCoreDataFatalError:(id)a0;
+ (char)isCoreDataTemporaryError:(id)a0;
+ (void)simulateCrashWithDescription:(id)a0;
+ (id)transformErrorForNSSecureCoding:(id)a0;

@end
