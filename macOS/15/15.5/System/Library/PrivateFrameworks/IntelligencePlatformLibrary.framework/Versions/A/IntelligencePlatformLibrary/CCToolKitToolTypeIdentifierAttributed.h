@class NSString, CCToolKitToolContainerDefinition;

@interface CCToolKitToolTypeIdentifierAttributed : CCItemMessage

@property (readonly, nonatomic) CCToolKitToolContainerDefinition *sourceContainer;
@property (readonly, nonatomic) CCToolKitToolContainerDefinition *attributionContainer;
@property (readonly, nonatomic) NSString *typeName;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithSourceContainer:(id)a0 attributionContainer:(id)a1 typeName:(id)a2 error:(id *)a3;

@end
