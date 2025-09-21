@class PKPeerPaymentRequestToken, NSString, PKPeerPaymentRecipient, PKPeerPaymentQuoteRequest, NSDate, NSArray, PKPeerPaymentQuote, PKPeerPaymentPerformResponse, PKAuthorizedPeerPaymentQuote, PKPeerPaymentQuoteCertificatesResponse, NSDecimalNumber;

@interface PKPeerPaymentControllerInternalState : NSObject <NSSecureCoding> {
    unsigned long long state;
    unsigned long long mode;
    unsigned long long peerPaymentType;
    NSString *senderAddress;
    PKPeerPaymentRecipient *recipient;
    PKPeerPaymentRequestToken *requestToken;
    PKPeerPaymentQuote *quote;
    PKAuthorizedPeerPaymentQuote *authorizedQuote;
    PKPeerPaymentPerformResponse *performQuoteResponse;
    BOOL supportsPreserveCurrentBalance;
    PKPeerPaymentQuoteCertificatesResponse *quoteCertificatesResponse;
    NSString *accountName;
    NSString *accountNumber;
    NSString *routingNumber;
    PKPeerPaymentQuoteRequest *quoteRequest;
    NSString *recurringPaymentIdentifier;
    NSDate *startDate;
    unsigned long long frequency;
    NSDecimalNumber *threshold;
    BOOL supportsGroupMessage;
    unsigned long long messagesContext;
    NSArray *recipientAddresses;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToPeerPaymentControllerInternalState:(id)a0;

@end
