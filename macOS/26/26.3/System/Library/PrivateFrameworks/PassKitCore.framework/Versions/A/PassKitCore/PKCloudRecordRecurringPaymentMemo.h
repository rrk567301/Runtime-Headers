@class PKPeerPaymentRecurringPayment;

@interface PKCloudRecordRecurringPaymentMemo : PKCloudRecordObject

@property (retain, nonatomic) PKPeerPaymentRecurringPayment *recurringPayment;

+ (BOOL)supportsSecureCoding;

- (id)item;
- (id)description;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_descriptionWithIncludeItem:(BOOL)a0;
- (void)applyCloudRecordObject:(id)a0;
- (id)descriptionWithItem:(BOOL)a0;

@end
