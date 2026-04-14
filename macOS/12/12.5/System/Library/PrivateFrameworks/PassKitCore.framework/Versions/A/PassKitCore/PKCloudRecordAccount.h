@class PKAccount;

@interface PKCloudRecordAccount : PKCloudRecordObject

@property (retain, nonatomic) PKAccount *account;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)item;
- (id)descriptionWithItem:(BOOL)a0;
- (void)applyCloudRecordObject:(id)a0;
- (id)_descriptionWithIncludeItem:(BOOL)a0;

@end
