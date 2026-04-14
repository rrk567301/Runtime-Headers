@class NSURL, NSString;

@interface CPSAmbientSetupRequest : CPSAuthenticationRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *configurationURL;
@property (nonatomic) long long screensaverType;
@property (retain, nonatomic) NSString *extensionToken;

- (long long)authType;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
