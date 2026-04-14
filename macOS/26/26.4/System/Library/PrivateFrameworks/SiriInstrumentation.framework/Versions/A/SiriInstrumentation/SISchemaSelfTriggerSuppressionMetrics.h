@class NSArray, NSData;

@interface SISchemaSelfTriggerSuppressionMetrics : SISchemaInstrumentationMessage {
    struct { unsigned char numSelfTriggersDetected : 1; unsigned char durationSelfTriggerSuppressionWasActiveInSeconds : 1; } _has;
}

@property (nonatomic) int numSelfTriggersDetected;
@property (nonatomic) BOOL hasNumSelfTriggersDetected;
@property (nonatomic) double durationSelfTriggerSuppressionWasActiveInSeconds;
@property (nonatomic) BOOL hasDurationSelfTriggerSuppressionWasActiveInSeconds;
@property (copy, nonatomic) NSArray *selfTriggerSuppressionSessions;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addSelfTriggerSuppressionSessions:(id)a0;
- (void)clearSelfTriggerSuppressionSessions;
- (void)deleteDurationSelfTriggerSuppressionWasActiveInSeconds;
- (void)deleteNumSelfTriggersDetected;
- (void)deleteSelfTriggerSuppressionSessions;
- (id)selfTriggerSuppressionSessionsAtIndex:(unsigned long long)a0;
- (unsigned long long)selfTriggerSuppressionSessionsCount;

@end
