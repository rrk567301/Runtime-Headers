@class NSArray, CCToolKitToolTypeDisplayRepresentation, CCToolKitToolTypeIdentifier;

@interface CCToolKitToolTypeDefinitionVersion1Enumeration : CCItemMessage

@property (readonly, nonatomic) CCToolKitToolTypeIdentifier *identifier;
@property (readonly, nonatomic) NSArray *cases;
@property (readonly, nonatomic) NSArray *runtimeRequirements;
@property (readonly, nonatomic) CCToolKitToolTypeDisplayRepresentation *displayRepresentation;
@property (readonly, nonatomic) unsigned int kind;
@property (readonly, nonatomic) NSArray *systemProtocols;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithIdentifier:(id)a0 cases:(id)a1 runtimeRequirements:(id)a2 displayRepresentation:(id)a3 kind:(unsigned int)a4 systemProtocols:(id)a5 error:(id *)a6;

@end
