@class NSString, CCToolKitToolAssistantSchemaVersion;

@interface CCToolKitToolAssistantSchemaIdentifier : CCItemMessage

@property (readonly, nonatomic) NSString *kind;
@property (readonly, nonatomic) CCToolKitToolAssistantSchemaVersion *version;
@property (readonly, nonatomic) NSString *domain;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithKind:(id)a0 version:(id)a1 domain:(id)a2 error:(id *)a3;

@end
