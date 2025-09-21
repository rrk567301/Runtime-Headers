@class PKPeerPaymentRecurringPayment;

@interface PKCloudRecordRecurringPaymentMemo : PKCloudRecordObject

@property (retain, nonatomic) PKPeerPaymentRecurringPayment *recurringPayment;

+ (char)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)item;
- (id)_descriptionWithIncludeItem:(char)a0;
- (void)applyCloudRecordObject:(id)a0;
- (id)descriptionWithItem:(char)a0;

@end
