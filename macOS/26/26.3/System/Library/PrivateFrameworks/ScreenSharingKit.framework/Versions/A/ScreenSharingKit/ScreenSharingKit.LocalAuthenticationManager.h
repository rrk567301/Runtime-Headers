@interface ScreenSharingKit.LocalAuthenticationManager : NSObject {
    void /* unknown type, empty encoding */ currentAuthorizationContext;
    void /* unknown type, empty encoding */ approveByMacAuthenticationContext;
    void /* unknown type, empty encoding */ authorizationContinuation;
    void /* unknown type, empty encoding */ authByMacContinuation;
    void /* unknown type, empty encoding */ authByMacAppName;
    void /* unknown type, empty encoding */ currentNumberOfPasswordAttempts;
    void /* unknown type, empty encoding */ authAutomaticModeKey;
    void /* unknown type, empty encoding */ maxNumberOfPasswordAttempts;
    void /* unknown type, empty encoding */ aksKeybagHandle;
    void /* unknown type, empty encoding */ _isAutomaticAuthenticationEnabled;
}

- (id)init;
- (void).cxx_destruct;
- (void)isLocalAuthenticationRequiredWithCompletionHandler:(void (^)(BOOL))a0;

@end
