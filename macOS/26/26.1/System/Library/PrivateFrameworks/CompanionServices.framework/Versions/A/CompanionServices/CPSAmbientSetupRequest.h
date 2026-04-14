@class NSURL, NSString;

@interface CPSAmbientSetupRequest : CPSAuthenticationRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *configurationURL;
@property (nonatomic) long long screensaverType;
@property (retain, nonatomic) NSString *extensionToken;

- (void)encodeWithCoder:(id)a0;
- (long long)authType;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
