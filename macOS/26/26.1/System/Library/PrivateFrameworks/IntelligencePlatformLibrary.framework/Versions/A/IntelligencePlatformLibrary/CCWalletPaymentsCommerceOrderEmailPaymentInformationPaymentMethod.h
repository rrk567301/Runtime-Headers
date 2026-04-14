@class NSString;

@interface CCWalletPaymentsCommerceOrderEmailPaymentInformationPaymentMethod : CCItemMessage

@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *lastFourDigits;
@property (readonly, nonatomic) BOOL isApplePay;
@property (nonatomic) BOOL hasIsApplePay;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithDisplayName:(id)a0 lastFourDigits:(id)a1 isApplePay:(id)a2 error:(id *)a3;

@end
