@class NSString, MHSchemaMHUserEngagementAccumulatedAggregationStats, NSData;

@interface MHSchemaMHUserEngagementFalseTriggerMitigationStarted : SISchemaInstrumentationMessage {
    struct { unsigned char uiWaitTimeInSeconds : 1; } _has;
}

@property (copy, nonatomic) NSString *modelVersion;
@property (nonatomic) char hasModelVersion;
@property (nonatomic) double uiWaitTimeInSeconds;
@property (nonatomic) char hasUiWaitTimeInSeconds;
@property (retain, nonatomic) MHSchemaMHUserEngagementAccumulatedAggregationStats *accumulatedAggregationStats;
@property (nonatomic) char hasAccumulatedAggregationStats;
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
- (void)deleteAccumulatedAggregationStats;
- (void)deleteModelVersion;
- (void)deleteUiWaitTimeInSeconds;
- (id)suppressMessageUnderConditions;

@end
