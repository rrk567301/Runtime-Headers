@class VSAccountProviderResponse, NSString, NSData, NSDate;

@interface VSAccountMetadata : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *accountProviderIdentifier;
@property (copy, nonatomic) NSDate *authenticationExpirationDate;
@property (copy, nonatomic) NSData *verificationData;
@property (retain, nonatomic) VSAccountProviderResponse *accountProviderResponse;
@property (readonly, copy, nonatomic) NSString *SAMLAttributeQueryResponse;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
