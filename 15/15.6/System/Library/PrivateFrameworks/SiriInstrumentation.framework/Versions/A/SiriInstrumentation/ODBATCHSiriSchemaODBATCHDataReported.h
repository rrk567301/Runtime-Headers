@class NSData, SISchemaUUID;

@interface ODBATCHSiriSchemaODBATCHDataReported : SISchemaInstrumentationMessage {
    struct { unsigned char daysWithTwoValidAssistantTurnsPerWeek : 1; unsigned char daysWithTwoAssistantSpeechRequestsPerWeek : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *originalClockId;
@property (nonatomic) char hasOriginalClockId;
@property (nonatomic) unsigned int daysWithTwoValidAssistantTurnsPerWeek;
@property (nonatomic) char hasDaysWithTwoValidAssistantTurnsPerWeek;
@property (nonatomic) unsigned int daysWithTwoAssistantSpeechRequestsPerWeek;
@property (nonatomic) char hasDaysWithTwoAssistantSpeechRequestsPerWeek;
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
- (void)deleteDaysWithTwoAssistantSpeechRequestsPerWeek;
- (void)deleteDaysWithTwoValidAssistantTurnsPerWeek;
- (void)deleteOriginalClockId;
- (id)suppressMessageUnderConditions;

@end
