@class NSString;

@interface PKPeerPaymentDynamicFraudPageBodyTextContent : PKPeerPaymentDynamicFraudPageBodyContent

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) unsigned long long formatType;

+ (BOOL)supportsSecureCoding;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
