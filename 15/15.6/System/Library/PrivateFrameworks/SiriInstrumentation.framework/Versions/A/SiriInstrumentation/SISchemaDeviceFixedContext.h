@class NSString, SISchemaSiriUISettings, NSData, SISchemaVoiceSettings;

@interface SISchemaDeviceFixedContext : SISchemaInstrumentationMessage {
    struct { unsigned char isSatellitePaired : 1; } _has;
}

@property (copy, nonatomic) NSString *deviceType;
@property (nonatomic) char hasDeviceType;
@property (copy, nonatomic) NSString *systemBuild;
@property (nonatomic) char hasSystemBuild;
@property (copy, nonatomic) NSString *siriInputLanguage;
@property (nonatomic) char hasSiriInputLanguage;
@property (copy, nonatomic) NSString *siriVoiceLanguage;
@property (nonatomic) char hasSiriVoiceLanguage;
@property (copy, nonatomic) NSString *systemLocale;
@property (nonatomic) char hasSystemLocale;
@property (copy, nonatomic) NSString *siriDeviceID;
@property (nonatomic) char hasSiriDeviceID;
@property (copy, nonatomic) NSString *speechID;
@property (nonatomic) char hasSpeechID;
@property (retain, nonatomic) SISchemaSiriUISettings *siriUISettings;
@property (nonatomic) char hasSiriUISettings;
@property (nonatomic) char isSatellitePaired;
@property (nonatomic) char hasIsSatellitePaired;
@property (retain, nonatomic) SISchemaVoiceSettings *voiceSettings;
@property (nonatomic) char hasVoiceSettings;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteDeviceType;
- (void)deleteIsSatellitePaired;
- (void)deleteSiriDeviceID;
- (void)deleteSiriInputLanguage;
- (void)deleteSiriUISettings;
- (void)deleteSiriVoiceLanguage;
- (void)deleteSpeechID;
- (void)deleteSystemBuild;
- (void)deleteSystemLocale;
- (void)deleteVoiceSettings;
- (id)suppressMessageUnderConditions;

@end
