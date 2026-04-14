@class CCToolKitToolToolDefinitionVersion1ParameterFlagsRepeatedEnum, NSString, CCToolKitToolTypeInstance, NSArray, CCToolKitToolToolDefinitionVersion1ParameterToolMetadata;

@interface CCToolKitToolToolDefinitionVersion1Parameter : CCItemMessage

@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *description;
@property (readonly, nonatomic) CCToolKitToolTypeInstance *valueType;
@property (readonly, nonatomic) NSArray *relationships;
@property (readonly, nonatomic) NSArray *sampleInvocations;
@property (readonly, nonatomic) CCToolKitToolToolDefinitionVersion1ParameterFlagsRepeatedEnum *flags;
@property (readonly, nonatomic) CCToolKitToolToolDefinitionVersion1ParameterToolMetadata *parentToolMetadata;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithKey:(id)a0 name:(id)a1 description:(id)a2 valueType:(id)a3 relationships:(id)a4 sampleInvocations:(id)a5 flags:(id)a6 parentToolMetadata:(id)a7 error:(id *)a8;

@end
