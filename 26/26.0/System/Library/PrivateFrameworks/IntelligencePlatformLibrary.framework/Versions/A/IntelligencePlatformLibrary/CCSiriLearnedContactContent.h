@class NSString;

@interface CCSiriLearnedContactContent : CCItemMessage <CCItemContent, CCItemFieldEnumerable, CCJSONDescribing>

@property (readonly, nonatomic) NSString *userPhrasedName;
@property (readonly, nonatomic) NSString *suggestedContactId;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithUserPhrasedName:(id)a0 suggestedContactId:(id)a1 error:(id *)a2;

@end
