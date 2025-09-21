@class VSOptional, NSString, NSArray, VSAccountMetadataRequest;

@interface VSViewServiceRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) VSOptional *requestingAppDisplayName;
@property (retain, nonatomic) NSString *requestingAppAdamID;
@property (readonly, nonatomic, getter=isPreAuthRequest) char preAuthRequest;
@property (nonatomic) char allowsPrivacyUI;
@property (nonatomic) char requiresPrivacyUI;
@property (nonatomic) char canVetoAuthentication;
@property (copy, nonatomic) VSAccountMetadataRequest *accountMetadataRequest;
@property (readonly, nonatomic) char allowsAuthenticationUI;
@property (readonly, copy, nonatomic) NSArray *supportedIdentityProviderIdentifiers;
@property (readonly, copy, nonatomic) NSArray *featuredIdentityProviderIdentifiers;
@property (readonly, copy, nonatomic) NSArray *applicationAccountProviders;
@property (nonatomic) char shouldInferFeaturedProviders;
@property (nonatomic) char shouldReturnErrorOnTVProviderFeatureUnsupportedByStorefront;
@property (readonly, copy, nonatomic) NSArray *supportedAccountProviderAuthenticationSchemes;
@property (readonly, copy, nonatomic) NSString *localizedVideoTitle;
@property (readonly, copy, nonatomic) NSString *accountProviderAuthenticationToken;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
