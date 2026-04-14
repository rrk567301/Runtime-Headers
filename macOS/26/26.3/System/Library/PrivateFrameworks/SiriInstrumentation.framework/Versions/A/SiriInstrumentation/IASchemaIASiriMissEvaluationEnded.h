@class IASchemaIAVoiceTriggerEventSummary, NSData;

@interface IASchemaIASiriMissEvaluationEnded : SISchemaInstrumentationMessage {
    struct { unsigned char isSiriMiss : 1; } _has;
}

@property (nonatomic) BOOL isSiriMiss;
@property (nonatomic) BOOL hasIsSiriMiss;
@property (retain, nonatomic) IASchemaIAVoiceTriggerEventSummary *voiceTriggerSummary;
@property (nonatomic) BOOL hasVoiceTriggerSummary;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteIsSiriMiss;
- (void)deleteVoiceTriggerSummary;

@end
