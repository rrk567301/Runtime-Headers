@class NSString, NSArray, CCToolKitToolTypeInstance, CCToolKitToolAssistantSchemaIdentifier;

@interface CCToolKitToolAssistantToolSchemaDefinition : CCItemMessage

@property (readonly, nonatomic) CCToolKitToolAssistantSchemaIdentifier *identifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *description;
@property (readonly, nonatomic) NSArray *parameters;
@property (readonly, nonatomic) NSArray *sampleInvocations;
@property (readonly, nonatomic) CCToolKitToolTypeInstance *outputType;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithIdentifier:(id)a0 name:(id)a1 description:(id)a2 parameters:(id)a3 sampleInvocations:(id)a4 outputType:(id)a5 error:(id *)a6;

@end
