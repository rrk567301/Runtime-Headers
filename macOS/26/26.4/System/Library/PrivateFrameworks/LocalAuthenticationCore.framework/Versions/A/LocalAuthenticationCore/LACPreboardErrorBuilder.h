@interface LACPreboardErrorBuilder : NSObject

+ (id)notSupportedError;
+ (BOOL)error:(id)a0 hasCode:(long long)a1;
+ (id)genericErrorWithMessage:(id)a0;
+ (id)profileInstallErrorWithMessage:(id)a0;
+ (id)genericErrorWithUnderlyingError:(id)a0;
+ (id)passcodeVerificationErrorWithMessage:(id)a0;
+ (id)variableSetErrorWithMessage:(id)a0;

- (id)init;

@end
