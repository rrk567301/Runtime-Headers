@class IASchemaIAVoiceTriggerEventSummary, NSData;

@interface IASchemaIASiriMissEvaluationEnded : SISchemaInstrumentationMessage {
    struct { unsigned char isSiriMiss : 1; } _has;
}

@property (nonatomic) char isSiriMiss;
@property (nonatomic) char hasIsSiriMiss;
@property (retain, nonatomic) IASchemaIAVoiceTriggerEventSummary *voiceTriggerSummary;
@property (nonatomic) char hasVoiceTriggerSummary;
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
- (void)deleteIsSiriMiss;
- (void)deleteVoiceTriggerSummary;
- (id)suppressMessageUnderConditions;

@end
