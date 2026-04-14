@class NSString, PKAccountPaymentFundingDetails;

@interface PKAccountPaymentFundingSource : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *accountSuffix;
@property (copy, nonatomic) PKAccountPaymentFundingDetails *fundingDetails;

+ (Class)fundingDetailsClassForFundingSourceType:(long long)a0;

- (id)initWithDictionary:(id)a0;
- (id)initWithType:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)jsonDictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)displayDescription;
- (id)jsonString;
- (id)bankAccountRepresentation;
- (id)hashComponentWithCertificatesResponse:(id)a0;
- (id)jsonDictionaryRepresentationWithCertificatesResponse:(id)a0;

@end
