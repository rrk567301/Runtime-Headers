@class NSArray;

@interface CCToolKitToolToolInvocationSignature : CCItemMessage

@property (readonly, nonatomic) NSArray *visibleParameterKeys;
@property (readonly, nonatomic) NSArray *invisibleParameterKeys;
@property (readonly, nonatomic) NSArray *valueConstraints;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithVisibleParameterKeys:(id)a0 invisibleParameterKeys:(id)a1 valueConstraints:(id)a2 error:(id *)a3;

@end
