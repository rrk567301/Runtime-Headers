@class NSURL, PKPeerPaymentDynamicFraudPageBodyTextContent;

@interface PKPeerPaymentDynamicFraudPageBodyLinkContent : PKPeerPaymentDynamicFraudPageBodyContent

@property (readonly, copy, nonatomic) PKPeerPaymentDynamicFraudPageBodyTextContent *textContent;
@property (readonly, copy, nonatomic) NSURL *url;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
