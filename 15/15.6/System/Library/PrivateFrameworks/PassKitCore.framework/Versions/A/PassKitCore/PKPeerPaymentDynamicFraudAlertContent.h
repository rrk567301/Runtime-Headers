@class NSString;

@interface PKPeerPaymentDynamicFraudAlertContent : PKPeerPaymentDynamicFraudTitleMessageContent

@property (readonly, copy, nonatomic) NSString *cancelButtonTitle;
@property (readonly, copy, nonatomic) NSString *confirmButtonTitle;

+ (char)supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
