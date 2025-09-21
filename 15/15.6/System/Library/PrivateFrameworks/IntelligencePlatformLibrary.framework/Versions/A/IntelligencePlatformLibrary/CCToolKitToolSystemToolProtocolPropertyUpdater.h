@class NSString;

@interface CCToolKitToolSystemToolProtocolPropertyUpdater : CCItemMessage

@property (readonly, nonatomic) NSString *entityIdentifier;
@property (readonly, nonatomic) NSString *entityProperty;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (char)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithEntityIdentifier:(id)a0 entityProperty:(id)a1 error:(id *)a2;

@end
