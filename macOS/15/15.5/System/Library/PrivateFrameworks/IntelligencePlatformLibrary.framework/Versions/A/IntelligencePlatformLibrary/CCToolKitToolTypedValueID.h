@class NSData, CCToolKitToolTypeInstance, NSString;

@interface CCToolKitToolTypedValueID : CCItemMessage

@property (readonly, nonatomic) NSData *serializedVariable;
@property (readonly, nonatomic) CCToolKitToolTypeInstance *typeInstance;
@property (readonly, nonatomic) NSString *identifier;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithSerializedVariable:(id)a0 typeInstance:(id)a1 identifier:(id)a2 error:(id *)a3;

@end
