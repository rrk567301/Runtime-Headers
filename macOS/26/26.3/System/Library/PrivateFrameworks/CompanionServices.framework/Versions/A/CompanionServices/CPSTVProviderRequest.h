@class NSURL, UIImage, NSString;

@interface CPSTVProviderRequest : CPSAuthenticationRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *providerURL;
@property (retain, nonatomic) UIImage *providerImage;
@property (retain, nonatomic) NSString *providerName;
@property (retain, nonatomic) NSString *providerCode;

- (id)description;
- (long long)authType;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
