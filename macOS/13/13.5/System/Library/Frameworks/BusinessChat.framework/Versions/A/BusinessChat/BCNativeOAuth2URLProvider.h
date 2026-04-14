@class NSString, NSArray, NSURL;

@interface BCNativeOAuth2URLProvider : NSObject <BCNativeOAuth2Protocol, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NSString *clientSecret;
@property (retain, nonatomic) NSArray *scope;
@property (retain, nonatomic) NSString *state;
@property (retain, nonatomic) NSString *responseType;
@property (retain, nonatomic) NSString *responseEncryptionKey;
@property (retain, nonatomic) NSURL *authorizationURL;
@property (retain, nonatomic) NSURL *accessTokenURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)URLProviderWithDictionary:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithAuthorizationURL:(id)a0 accessTokenURL:(id)a1 clientSecret:(id)a2 clientIdentifier:(id)a3 responseEncryptionKey:(id)a4 scope:(id)a5 state:(id)a6 responseType:(id)a7;
- (id)authenticationSessionURL;
- (BOOL)shouldHandleRedirectURI:(id)a0;
- (id)tokenExchangeBodyWithCode:(id)a0;
- (id)tokenExchangeURL;

@end
