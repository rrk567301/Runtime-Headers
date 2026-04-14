@interface AKAuthorizationAgeValidator : NSObject

+ (BOOL)_isAuthorizedCredentialState:(long long)a0;
+ (BOOL)isValidAgeForRequest:(id)a0 account:(id)a1;

@end
