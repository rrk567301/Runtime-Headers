@class NSArray, ODMSiriSchemaODMSiriAggregationInterval, NSData;

@interface ODMSiriSchemaODMSiriCountsReportedAll : SISchemaInstrumentationMessage

@property (retain, nonatomic) ODMSiriSchemaODMSiriAggregationInterval *aggregationInterval;
@property (nonatomic) char hasAggregationInterval;
@property (copy, nonatomic) NSArray *siriCountsAlls;
@property (copy, nonatomic) NSArray *segments;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addSegments:(int)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
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
- (id)suppressMessageUnderConditions;

@end
