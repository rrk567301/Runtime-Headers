@class NSDecimalNumber, NSString, PKPeerPaymentQuoteCertificatesResponse, PKPeerPaymentRequestToken;

@interface PKPeerPaymentQuoteRequest : PKPeerPaymentWebServiceRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *orderIdentifier;
@property (copy, nonatomic) NSDecimalNumber *amount;
@property (copy, nonatomic) NSString *currency;
@property (nonatomic) BOOL preserveCurrentBalance;
@property (nonatomic) unsigned long long externalFundingSource;
@property (nonatomic) unsigned long long destination;
@property (nonatomic) unsigned long long context;
@property (nonatomic) unsigned long long source;
@property (retain, nonatomic) PKPeerPaymentRequestToken *requestToken;
@property (copy, nonatomic, setter=setDPANIdentifier:) NSString *dpanIdentifier;
@property (copy, nonatomic, setter=setFPANIdentifier:) NSString *fpanIdentifier;
@property (nonatomic) long long paymentNetwork;
@property (nonatomic) unsigned long long paymentMethodType;
@property (copy, nonatomic) NSString *recipientIdentifier;
@property (copy, nonatomic) NSString *senderAddress;
@property (copy, nonatomic) NSString *recipientPhoneOrEmail;
@property (copy, nonatomic) NSString *bankName;
@property (copy, nonatomic) NSString *routingNumber;
@property (copy, nonatomic) NSString *accountNumber;
@property (retain, nonatomic) PKPeerPaymentQuoteCertificatesResponse *quoteCertificatesResponse;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1 deviceIdentifier:(id)a2 deviceScore:(id)a3 deviceMetadata:(id)a4;
- (void)updateWithPaymentPass:(id)a0 externalFundingSource:(unsigned long long)a1;
- (void)updateWithPaymentPass:(id)a0;
- (BOOL)isEqualToPeerPaymentQuoteRequest:(id)a0;

@end
