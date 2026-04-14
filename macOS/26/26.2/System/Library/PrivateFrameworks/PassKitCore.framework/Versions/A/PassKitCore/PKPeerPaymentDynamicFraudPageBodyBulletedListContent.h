@class NSArray, PKPeerPaymentDynamicFraudPageBodyContent;

@interface PKPeerPaymentDynamicFraudPageBodyBulletedListContent : PKPeerPaymentDynamicFraudPageBodyContent

@property (readonly, copy, nonatomic) NSArray *lines;
@property (readonly, copy, nonatomic) PKPeerPaymentDynamicFraudPageBodyContent *footer;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;

@end
