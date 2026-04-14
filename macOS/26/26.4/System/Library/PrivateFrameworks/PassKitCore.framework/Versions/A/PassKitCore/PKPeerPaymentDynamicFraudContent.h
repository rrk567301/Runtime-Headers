@class NSArray, PKPeerPaymentDynamicFraudAlertContent, PKPeerPaymentDynamicFraudTitleMessageContent;

@interface PKPeerPaymentDynamicFraudContent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) PKPeerPaymentDynamicFraudAlertContent *alertContent;
@property (readonly, copy, nonatomic) PKPeerPaymentDynamicFraudTitleMessageContent *paymentSheetContent;
@property (readonly, copy, nonatomic) NSArray *pages;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
