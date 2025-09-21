@class PKPeerPaymentRequestToken;

@interface PKPeerPaymentRequestTokenResponse : PKPeerPaymentWebServiceResponse

@property (readonly, nonatomic) char success;
@property (readonly, nonatomic) PKPeerPaymentRequestToken *requestToken;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithData:(id)a0 deviceScoreIdentifier:(id)a1;

@end
