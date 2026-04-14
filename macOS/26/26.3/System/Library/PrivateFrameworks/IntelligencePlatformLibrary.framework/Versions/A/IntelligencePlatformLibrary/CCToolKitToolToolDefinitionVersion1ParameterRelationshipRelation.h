@class CCToolKitToolToolDefinitionVersion1ParameterRelationshipRelationContains, CCToolKitToolToolDefinitionVersion1ParameterRelationshipRelationDoesNotContain, CCToolKitToolToolDefinitionVersion1ParameterRelationshipRelationEquals, CCToolKitToolToolDefinitionVersion1ParameterRelationshipRelationLessThan, CCToolKitToolToolDefinitionVersion1ParameterRelationshipRelationNotEquals, CCToolKitToolToolDefinitionVersion1ParameterRelationshipRelationGreaterThan;

@interface CCToolKitToolToolDefinitionVersion1ParameterRelationshipRelation : CCItemMessage

@property (readonly, nonatomic) unsigned int isSome;
@property (readonly, nonatomic) unsigned int isNone;
@property (readonly, nonatomic) CCToolKitToolToolDefinitionVersion1ParameterRelationshipRelationEquals *equals;
@property (readonly, nonatomic) CCToolKitToolToolDefinitionVersion1ParameterRelationshipRelationNotEquals *notEquals;
@property (readonly, nonatomic) CCToolKitToolToolDefinitionVersion1ParameterRelationshipRelationGreaterThan *greaterThan;
@property (readonly, nonatomic) CCToolKitToolToolDefinitionVersion1ParameterRelationshipRelationLessThan *lessThan;
@property (readonly, nonatomic) CCToolKitToolToolDefinitionVersion1ParameterRelationshipRelationContains *contains;
@property (readonly, nonatomic) CCToolKitToolToolDefinitionVersion1ParameterRelationshipRelationDoesNotContain *doesNotContain;
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
