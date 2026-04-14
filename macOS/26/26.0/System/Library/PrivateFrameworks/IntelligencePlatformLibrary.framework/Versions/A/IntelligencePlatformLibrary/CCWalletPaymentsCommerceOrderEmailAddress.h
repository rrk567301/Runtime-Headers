@class NSString;

@interface CCWalletPaymentsCommerceOrderEmailAddress : CCItemMessage

@property (readonly, nonatomic) NSString *street;
@property (readonly, nonatomic) NSString *city;
@property (readonly, nonatomic) NSString *state;
@property (readonly, nonatomic) NSString *postalCode;
@property (readonly, nonatomic) NSString *country;
@property (readonly, nonatomic) NSString *rawAddress;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithStreet:(id)a0 city:(id)a1 state:(id)a2 postalCode:(id)a3 country:(id)a4 error:(id *)a5;
- (id)initWithStreet:(id)a0 city:(id)a1 state:(id)a2 postalCode:(id)a3 country:(id)a4 rawAddress:(id)a5 error:(id *)a6;

@end
