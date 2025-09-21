@class NSData;

@interface ODMSiriSchemaODMSiriAggregationInterval : SISchemaInstrumentationMessage {
    struct { unsigned char aggregationIntervalInDays : 1; unsigned char aggregationIntervalStartTimestampInSecondsSince2001 : 1; } _has;
}

@property (nonatomic) unsigned int aggregationIntervalInDays;
@property (nonatomic) char hasAggregationIntervalInDays;
@property (nonatomic) double aggregationIntervalStartTimestampInSecondsSince2001;
@property (nonatomic) char hasAggregationIntervalStartTimestampInSecondsSince2001;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAggregationIntervalInDays;
- (void)deleteAggregationIntervalStartTimestampInSecondsSince2001;
- (id)suppressMessageUnderConditions;

@end
