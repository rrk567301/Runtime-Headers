@class NSString;

@interface CCToolKitToolToolDefinitionVersion1ParameterBooleanMetadata : CCItemMessage

@property (readonly, nonatomic) NSString *true_string;
@property (readonly, nonatomic) NSString *false_string;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithTrue_string:(id)a0 false_string:(id)a1 error:(id *)a2;

@end
