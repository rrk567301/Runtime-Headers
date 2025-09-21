@class NSString, CCToolKitToolTypedValue;

@interface CCToolKitToolTypedValueEntityValuePropertiesEntry : CCItemMessage

@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) CCToolKitToolTypedValue *value;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithKey:(id)a0 value:(id)a1 error:(id *)a2;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;

@end
