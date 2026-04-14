@class NSString;

@interface PKPeerPaymentDynamicFraudPageBodyTextContent : PKPeerPaymentDynamicFraudPageBodyContent

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) unsigned long long formatType;

+ (BOOL)supportsSecureCoding;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
