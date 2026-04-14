@class CCToolKitToolDisplayRepresentationDisplayValueStatic, CCToolKitToolDisplayRepresentationStorage;

@interface CCToolKitToolDisplayRepresentationDisplayValue : CCItemMessage

@property (readonly, nonatomic) unsigned int type;
@property (readonly, nonatomic) CCToolKitToolDisplayRepresentationStorage *lazy;
@property (readonly, nonatomic) CCToolKitToolDisplayRepresentationDisplayValueStatic *staticType;
@property (readonly, nonatomic) unsigned int kindType;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithType:(unsigned int)a0 kind:(id)a1 kindType:(unsigned int)a2 error:(id *)a3;

@end
