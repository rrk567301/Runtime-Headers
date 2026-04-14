@class NSArray;

@interface CCToolKitToolToolDefinitionVersion1ParameterRelationshipRelationGreaterThan : CCItemMessage

@property (readonly, nonatomic) NSArray *values;
@property (readonly, nonatomic) BOOL orEqual;
@property (nonatomic) BOOL hasOrEqual;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithValues:(id)a0 orEqual:(id)a1 error:(id *)a2;

@end
