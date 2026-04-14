@class NSString;

@interface CCAppShortcutPhraseContent : CCItemMessage <CCItemContent, CCItemFieldEnumerable, CCJSONDescribing>

@property (readonly, nonatomic) NSString *actingSourceItemIdentifier;
@property (readonly, nonatomic) NSString *phrase;
@property (readonly, nonatomic) NSString *baseTemplate;
@property (readonly, nonatomic) NSString *templateParameterValue;
@property (readonly, nonatomic) NSString *actionIdentifier;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)actingSourceItemIdentifier;
- (id)initWithPhrase:(id)a0 baseTemplate:(id)a1 templateParameterValue:(id)a2 actionIdentifier:(id)a3 error:(id *)a4;
- (id)initWithPhrase:(id)a0 baseTemplate:(id)a1 templateParameterValue:(id)a2 error:(id *)a3;

@end
