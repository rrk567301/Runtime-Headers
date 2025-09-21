@class NSString, CCWalletPaymentsCommerceTrackedOrderAddress;

@interface CCWalletPaymentsCommerceTrackedOrderCustomer : CCItemMessage

@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) NSString *emailAddress;
@property (readonly, nonatomic) CCWalletPaymentsCommerceTrackedOrderAddress *billingAddress;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithFullName:(id)a0 phoneNumber:(id)a1 emailAddress:(id)a2 billingAddress:(id)a3 error:(id *)a4;

@end
