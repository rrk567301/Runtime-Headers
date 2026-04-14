@class NSString, CCWalletPaymentsCommerceOrderEmailMerchant, CCWalletExtractedOrderContentExtractedEmailShippingDetails;

@interface CCWalletExtractedOrderContentExtractedEmailOrderDetails : CCItemMessage

@property (readonly, nonatomic) NSString *orderNumber;
@property (readonly, nonatomic) CCWalletPaymentsCommerceOrderEmailMerchant *merchant;
@property (readonly, nonatomic) CCWalletExtractedOrderContentExtractedEmailShippingDetails *shippingDetails;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithOrderNumber:(id)a0 merchant:(id)a1 shippingDetails:(id)a2 error:(id *)a3;

@end
