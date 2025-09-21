@class POUserLoginConfiguration, NSString;

@interface ASAuthorizationProviderExtensionUserLoginConfiguration : NSObject

@property (readonly, nonatomic) POUserLoginConfiguration *userLoginConfiguration;
@property (copy, nonatomic) NSString *loginUserName;

- (void).cxx_destruct;
- (id)initWithUserLoginConfiguration:(id)a0;
- (id)initWithLoginUserName:(id)a0;
- (char)setCustomAssertionRequestBodyClaims:(id)a0 returningError:(id *)a1;
- (char)setCustomAssertionRequestHeaderClaims:(id)a0 returningError:(id *)a1;
- (char)setCustomLoginRequestBodyClaims:(id)a0 returningError:(id *)a1;
- (char)setCustomLoginRequestHeaderClaims:(id)a0 returningError:(id *)a1;

@end
