@class NSString, NSArray, SISchemaLocaleIdentifier, SISchemaUUID, NSData;

@interface SISchemaDictationContext : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *keyboardLanguage;
@property (nonatomic) char hasKeyboardLanguage;
@property (retain, nonatomic) SISchemaLocaleIdentifier *keyboardLocale;
@property (nonatomic) char hasKeyboardLocale;
@property (retain, nonatomic) SISchemaLocaleIdentifier *dictationLocale;
@property (nonatomic) char hasDictationLocale;
@property (retain, nonatomic) SISchemaLocaleIdentifier *userSelectedLocale;
@property (nonatomic) char hasUserSelectedLocale;
@property (retain, nonatomic) SISchemaLocaleIdentifier *siriSelectedLocale;
@property (nonatomic) char hasSiriSelectedLocale;
@property (copy, nonatomic) NSArray *keyboardLocalesEnableds;
@property (copy, nonatomic) NSArray *dictationLocalesEnableds;
@property (copy, nonatomic) NSString *bundleId;
@property (nonatomic) char hasBundleId;
@property (retain, nonatomic) SISchemaUUID *textInputSessionId;
@property (nonatomic) char hasTextInputSessionId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)dictationLocalesEnabledAtIndex:(unsigned long long)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addDictationLocalesEnabled:(id)a0;
- (void)addKeyboardLocalesEnabled:(id)a0;
- (void)clearDictationLocalesEnabled;
- (void)clearKeyboardLocalesEnabled;
- (void)deleteBundleId;
- (void)deleteDictationLocale;
- (void)deleteDictationLocalesEnabled;
- (void)deleteKeyboardLanguage;
- (void)deleteKeyboardLocale;
- (void)deleteKeyboardLocalesEnabled;
- (void)deleteSiriSelectedLocale;
- (void)deleteTextInputSessionId;
- (void)deleteUserSelectedLocale;
- (unsigned long long)dictationLocalesEnabledCount;
- (id)keyboardLocalesEnabledAtIndex:(unsigned long long)a0;
- (unsigned long long)keyboardLocalesEnabledCount;
- (id)suppressMessageUnderConditions;

@end
