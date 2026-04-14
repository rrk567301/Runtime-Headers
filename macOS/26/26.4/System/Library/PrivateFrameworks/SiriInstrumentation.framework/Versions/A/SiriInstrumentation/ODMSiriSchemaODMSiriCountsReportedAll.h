@class NSArray, ODMSiriSchemaODMSiriAggregationInterval, NSData;

@interface ODMSiriSchemaODMSiriCountsReportedAll : SISchemaInstrumentationMessage

@property (retain, nonatomic) ODMSiriSchemaODMSiriAggregationInterval *aggregationInterval;
@property (nonatomic) BOOL hasAggregationInterval;
@property (copy, nonatomic) NSArray *siriCountsAlls;
@property (copy, nonatomic) NSArray *segments;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (void)addSegments:(int)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addSiriCountsAll:(id)a0;
- (void)clearSegments;
- (void)clearSiriCountsAll;
- (void)deleteAggregationInterval;
- (void)deleteSegments;
- (void)deleteSiriCountsAll;
- (int)segmentsAtIndex:(unsigned long long)a0;
- (unsigned long long)segmentsCount;
- (id)siriCountsAllAtIndex:(unsigned long long)a0;
- (unsigned long long)siriCountsAllCount;

@end
