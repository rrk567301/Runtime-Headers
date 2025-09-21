@class PKPass;

@interface PKCloudRecordPass : PKCloudRecordObject

@property (retain, nonatomic) PKPass *pass;

+ (BOOL)supportsSecureCoding;

- (id)item;
- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_descriptionWithIncludeItem:(BOOL)a0;
- (void)applyCloudRecordObject:(id)a0;
- (id)descriptionWithItem:(BOOL)a0;

@end
