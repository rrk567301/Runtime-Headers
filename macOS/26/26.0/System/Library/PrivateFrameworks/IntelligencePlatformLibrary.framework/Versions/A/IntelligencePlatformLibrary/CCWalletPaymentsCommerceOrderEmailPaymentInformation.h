@class NSString, CCWalletPaymentsCommerceOrderEmailPaymentInformationPaymentMethod;

@interface CCWalletPaymentsCommerceOrderEmailPaymentInformation : CCItemMessage

@property (readonly, nonatomic) NSString *totalAmount;
@property (readonly, nonatomic) NSString *totalCurrencyCode;
@property (readonly, nonatomic) CCWalletPaymentsCommerceOrderEmailPaymentInformationPaymentMethod *paymentMethod;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithTotalAmount:(id)a0 totalCurrencyCode:(id)a1 paymentMethod:(id)a2 error:(id *)a3;

@end
