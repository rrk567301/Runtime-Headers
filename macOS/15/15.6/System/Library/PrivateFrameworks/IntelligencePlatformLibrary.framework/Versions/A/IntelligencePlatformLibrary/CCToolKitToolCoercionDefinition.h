@class CCToolKitToolTypeInstance;

@interface CCToolKitToolCoercionDefinition : CCItemMessage

@property (readonly, nonatomic) unsigned int direction;
@property (readonly, nonatomic) CCToolKitToolTypeInstance *typeInstance;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithDirection:(unsigned int)a0 typeInstance:(id)a1 error:(id *)a2;

@end
