@class NSData;

@interface POMMESSchemaPOMMESPegasusRequestKfedLatency : SISchemaInstrumentationMessage {
    struct { unsigned char overallLatencyInMs : 1; unsigned char banyanLatencyInMs : 1; } _has;
}

@property (nonatomic) unsigned int overallLatencyInMs;
@property (nonatomic) BOOL hasOverallLatencyInMs;
@property (nonatomic) unsigned int banyanLatencyInMs;
@property (nonatomic) BOOL hasBanyanLatencyInMs;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteOverallLatencyInMs;
- (void)deleteBanyanLatencyInMs;

@end
