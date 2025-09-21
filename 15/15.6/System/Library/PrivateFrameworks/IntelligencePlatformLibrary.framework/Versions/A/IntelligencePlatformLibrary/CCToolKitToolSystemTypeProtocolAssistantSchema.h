@class CCToolKitToolAssistantSchemaIdentifier;

@interface CCToolKitToolSystemTypeProtocolAssistantSchema : CCItemMessage

@property (readonly, nonatomic) CCToolKitToolAssistantSchemaIdentifier *identifier;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 error:(id *)a1;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (char)initializeFieldValuesFromData:(id)a0 error:(id *)a1;

@end
