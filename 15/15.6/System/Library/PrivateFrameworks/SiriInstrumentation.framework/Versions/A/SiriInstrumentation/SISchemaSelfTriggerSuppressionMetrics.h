@class NSArray, NSData;

@interface SISchemaSelfTriggerSuppressionMetrics : SISchemaInstrumentationMessage {
    struct { unsigned char numSelfTriggersDetected : 1; unsigned char durationSelfTriggerSuppressionWasActiveInSeconds : 1; } _has;
}

@property (nonatomic) int numSelfTriggersDetected;
@property (nonatomic) char hasNumSelfTriggersDetected;
@property (nonatomic) double durationSelfTriggerSuppressionWasActiveInSeconds;
@property (nonatomic) char hasDurationSelfTriggerSuppressionWasActiveInSeconds;
@property (copy, nonatomic) NSArray *selfTriggerSuppressionSessions;
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
- (void)addSelfTriggerSuppressionSessions:(id)a0;
- (void)clearSelfTriggerSuppressionSessions;
- (void)deleteDurationSelfTriggerSuppressionWasActiveInSeconds;
- (void)deleteNumSelfTriggersDetected;
- (void)deleteSelfTriggerSuppressionSessions;
- (id)selfTriggerSuppressionSessionsAtIndex:(unsigned long long)a0;
- (unsigned long long)selfTriggerSuppressionSessionsCount;
- (id)suppressMessageUnderConditions;

@end
