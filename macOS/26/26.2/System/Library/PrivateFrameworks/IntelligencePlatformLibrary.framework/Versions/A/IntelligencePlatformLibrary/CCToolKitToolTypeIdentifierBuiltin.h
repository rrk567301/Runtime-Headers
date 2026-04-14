@class CCToolKitToolTypeIdentifier;

@interface CCToolKitToolTypeIdentifierBuiltin : CCItemMessage

@property (readonly, nonatomic) unsigned int app;
@property (readonly, nonatomic) unsigned int boundNumber;
@property (readonly, nonatomic) unsigned int calendar;
@property (readonly, nonatomic) unsigned int color;
@property (readonly, nonatomic) unsigned int currency;
@property (readonly, nonatomic) unsigned int file;
@property (readonly, nonatomic) unsigned int homeArea;
@property (readonly, nonatomic) unsigned int mediaRoute;
@property (readonly, nonatomic) unsigned int paymentMethod;
@property (readonly, nonatomic) unsigned int podcast;
@property (readonly, nonatomic) unsigned int person;
@property (readonly, nonatomic) unsigned int placemark;
@property (readonly, nonatomic) unsigned int rideshareOption;
@property (readonly, nonatomic) unsigned int vpn;
@property (readonly, nonatomic) unsigned int timeZone;
@property (readonly, nonatomic) CCToolKitToolTypeIdentifier *query;
@property (readonly, nonatomic) unsigned int measurement;
@property (readonly, nonatomic) unsigned int kindType;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithKind:(id)a0 kindType:(unsigned int)a1 error:(id *)a2;

@end
