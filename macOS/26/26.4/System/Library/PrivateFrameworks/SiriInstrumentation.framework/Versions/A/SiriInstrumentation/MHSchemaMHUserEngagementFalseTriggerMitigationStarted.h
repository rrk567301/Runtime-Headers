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
- (void)deleteAccumulatedAggregationStats;
- (void)deleteModelVersion;
- (void)deleteUiWaitTimeInSeconds;

@end
