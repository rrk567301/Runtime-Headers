@class NSString;

@interface NEProfilePayloadBaseVPN : NEProfilePayloadBase {
    char _userNameRequired;
    char _passwordRequired;
    char _proxyUserNameRequired;
    char _proxyPasswordRequired;
    char _sharedSecretRequired;
    char _pinRequired;
    NSString *_userName;
    NSString *_password;
    NSString *_proxyUserName;
    NSString *_proxyPassword;
    NSString *_sharedSecret;
    NSString *_pin;
}

- (void).cxx_destruct;
- (id)initWithPayload:(id)a0;
- (id)validatePayload;
- (id)getPreprocessedPayloadContents;
- (char)setPostprocessedPayloadContents:(id)a0;

@end
