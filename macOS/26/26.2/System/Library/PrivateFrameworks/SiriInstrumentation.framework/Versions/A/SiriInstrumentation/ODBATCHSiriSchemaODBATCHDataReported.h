@class NSData, SISchemaUUID;

@interface ODBATCHSiriSchemaODBATCHDataReported : SISchemaInstrumentationMessage {
    struct { unsigned char daysWithTwoValidAssistantTurnsPerWeek : 1; unsigned char daysWithTwoAssistantSpeechRequestsPerWeek : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *originalClockId;
@property (nonatomic) BOOL hasOriginalClockId;
@property (nonatomic) unsigned int daysWithTwoValidAssistantTurnsPerWeek;
@property (nonatomic) BOOL hasDaysWithTwoValidAssistantTurnsPerWeek;
@property (nonatomic) unsigned int daysWithTwoAssistantSpeechRequestsPerWeek;
@property (nonatomic) BOOL hasDaysWithTwoAssistantSpeechRequestsPerWeek;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteDaysWithTwoAssistantSpeechRequestsPerWeek;
- (void)deleteDaysWithTwoValidAssistantTurnsPerWeek;
- (void)deleteOriginalClockId;

@end
