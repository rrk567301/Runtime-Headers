@class NSString, SISchemaISOLocale, NSData;

@interface SISchemaVoiceSettings : SISchemaInstrumentationMessage {
    struct { unsigned char voiceGender : 1; unsigned char voiceAccent : 1; } _has;
}

@property (nonatomic) int voiceGender;
@property (nonatomic) char hasVoiceGender;
@property (nonatomic) int voiceAccent;
@property (nonatomic) char hasVoiceAccent;
@property (copy, nonatomic) NSString *voiceName;
@property (nonatomic) char hasVoiceName;
@property (retain, nonatomic) SISchemaISOLocale *voiceAccentV2;
@property (nonatomic) char hasVoiceAccentV2;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteVoiceName;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteVoiceAccent;
- (void)deleteVoiceAccentV2;
- (void)deleteVoiceGender;
- (id)suppressMessageUnderConditions;

@end
