@class PKPaymentTransaction;

@interface PKCloudRecordTransaction : PKCloudRecordObject

@property (retain, nonatomic) PKPaymentTransaction *transaction;

+ (BOOL)supportsSecureCoding;
+ (id)dateFormatter;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)item;
- (id)descriptionWithItem:(BOOL)a0;
- (void)applyCloudRecordObject:(id)a0;
- (id)_descriptionWithIncludeItem:(BOOL)a0;

@end
