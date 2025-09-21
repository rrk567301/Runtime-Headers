@interface CCMontaraSharedPreferencesContent : CCItemMessage <CCItemContent, CCItemFieldEnumerable, CCJSONDescribing>

@property (readonly, nonatomic) BOOL isEnabled;
@property (nonatomic) BOOL hasIsEnabled;
@property (readonly, nonatomic) BOOL setupPrompt;
@property (nonatomic) BOOL hasSetupPrompt;
@property (readonly, nonatomic) BOOL useConfirmationPrompts;
@property (nonatomic) BOOL hasUseConfirmationPrompts;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithIsEnabled:(id)a0 setupPrompt:(id)a1 useConfirmationPrompts:(id)a2 error:(id *)a3;

@end
