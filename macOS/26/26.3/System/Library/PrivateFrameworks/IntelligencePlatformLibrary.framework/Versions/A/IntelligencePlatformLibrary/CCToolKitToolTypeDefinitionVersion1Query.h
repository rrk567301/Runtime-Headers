@class CCToolKitToolTypeDefinitionVersion1QueryPredicateTemplates, CCToolKitToolTypeIdentifier;

@interface CCToolKitToolTypeDefinitionVersion1Query : CCItemMessage

@property (readonly, nonatomic) CCToolKitToolTypeIdentifier *identifier;
@property (readonly, nonatomic) CCToolKitToolTypeDefinitionVersion1QueryPredicateTemplates *templates;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithIdentifier:(id)a0 templates:(id)a1 error:(id *)a2;

@end
