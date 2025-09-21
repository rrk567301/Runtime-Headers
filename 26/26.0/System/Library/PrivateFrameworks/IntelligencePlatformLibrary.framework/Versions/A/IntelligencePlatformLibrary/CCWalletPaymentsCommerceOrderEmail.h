@class CCWalletPaymentsCommerceOrderEmailMerchant, NSString, CCWalletPaymentsCommerceOrderEmailShippingRecipient, CCWalletPaymentsCommerceOrderEmailEmailMetadata, CCWalletPaymentsCommerceOrderEmailShippingInformation, CCWalletPaymentsCommerceOrderEmailPaymentInformation, CCWalletPaymentsCommerceOrderEmailCustomer;

@interface CCWalletPaymentsCommerceOrderEmail : CCItemMessage

@property (readonly, nonatomic) CCWalletPaymentsCommerceOrderEmailEmailMetadata *emailMetadata;
@property (readonly, nonatomic) unsigned int emailType;
@property (readonly, nonatomic) NSString *orderNumber;
@property (readonly, nonatomic) NSString *orderDate;
@property (readonly, nonatomic) CCWalletPaymentsCommerceOrderEmailMerchant *merchant;
@property (readonly, nonatomic) CCWalletPaymentsCommerceOrderEmailCustomer *customer;
@property (readonly, nonatomic) CCWalletPaymentsCommerceOrderEmailShippingRecipient *shippingRecipient;
@property (readonly, nonatomic) CCWalletPaymentsCommerceOrderEmailShippingInformation *shippingInformation;
@property (readonly, nonatomic) CCWalletPaymentsCommerceOrderEmailPaymentInformation *paymentInformation;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithEmailMetadata:(id)a0 emailType:(unsigned int)a1 orderNumber:(id)a2 orderDate:(id)a3 merchant:(id)a4 customer:(id)a5 shippingRecipient:(id)a6 shippingInformation:(id)a7 paymentInformation:(id)a8 error:(id *)a9;

@end
