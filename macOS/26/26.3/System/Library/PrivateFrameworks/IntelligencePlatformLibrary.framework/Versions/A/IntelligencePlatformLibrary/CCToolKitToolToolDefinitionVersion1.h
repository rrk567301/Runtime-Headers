@class NSString, NSArray, CCToolKitToolTypeInstance, CCToolKitToolToolDefinitionVersion1FlagsRepeatedEnum, CCToolKitToolToolDefinitionVersion1ToolIcon, CCToolKitToolContainerDefinition, CCToolKitToolAppDefinition, CCToolKitToolToolDefinitionVersion1Deprecation, CCToolKitToolToolDefinitionVersion1VisibilityFlagsRepeatedEnum;

@interface CCToolKitToolToolDefinitionVersion1 : CCItemMessage

@property (readonly, nonatomic) NSString *id;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int toolType;
@property (readonly, nonatomic) NSArray *parameters;
@property (readonly, nonatomic) CCToolKitToolTypeInstance *outputType;
@property (readonly, nonatomic) NSString *outputResultName;
@property (readonly, nonatomic) CCToolKitToolAppDefinition *sourceApplication;
@property (readonly, nonatomic) NSString *descriptionSummary;
@property (readonly, nonatomic) NSArray *categories;
@property (readonly, nonatomic) NSArray *searchKeywords;
@property (readonly, nonatomic) CCToolKitToolToolDefinitionVersion1Deprecation *deprecationDefinition;
@property (readonly, nonatomic) NSArray *requirements;
@property (readonly, nonatomic) CCToolKitToolToolDefinitionVersion1FlagsRepeatedEnum *flags;
@property (readonly, nonatomic) unsigned int authenticationPolicy;
@property (readonly, nonatomic) NSArray *sampleInvocations;
@property (readonly, nonatomic) NSArray *systemProtocols;
@property (readonly, nonatomic) CCToolKitToolToolDefinitionVersion1ToolIcon *customIcon;
@property (readonly, nonatomic) NSArray *hiddenParameters;
@property (readonly, nonatomic) CCToolKitToolContainerDefinition *sourceContainer;
@property (readonly, nonatomic) CCToolKitToolContainerDefinition *attributionContainer;
@property (readonly, nonatomic) CCToolKitToolToolDefinitionVersion1VisibilityFlagsRepeatedEnum *visibilityFlags;
@property (readonly, nonatomic) NSString *descriptionAttribution;
@property (readonly, nonatomic) NSString *descriptionResult;
@property (readonly, nonatomic) NSString *descriptionNote;
@property (readonly, nonatomic) NSString *descriptionRequires;
@property (readonly, nonatomic) NSArray *backingLinkActionIdentifiers;
@property (readonly, nonatomic) NSArray *additionalAttributionContainers;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithId:(id)a0 name:(id)a1 toolType:(unsigned int)a2 parameters:(id)a3 outputType:(id)a4 outputResultName:(id)a5 sourceApplication:(id)a6 descriptionSummary:(id)a7 categories:(id)a8 searchKeywords:(id)a9 deprecationDefinition:(id)a10 requirements:(id)a11 flags:(id)a12 authenticationPolicy:(unsigned int)a13 sampleInvocations:(id)a14 systemProtocols:(id)a15 customIcon:(id)a16 hiddenParameters:(id)a17 sourceContainer:(id)a18 attributionContainer:(id)a19 visibilityFlags:(id)a20 descriptionAttribution:(id)a21 descriptionResult:(id)a22 descriptionNote:(id)a23 descriptionRequires:(id)a24 backingLinkActionIdentifiers:(id)a25 additionalAttributionContainers:(id)a26 error:(id *)a27;

@end
