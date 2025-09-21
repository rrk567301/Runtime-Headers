@class NSURL, UIImage, NSString;

@interface CPSTVProviderRequest : CPSAuthenticationRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *providerURL;
@property (retain, nonatomic) UIImage *providerImage;
@property (retain, nonatomic) NSString *providerName;
@property (retain, nonatomic) NSString *providerCode;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (long long)authType;
- (void).cxx_destruct;

@end
