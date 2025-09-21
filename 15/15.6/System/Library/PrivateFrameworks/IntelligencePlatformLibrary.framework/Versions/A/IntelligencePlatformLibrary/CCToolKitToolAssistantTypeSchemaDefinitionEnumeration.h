@class NSArray, CCToolKitToolAssistantSchemaIdentifier, CCToolKitToolTypeDisplayRepresentation;

@interface CCToolKitToolAssistantTypeSchemaDefinitionEnumeration : CCItemMessage

@property (readonly, nonatomic) CCToolKitToolAssistantSchemaIdentifier *identifier;
@property (readonly, nonatomic) NSArray *cases;
@property (readonly, nonatomic) CCToolKitToolTypeDisplayRepresentation *displayRepresentation;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (char)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithIdentifier:(id)a0 cases:(id)a1 displayRepresentation:(id)a2 error:(id *)a3;

@end
