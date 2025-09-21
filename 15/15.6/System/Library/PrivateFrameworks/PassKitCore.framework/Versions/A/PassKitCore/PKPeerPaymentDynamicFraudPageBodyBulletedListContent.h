@class NSArray, PKPeerPaymentDynamicFraudPageBodyContent;

@interface PKPeerPaymentDynamicFraudPageBodyBulletedListContent : PKPeerPaymentDynamicFraudPageBodyContent

@property (readonly, copy, nonatomic) NSArray *lines;
@property (readonly, copy, nonatomic) PKPeerPaymentDynamicFraudPageBodyContent *footer;

+ (char)supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
