@class NSData, SISchemaUUID;

@interface ASRSchemaASRDictationVoiceCommandMetricsReported : SISchemaInstrumentationMessage {
    struct { unsigned char commandEndTimeInNs : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *voiceCommandId;
@property (nonatomic) BOOL hasVoiceCommandId;
@property (nonatomic) unsigned long long commandEndTimeInNs;
@property (nonatomic) BOOL hasCommandEndTimeInNs;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteCommandEndTimeInNs;
- (void)deleteVoiceCommandId;
- (id)suppressMessageUnderConditions;

@end
