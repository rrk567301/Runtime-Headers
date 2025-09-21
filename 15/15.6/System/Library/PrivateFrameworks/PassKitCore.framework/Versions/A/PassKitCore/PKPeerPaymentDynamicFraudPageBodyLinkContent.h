@class NSURL, PKPeerPaymentDynamicFraudPageBodyTextContent;

@interface PKPeerPaymentDynamicFraudPageBodyLinkContent : PKPeerPaymentDynamicFraudPageBodyContent

@property (readonly, copy, nonatomic) PKPeerPaymentDynamicFraudPageBodyTextContent *textContent;
@property (readonly, copy, nonatomic) NSURL *url;

+ (char)supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
