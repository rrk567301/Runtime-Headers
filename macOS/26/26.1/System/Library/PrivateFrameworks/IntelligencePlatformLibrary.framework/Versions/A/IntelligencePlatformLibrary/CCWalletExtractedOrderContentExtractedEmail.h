@class NSString, CCWalletExtractedOrderContentExtractedEmailOrderDetails, CCWalletPaymentsCommerceOrderEmailEmailMetadata;

@interface CCWalletExtractedOrderContentExtractedEmail : CCItemMessage

@property (readonly, nonatomic) CCWalletPaymentsCommerceOrderEmailEmailMetadata *emailMetadata;
@property (readonly, nonatomic) unsigned int emailType;
@property (readonly, nonatomic) NSString *spotlightUniqueIdentifier;
@property (readonly, nonatomic) NSString *spotlightDomainIdentifier;
@property (readonly, nonatomic) CCWalletExtractedOrderContentExtractedEmailOrderDetails *orderDetails;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithEmailMetadata:(id)a0 emailType:(unsigned int)a1 error:(id *)a2;
- (id)initWithEmailMetadata:(id)a0 emailType:(unsigned int)a1 spotlightUniqueIdentifier:(id)a2 spotlightDomainIdentifier:(id)a3 error:(id *)a4;
- (id)initWithEmailMetadata:(id)a0 emailType:(unsigned int)a1 spotlightUniqueIdentifier:(id)a2 spotlightDomainIdentifier:(id)a3 orderDetails:(id)a4 error:(id *)a5;

@end
