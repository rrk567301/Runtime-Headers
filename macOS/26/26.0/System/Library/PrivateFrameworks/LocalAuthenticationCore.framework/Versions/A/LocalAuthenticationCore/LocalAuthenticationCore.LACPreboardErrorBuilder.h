@interface LocalAuthenticationCore.LACPreboardErrorBuilder : NSObject

+ (id)notSupportedError;
+ (id)genericErrorWithMessage:(id)a0;
+ (id)genericErrorWithUnderlyingError:(id)a0;
+ (BOOL)hasCode:(id)a0 code:(long long)a1;
+ (id)passcodeVerificationErrorWith:(id)a0;
+ (id)profileInstallErrorWith:(id)a0;
+ (id)variableSetErrorWith:(id)a0;

- (id)init;

@end
