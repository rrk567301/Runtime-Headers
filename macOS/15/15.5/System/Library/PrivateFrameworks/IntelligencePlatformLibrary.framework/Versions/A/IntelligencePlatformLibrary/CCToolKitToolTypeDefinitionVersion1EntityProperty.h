@class NSString, CCToolKitToolTypeInstance;

@interface CCToolKitToolTypeDefinitionVersion1EntityProperty : CCItemMessage

@property (readonly, nonatomic) NSString *id;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) CCToolKitToolTypeInstance *type;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithId:(id)a0 displayName:(id)a1 type:(id)a2 error:(id *)a3;

@end
