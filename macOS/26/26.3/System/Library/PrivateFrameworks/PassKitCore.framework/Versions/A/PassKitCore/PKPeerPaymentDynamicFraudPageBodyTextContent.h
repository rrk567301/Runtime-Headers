@class NSString;

@interface PKPeerPaymentDynamicFraudPageBodyTextContent : PKPeerPaymentDynamicFraudPageBodyContent

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) unsigned long long formatType;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
