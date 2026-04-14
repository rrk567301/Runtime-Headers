@class NSArray, PKPeerPaymentDynamicFraudPageBodyContent;

@interface PKPeerPaymentDynamicFraudPageBodyBulletedListContent : PKPeerPaymentDynamicFraudPageBodyContent

@property (readonly, copy, nonatomic) NSArray *lines;
@property (readonly, copy, nonatomic) PKPeerPaymentDynamicFraudPageBodyContent *footer;

+ (BOOL)supportsSecureCoding;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
