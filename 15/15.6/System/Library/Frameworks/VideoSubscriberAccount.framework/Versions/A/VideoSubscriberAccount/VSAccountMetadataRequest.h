@class NSString, NSArray;

@interface VSAccountMetadataRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *channelIdentifier;
@property (copy, nonatomic) NSArray *supportedAccountProviderIdentifiers;
@property (copy, nonatomic) NSArray *featuredAccountProviderIdentifiers;
@property (copy, nonatomic) NSString *verificationToken;
@property (nonatomic) char includeAccountProviderIdentifier;
@property (nonatomic) char includeAuthenticationExpirationDate;
@property (copy, nonatomic) NSString *localizedVideoTitle;
@property (nonatomic, getter=isInterruptionAllowed) char interruptionAllowed;
@property (nonatomic) char forceAuthentication;
@property (copy, nonatomic) NSArray *attributeNames;
@property (copy, nonatomic) NSArray *supportedAuthenticationSchemes;
@property (copy, nonatomic) NSString *accountProviderAuthenticationToken;
@property (copy, nonatomic) NSArray *applicationAccountProviders;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
