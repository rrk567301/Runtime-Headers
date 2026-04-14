@class NSString, NSArray, SISchemaLocaleIdentifier, SISchemaUUID, NSData;

@interface SISchemaDictationContext : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *keyboardLanguage;
@property (nonatomic) BOOL hasKeyboardLanguage;
@property (retain, nonatomic) SISchemaLocaleIdentifier *keyboardLocale;
@property (nonatomic) BOOL hasKeyboardLocale;
@property (retain, nonatomic) SISchemaLocaleIdentifier *dictationLocale;
@property (nonatomic) BOOL hasDictationLocale;
@property (retain, nonatomic) SISchemaLocaleIdentifier *userSelectedLocale;
@property (nonatomic) BOOL hasUserSelectedLocale;
@property (retain, nonatomic) SISchemaLocaleIdentifier *siriSelectedLocale;
@property (nonatomic) BOOL hasSiriSelectedLocale;
@property (copy, nonatomic) NSArray *keyboardLocalesEnableds;
@property (copy, nonatomic) NSArray *dictationLocalesEnableds;
@property (copy, nonatomic) NSString *bundleId;
@property (nonatomic) BOOL hasBundleId;
@property (retain, nonatomic) SISchemaUUID *textInputSessionId;
@property (nonatomic) BOOL hasTextInputSessionId;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteBundleId;
- (void)deleteUserSelectedLocale;
- (void)deleteKeyboardLocale;
- (void)deleteKeyboardLanguage;
- (void)deleteDictationLocale;
- (void)deleteSiriSelectedLocale;
- (void)clearKeyboardLocalesEnabled;
- (void)deleteKeyboardLocalesEnabled;
- (void)addKeyboardLocalesEnabled:(id)a0;
- (unsigned long long)keyboardLocalesEnabledCount;
- (id)keyboardLocalesEnabledAtIndex:(unsigned long long)a0;
- (void)clearDictationLocalesEnabled;
- (void)deleteDictationLocalesEnabled;
- (void)addDictationLocalesEnabled:(id)a0;
- (unsigned long long)dictationLocalesEnabledCount;
- (id)dictationLocalesEnabledAtIndex:(unsigned long long)a0;
- (void)deleteTextInputSessionId;

@end
