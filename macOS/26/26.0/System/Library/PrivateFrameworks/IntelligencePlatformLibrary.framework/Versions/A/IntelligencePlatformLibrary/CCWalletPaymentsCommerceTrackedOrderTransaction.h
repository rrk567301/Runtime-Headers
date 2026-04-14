@class NSString, CCWalletPaymentsCommerceTrackedOrderTransactionPaymentMethod;

@interface CCWalletPaymentsCommerceTrackedOrderTransaction : CCItemMessage

@property (readonly, nonatomic) NSString *amount;
@property (readonly, nonatomic) NSString *isoCurrencyCode;
@property (readonly, nonatomic) CCWalletPaymentsCommerceTrackedOrderTransactionPaymentMethod *paymentMethod;
@property (readonly, nonatomic) NSString *transactionIdenifier;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithAmount:(id)a0 isoCurrencyCode:(id)a1 paymentMethod:(id)a2 transactionIdenifier:(id)a3 error:(id *)a4;

@end
