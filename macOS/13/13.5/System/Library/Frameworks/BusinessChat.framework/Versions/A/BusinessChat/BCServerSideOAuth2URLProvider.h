@class NSURL, NSString, NSArray;

@interface BCServerSideOAuth2URLProvider : NSObject <BCBaseOAuth2Protocol, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *redirectURI;
@property (retain, nonatomic) NSURL *authorizationURL;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NSArray *scope;
@property (retain, nonatomic) NSString *state;
@property (retain, nonatomic) NSString *responseType;
@property (retain, nonatomic) NSString *additionalParameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)URLProviderWithDictionary:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)_initWithAuthorizationURL:(id)a0 clientIdentifier:(id)a1 redirectURI:(id)a2 scope:(id)a3 state:(id)a4 responseType:(id)a5 additionalParameters:(id)a6;
- (id)authenticationSessionURL;
- (BOOL)shouldHandleRedirectURI:(id)a0;

@end
