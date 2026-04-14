@class NSString, NSArray, CCToolKitToolToolInvocationOptions, CCToolKitToolContainerDefinitionDevice;

@interface CCToolKitToolToolInvocation : CCItemMessage

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *toolIdentifier;
@property (readonly, nonatomic) CCToolKitToolContainerDefinitionDevice *target;
@property (readonly, nonatomic) NSArray *parameterValues;
@property (readonly, nonatomic) CCToolKitToolToolInvocationOptions *options;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithIdentifier:(id)a0 toolIdentifier:(id)a1 target:(id)a2 parameterValues:(id)a3 options:(id)a4 error:(id *)a5;

@end
