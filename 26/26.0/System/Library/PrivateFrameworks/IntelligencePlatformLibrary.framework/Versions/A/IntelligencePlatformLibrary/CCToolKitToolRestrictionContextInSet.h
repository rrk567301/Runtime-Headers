@class CCToolKitToolTypeDefinitionVersion1QueryPredicateTemplates, CCToolKitToolRestrictionContextInSetValueSet;

@interface CCToolKitToolRestrictionContextInSet : CCItemMessage

@property (readonly, nonatomic) CCToolKitToolRestrictionContextInSetValueSet *definition;
@property (readonly, nonatomic) CCToolKitToolTypeDefinitionVersion1QueryPredicateTemplates *templates;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithDefinition:(id)a0 templates:(id)a1 error:(id *)a2;

@end
