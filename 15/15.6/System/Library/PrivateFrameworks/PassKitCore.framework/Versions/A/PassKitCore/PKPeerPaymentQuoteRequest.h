@class NSDecimalNumber, NSString, PKPeerPaymentQuoteCertificatesResponse, NSDate, PKPeerPaymentRequestToken;

@interface PKPeerPaymentQuoteRequest : PKPeerPaymentWebServiceRequest <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *orderIdentifier;
@property (copy, nonatomic) NSDecimalNumber *amount;
@property (copy, nonatomic) NSString *currency;
@property (nonatomic) char preserveCurrentBalance;
@property (nonatomic) unsigned long long externalFundingSource;
@property (nonatomic) unsigned long long destination;
@property (nonatomic) unsigned long long context;
@property (nonatomic) unsigned long long source;
@property (retain, nonatomic) PKPeerPaymentRequestToken *requestToken;
@property (copy, nonatomic, setter=setDPANIdentifier:) NSString *dpanIdentifier;
@property (copy, nonatomic, setter=setFPANIdentifier:) NSString *fpanIdentifier;
@property (nonatomic) long long paymentNetwork;
@property (nonatomic) unsigned long long paymentMethodType;
@property (retain, nonatomic) NSString *paymentMethodDescription;
@property (retain, nonatomic) NSString *paymentMethodSuffix;
@property (nonatomic) char hasUpdatedPaymentMethod;
@property (copy, nonatomic) NSString *recipientIdentifier;
@property (copy, nonatomic) NSString *senderAddress;
@property (nonatomic) unsigned long long paymentMode;
@property (nonatomic) unsigned long long deviceTapFlow;
@property (copy, nonatomic) NSString *recipientPhoneOrEmail;
@property (copy, nonatomic) NSString *bankName;
@property (copy, nonatomic) NSString *routingNumber;
@property (copy, nonatomic) NSString *accountNumber;
@property (retain, nonatomic) PKPeerPaymentQuoteCertificatesResponse *quoteCertificatesResponse;
@property (copy, nonatomic) NSString *recurringPaymentIdentifier;
@property (nonatomic) unsigned long long frequency;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDecimalNumber *threshold;
@property (nonatomic) char sendImmediately;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1 deviceIdentifier:(id)a2 deviceScore:(id)a3 odiAssessment:(id)a4 deviceMetadata:(id)a5;
- (char)isEqualToPeerPaymentQuoteRequest:(id)a0;
- (void)updateWithPaymentPass:(id)a0;
- (void)updateWithPaymentPass:(id)a0 externalFundingSource:(unsigned long long)a1;

@end
