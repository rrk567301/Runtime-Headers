@class NSArray, CCToolKitToolTypeIdentifier, CCToolKitToolTypeDefinitionVersion1EntityRuntimeFlagsRepeatedEnum, CCToolKitToolTypeDisplayRepresentation;

@interface CCToolKitToolTypeDefinitionVersion1Entity : CCItemMessage

@property (readonly, nonatomic) CCToolKitToolTypeIdentifier *identifier;
@property (readonly, nonatomic) NSArray *properties;
@property (readonly, nonatomic) NSArray *runtimeRequirements;
@property (readonly, nonatomic) CCToolKitToolTypeDisplayRepresentation *displayRepresentation;
@property (readonly, nonatomic) NSArray *sampleInvocations;
@property (readonly, nonatomic) NSArray *systemProtocols;
@property (readonly, nonatomic) CCToolKitToolTypeDefinitionVersion1EntityRuntimeFlagsRepeatedEnum *runtimeFlags;
@property (readonly, nonatomic) NSArray *coercions;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithIdentifier:(id)a0 properties:(id)a1 runtimeRequirements:(id)a2 displayRepresentation:(id)a3 sampleInvocations:(id)a4 systemProtocols:(id)a5 runtimeFlags:(id)a6 coercions:(id)a7 error:(id *)a8;

@end
