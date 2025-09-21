@class NSString, CCToolKitToolContainerDefinitionDevice, NSArray;

@interface CCToolKitToolToolInvocation : CCItemMessage

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *toolIdentifier;
@property (readonly, nonatomic) CCToolKitToolContainerDefinitionDevice *target;
@property (readonly, nonatomic) NSArray *parameterValues;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithIdentifier:(id)a0 toolIdentifier:(id)a1 target:(id)a2 parameterValues:(id)a3 error:(id *)a4;

@end
