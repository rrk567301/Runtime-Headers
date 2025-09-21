@class NSString;

@interface CCHealthMedicationContent : CCItemMessage <CCItemContent, CCItemFieldEnumerable, CCJSONDescribing>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *nickname;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (char)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithName:(id)a0 nickname:(id)a1 error:(id *)a2;

@end
