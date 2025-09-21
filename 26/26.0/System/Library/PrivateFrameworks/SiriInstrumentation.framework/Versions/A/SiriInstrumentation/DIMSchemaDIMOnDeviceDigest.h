@class NSData;

@interface DIMSchemaDIMOnDeviceDigest : SISchemaInstrumentationMessage {
    struct { unsigned char daysWithTwoValidAssistantTurnsPerWeek : 1; unsigned char daysWithTwoAssistantSpeechRequestsPerWeek : 1; } _has;
}

@property (nonatomic) unsigned int daysWithTwoValidAssistantTurnsPerWeek;
@property (nonatomic) BOOL hasDaysWithTwoValidAssistantTurnsPerWeek;
@property (nonatomic) unsigned int daysWithTwoAssistantSpeechRequestsPerWeek;
@property (nonatomic) BOOL hasDaysWithTwoAssistantSpeechRequestsPerWeek;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteDaysWithTwoAssistantSpeechRequestsPerWeek;
- (void)deleteDaysWithTwoValidAssistantTurnsPerWeek;

@end
