@class PKPeerPaymentQuote, NSDictionary;

@interface PKPeerPaymentRequest : PKPaymentRequest

@property (readonly, nonatomic) PKPeerPaymentQuote *peerPaymentQuote;
@property (nonatomic) unsigned long long peerPaymentType;
@property (copy, nonatomic) NSDictionary *analyticsMessagesContext;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isP2P;
- (id)initWithPeerPaymentQuote:(id)a0;
- (id)initWithPeerPaymentQuote:(id)a0 peerPaymentType:(unsigned long long)a1;
- (BOOL)isDeviceTap;

@end
