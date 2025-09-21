@class ODDSiriSchemaODDVoiceProperties, ODDSiriSchemaODDOptInProperties, ODDSiriSchemaODDAppleIntelligenceProperties, NSData, SISchemaISOLocale, ODDSiriSchemaODDHomeKitProperties;

@interface ODDSiriSchemaODDAssistantProperties : SISchemaInstrumentationMessage {
    struct { unsigned char isAssistantEnabled : 1; unsigned char listenFor : 1; unsigned char numSiriShortcutsEnabled : 1; unsigned char isPreciseLocationEnabled : 1; unsigned char locationAccessPermission : 1; } _has;
}

@property (nonatomic) char isAssistantEnabled;
@property (nonatomic) char hasIsAssistantEnabled;
@property (retain, nonatomic) SISchemaISOLocale *inputLocale;
@property (nonatomic) char hasInputLocale;
@property (nonatomic) int listenFor;
@property (nonatomic) char hasListenFor;
@property (nonatomic) int numSiriShortcutsEnabled;
@property (nonatomic) char hasNumSiriShortcutsEnabled;
@property (nonatomic) char isPreciseLocationEnabled;
@property (nonatomic) char hasIsPreciseLocationEnabled;
@property (retain, nonatomic) ODDSiriSchemaODDVoiceProperties *voice;
@property (nonatomic) char hasVoice;
@property (retain, nonatomic) ODDSiriSchemaODDOptInProperties *optIn;
@property (nonatomic) char hasOptIn;
@property (retain, nonatomic) ODDSiriSchemaODDHomeKitProperties *homeKit;
@property (nonatomic) char hasHomeKit;
@property (nonatomic) int locationAccessPermission;
@property (nonatomic) char hasLocationAccessPermission;
@property (retain, nonatomic) ODDSiriSchemaODDAppleIntelligenceProperties *appleIntelligence;
@property (nonatomic) char hasAppleIntelligence;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteListenFor;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteAppleIntelligence;
- (void)deleteHomeKit;
- (void)deleteInputLocale;
- (void)deleteIsAssistantEnabled;
- (void)deleteIsPreciseLocationEnabled;
- (void)deleteLocationAccessPermission;
- (void)deleteNumSiriShortcutsEnabled;
- (void)deleteOptIn;
- (void)deleteVoice;
- (id)suppressMessageUnderConditions;

@end
