@class CCToolKitToolTypedValueDeferredValueStorage, CCToolKitToolTypeInstance, CCToolKitToolTypeIdentifier;

@interface CCToolKitToolTypedValueDeferredValue : CCItemMessage

@property (readonly, nonatomic) CCToolKitToolTypeIdentifier *type;
@property (readonly, nonatomic) CCToolKitToolTypeInstance *expectedTypeInstance;
@property (readonly, nonatomic) CCToolKitToolTypedValueDeferredValueStorage *storage;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithType:(id)a0 expectedTypeInstance:(id)a1 storage:(id)a2 error:(id *)a3;

@end
