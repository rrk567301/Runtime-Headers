@interface CCToolKitToolTypeIdentifierPrimitive : CCItemMessage

@property (readonly, nonatomic) unsigned int none_p;
@property (readonly, nonatomic) unsigned int boolType;
@property (readonly, nonatomic) unsigned int intType;
@property (readonly, nonatomic) unsigned int number;
@property (readonly, nonatomic) unsigned int decimal;
@property (readonly, nonatomic) unsigned int string;
@property (readonly, nonatomic) unsigned int date;
@property (readonly, nonatomic) unsigned int dateComponents;
@property (readonly, nonatomic) unsigned int url;
@property (readonly, nonatomic) unsigned int dictionary;
@property (readonly, nonatomic) unsigned int attributedString;
@property (readonly, nonatomic) unsigned int measurement;
@property (readonly, nonatomic) unsigned int currencyAmount;
@property (readonly, nonatomic) unsigned int paymentMethod;
@property (readonly, nonatomic) unsigned int placemark;
@property (readonly, nonatomic) unsigned int person;
@property (readonly, nonatomic) unsigned int file;
@property (readonly, nonatomic) unsigned int app;
@property (readonly, nonatomic) unsigned int searchableItem;
@property (readonly, nonatomic) unsigned int intentsFile;
@property (readonly, nonatomic) unsigned int kindType;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithKind:(id)a0 kindType:(unsigned int)a1 error:(id *)a2;

@end
