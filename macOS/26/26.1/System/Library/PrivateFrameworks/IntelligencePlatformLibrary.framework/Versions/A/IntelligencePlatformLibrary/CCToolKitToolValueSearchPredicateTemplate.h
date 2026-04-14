@class CCToolKitToolTypeInstance;

@interface CCToolKitToolValueSearchPredicateTemplate : CCItemMessage

@property (readonly, nonatomic) CCToolKitToolTypeInstance *input;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithInput:(id)a0 error:(id *)a1;

@end
