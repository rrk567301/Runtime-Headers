@class PKIssuerMessagingFlag;

@interface PKCloudRecordIssuerMessagingFlag : PKCloudRecordObject

@property (retain, nonatomic) PKIssuerMessagingFlag *issuerMessagingFlag;

+ (BOOL)supportsSecureCoding;

- (long long)compare:(id)a0;
- (id)item;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)_descriptionWithIncludeItem:(BOOL)a0;
- (void)applyCloudRecordObject:(id)a0;
- (id)descriptionWithItem:(BOOL)a0;

@end
