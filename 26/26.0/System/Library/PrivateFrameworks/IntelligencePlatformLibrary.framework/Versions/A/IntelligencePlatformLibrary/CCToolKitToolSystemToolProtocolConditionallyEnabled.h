@interface CCToolKitToolSystemToolProtocolConditionallyEnabled : CCItemMessage

@property (readonly, nonatomic) BOOL persistState;
@property (nonatomic) BOOL hasPersistState;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithPersistState:(id)a0 error:(id *)a1;

@end
