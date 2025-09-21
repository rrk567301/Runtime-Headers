@class NSArray, CCToolKitToolTypeInstance, CCToolKitToolTypeIdentifier;

@interface CCToolKitToolTypedValueCollectionValue : CCItemMessage

@property (readonly, nonatomic) CCToolKitToolTypeIdentifier *type;
@property (readonly, nonatomic) NSArray *values;
@property (readonly, nonatomic) CCToolKitToolTypeInstance *typeInstance;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithType:(id)a0 values:(id)a1 typeInstance:(id)a2 error:(id *)a3;

@end
