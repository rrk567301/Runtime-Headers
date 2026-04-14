@interface AASignInWithAppleManagementUIRequest : AAAppleIDSettingsRequest

- (id)urlRequest;
- (id)urlString;
- (BOOL)_isPasswordAppInstalled;

@end
