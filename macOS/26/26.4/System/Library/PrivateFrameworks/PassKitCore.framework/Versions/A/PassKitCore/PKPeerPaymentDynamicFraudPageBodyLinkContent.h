@class NSURL, PKPeerPaymentDynamicFraudPageBodyTextContent;

@interface PKPeerPaymentDynamicFraudPageBodyLinkContent : PKPeerPaymentDynamicFraudPageBodyContent

@property (readonly, copy, nonatomic) PKPeerPaymentDynamicFraudPageBodyTextContent *textContent;
@property (readonly, copy, nonatomic) NSURL *url;

+ (BOOL)supportsSecureCoding;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
