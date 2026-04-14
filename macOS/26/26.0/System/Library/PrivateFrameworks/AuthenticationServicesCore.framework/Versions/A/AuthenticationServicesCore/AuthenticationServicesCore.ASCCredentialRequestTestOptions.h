@class NSString, _TtC10SafariCore29WBSPasswordManagerTestOptions;

@interface AuthenticationServicesCore.ASCCredentialRequestTestOptions : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ isKeychainSyncEnabled;
    void /* unknown type, empty encoding */ shouldAutoFillFromICloudKeychain;
    void /* unknown type, empty encoding */ localAuthenticationResult;
    void /* unknown type, empty encoding */ hasPasscode;
    void /* unknown type, empty encoding */ biometryType;
    void /* unknown type, empty encoding */ isRequesterAWebBrowser;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) _TtC10SafariCore29WBSPasswordManagerTestOptions *passwordManagerTestOptions;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
