@class NSURL, PKPeerPaymentDynamicFraudPageBodyTextContent;

@interface PKPeerPaymentDynamicFraudPageBodyLinkContent : PKPeerPaymentDynamicFraudPageBodyContent

@property (readonly, copy, nonatomic) PKPeerPaymentDynamicFraudPageBodyTextContent *textContent;
@property (readonly, copy, nonatomic) NSURL *url;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
