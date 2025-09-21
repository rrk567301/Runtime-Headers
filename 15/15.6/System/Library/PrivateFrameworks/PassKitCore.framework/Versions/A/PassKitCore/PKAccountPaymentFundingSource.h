@class NSString, PKAccountPaymentFundingDetails;

@interface PKAccountPaymentFundingSource : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *accountSuffix;
@property (copy, nonatomic) PKAccountPaymentFundingDetails *fundingDetails;

+ (Class)fundingDetailsClassForFundingSourceType:(long long)a0;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithType:(long long)a0;
- (id)displayDescription;
- (id)jsonString;
- (id)jsonDictionaryRepresentation;
- (id)bankAccountRepresentation;
- (id)hashComponentWithCertificatesResponse:(id)a0;
- (id)jsonDictionaryRepresentationWithCertificatesResponse:(id)a0;

@end
