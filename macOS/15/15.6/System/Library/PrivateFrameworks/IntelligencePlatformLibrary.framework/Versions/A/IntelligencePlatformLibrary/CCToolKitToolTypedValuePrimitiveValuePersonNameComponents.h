@class NSString, CCToolKitToolTypedValuePrimitiveValuePersonNameComponentsPhoneticRepresentation;

@interface CCToolKitToolTypedValuePrimitiveValuePersonNameComponents : CCItemMessage

@property (readonly, nonatomic) NSString *namePrefix;
@property (readonly, nonatomic) NSString *givenName;
@property (readonly, nonatomic) NSString *middleName;
@property (readonly, nonatomic) NSString *familyName;
@property (readonly, nonatomic) NSString *nameSuffix;
@property (readonly, nonatomic) NSString *nickname;
@property (readonly, nonatomic) CCToolKitToolTypedValuePrimitiveValuePersonNameComponentsPhoneticRepresentation *phoneticRepresentation;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithNamePrefix:(id)a0 givenName:(id)a1 middleName:(id)a2 familyName:(id)a3 nameSuffix:(id)a4 nickname:(id)a5 phoneticRepresentation:(id)a6 error:(id *)a7;

@end
