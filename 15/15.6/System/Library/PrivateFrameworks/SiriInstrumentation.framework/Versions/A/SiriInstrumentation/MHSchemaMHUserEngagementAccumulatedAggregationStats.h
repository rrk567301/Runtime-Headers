@class NSArray, NSString, NSData;

@interface MHSchemaMHUserEngagementAccumulatedAggregationStats : SISchemaInstrumentationMessage {
    struct { unsigned char aggregationStartTimestamp : 1; unsigned char numberOfDaysAggregation : 1; unsigned char intendedRequestRatio : 1; } _has;
}

@property (nonatomic) double aggregationStartTimestamp;
@property (nonatomic) char hasAggregationStartTimestamp;
@property (nonatomic) int numberOfDaysAggregation;
@property (nonatomic) char hasNumberOfDaysAggregation;
@property (copy, nonatomic) NSArray *aggregationStats;
@property (copy, nonatomic) NSString *cohortType;
@property (nonatomic) char hasCohortType;
@property (nonatomic) double intendedRequestRatio;
@property (nonatomic) char hasIntendedRequestRatio;
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
- (void)deleteAggregationStartTimestamp;
- (void)addAggregationStats:(id)a0;
- (id)aggregationStatsAtIndex:(unsigned long long)a0;
- (unsigned long long)aggregationStatsCount;
- (void)clearAggregationStats;
- (void)deleteAggregationStats;
- (void)deleteCohortType;
- (void)deleteIntendedRequestRatio;
- (void)deleteNumberOfDaysAggregation;
- (id)suppressMessageUnderConditions;

@end
