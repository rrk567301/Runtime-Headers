@interface CCMontaraSharedPreferencesContent : CCItemMessage <CCItemContent, CCItemFieldEnumerable, CCJSONDescribing>

@property (readonly, nonatomic) char isEnabled;
@property (nonatomic) char hasIsEnabled;
@property (readonly, nonatomic) char setupPrompt;
@property (nonatomic) char hasSetupPrompt;
@property (readonly, nonatomic) char useConfirmationPrompts;
@property (nonatomic) char hasUseConfirmationPrompts;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (char)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithIsEnabled:(id)a0 setupPrompt:(id)a1 useConfirmationPrompts:(id)a2 error:(id *)a3;

@end
