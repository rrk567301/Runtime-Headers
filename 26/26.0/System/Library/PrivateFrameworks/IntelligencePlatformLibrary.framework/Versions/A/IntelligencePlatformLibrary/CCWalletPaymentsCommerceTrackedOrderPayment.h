@class NSString, NSArray;

@interface CCWalletPaymentsCommerceTrackedOrderPayment : CCItemMessage

@property (readonly, nonatomic) NSString *totalAmount;
@property (readonly, nonatomic) NSString *totalIsoCurrencyCode;
@property (readonly, nonatomic) NSArray *transactions;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithTotalAmount:(id)a0 totalIsoCurrencyCode:(id)a1 transactions:(id)a2 error:(id *)a3;

@end
