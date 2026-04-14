@class CCToolKitToolTypeIdentifierPrimitive, CCToolKitToolTypeDefinitionVersion1Query, CCToolKitToolTypeDefinitionVersion1Entity, CCToolKitToolTypeDefinitionVersion1Enumeration;

@interface CCToolKitToolTypeDefinitionVersion1 : CCItemMessage

@property (readonly, nonatomic) CCToolKitToolTypeIdentifierPrimitive *primitive;
@property (readonly, nonatomic) CCToolKitToolTypeDefinitionVersion1Entity *entity;
@property (readonly, nonatomic) CCToolKitToolTypeDefinitionVersion1Enumeration *enumeration;
@property (readonly, nonatomic) CCToolKitToolTypeDefinitionVersion1Query *query;
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
