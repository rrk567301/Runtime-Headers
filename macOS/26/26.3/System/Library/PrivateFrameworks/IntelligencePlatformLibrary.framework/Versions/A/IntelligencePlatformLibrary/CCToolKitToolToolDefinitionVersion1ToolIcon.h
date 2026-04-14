@class NSString, CCToolKitToolToolDefinitionVersion1ToolIconToolExternalAsset, CCToolKitToolToolDefinitionVersion1ToolIconToolSymbolIcon;

@interface CCToolKitToolToolDefinitionVersion1ToolIcon : CCItemMessage

@property (readonly, nonatomic) NSString *workflowAsset;
@property (readonly, nonatomic) CCToolKitToolToolDefinitionVersion1ToolIconToolSymbolIcon *symbol;
@property (readonly, nonatomic) CCToolKitToolToolDefinitionVersion1ToolIconToolExternalAsset *externalAsset;
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
