@class CCToolKitToolTypeInstance, CCToolKitToolTypedValue;

@interface CCToolKitToolTypeInstanceOptional : CCItemMessage

@property (readonly, nonatomic) CCToolKitToolTypeInstance *value;
@property (readonly, nonatomic) CCToolKitToolTypedValue *defaultValue;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithValue:(id)a0 defaultValue:(id)a1 error:(id *)a2;

@end
