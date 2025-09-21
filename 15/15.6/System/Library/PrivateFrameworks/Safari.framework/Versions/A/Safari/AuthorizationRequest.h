@class NSData, LAContext, NSString;

@interface AuthorizationRequest : NSObject {
    LAContext *_localAuthenticationContext;
    long long _localAuthenticationContextCreationTime;
    int _authorizationRight;
    long long _localAuthenticationPolicy;
    NSString *_titleParameter;
}

@property (readonly, copy, nonatomic) NSData *currentExternalizedContext;
@property (readonly, nonatomic) char canAuthorize;

+ (id)localizedDFRTitleForRight:(int)a0 parameter:(id)a1;
+ (id)localizedTitleForRight:(int)a0 parameter:(id)a1;

- (void).cxx_destruct;
- (void)cancel;
- (void)authorizeWithCompletionHandler:(id /* block */)a0;
- (char)_authenticationResultPassed:(id)a0;
- (id)_localAuthenticationContextRespectingReusePolicy;
- (id)_localAuthenticationOptions;
- (char)_requestLocalAuthentication;
- (void)_requestLocalAuthenticationWithCompletionHandler:(id /* block */)a0;
- (char)authorize;
- (void)authorizeWithSheetInWindow:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithAuthorizationRight:(int)a0;
- (id)initWithImportExportAuthenticationMessageType:(id)a0;
- (id)initWithNameOfExtensionToAllowInPrivateBrowsing:(id)a0;
- (id)initWithWebAppName:(id)a0;
- (char)isPasswordsRequest;

@end
