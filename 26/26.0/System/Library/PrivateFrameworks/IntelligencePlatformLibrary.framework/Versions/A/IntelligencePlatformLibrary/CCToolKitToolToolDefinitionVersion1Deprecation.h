@class NSString;

@interface CCToolKitToolToolDefinitionVersion1Deprecation : CCItemMessage

@property (readonly, nonatomic) NSString *deprecationMessage;
@property (readonly, nonatomic) NSString *replacedByToolId;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithDeprecationMessage:(id)a0 replacedByToolId:(id)a1 error:(id *)a2;

@end
