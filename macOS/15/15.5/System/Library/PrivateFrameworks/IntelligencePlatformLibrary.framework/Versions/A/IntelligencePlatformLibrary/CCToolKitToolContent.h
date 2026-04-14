@class NSArray, CCToolKitToolToolDefinitionVersion1;

@interface CCToolKitToolContent : CCItemMessage <CCItemContent, CCItemFieldEnumerable, CCJSONDescribing>

@property (readonly, nonatomic) CCToolKitToolToolDefinitionVersion1 *toolDefinition;
@property (readonly, nonatomic) NSArray *typeDefinitions;
@property (readonly, nonatomic) NSArray *localizedStringsByLocale;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithToolDefinition:(id)a0 typeDefinitions:(id)a1 localizedStringsByLocale:(id)a2 error:(id *)a3;

@end
