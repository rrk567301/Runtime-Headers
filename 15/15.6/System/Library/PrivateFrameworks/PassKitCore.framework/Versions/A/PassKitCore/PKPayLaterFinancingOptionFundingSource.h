@class NSString;
@protocol PKPayLaterFundingSourceDetails;

@interface PKPayLaterFinancingOptionFundingSource : NSObject <PKPayLaterFundingSource>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char autoPayment;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) id<PKPayLaterFundingSourceDetails> details;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)displayName;
- (id)dictionaryRepresentation;
- (id)bankDetails;
- (id)initWithAccountFundingSource:(id)a0;
- (id)initWithPaymentPass:(id)a0 paymentApplication:(id)a1;
- (id)panSuffix;
- (id)paymentPassDetails;
- (id)unmaskedPanSuffix;

@end
