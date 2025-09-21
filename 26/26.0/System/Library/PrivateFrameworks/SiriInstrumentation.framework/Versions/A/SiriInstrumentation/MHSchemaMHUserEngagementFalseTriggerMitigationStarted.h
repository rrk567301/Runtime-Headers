@class NSString, MHSchemaMHUserEngagementAccumulatedAggregationStats, NSData;

@interface MHSchemaMHUserEngagementFalseTriggerMitigationStarted : SISchemaInstrumentationMessage {
    struct { unsigned char uiWaitTimeInSeconds : 1; } _has;
}

@property (copy, nonatomic) NSString *modelVersion;
@property (nonatomic) BOOL hasModelVersion;
@property (nonatomic) double uiWaitTimeInSeconds;
@property (nonatomic) BOOL hasUiWaitTimeInSeconds;
@property (retain, nonatomic) MHSchemaMHUserEngagementAccumulatedAggregationStats *accumulatedAggregationStats;
@property (nonatomic) BOOL hasAccumulatedAggregationStats;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteAccumulatedAggregationStats;
- (void)deleteModelVersion;
- (void)deleteUiWaitTimeInSeconds;

@end
