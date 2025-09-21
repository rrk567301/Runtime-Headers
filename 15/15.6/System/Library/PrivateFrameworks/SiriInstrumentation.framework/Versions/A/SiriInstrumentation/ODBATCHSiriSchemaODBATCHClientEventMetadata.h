@class ODDSiriSchemaODDTimeInterval, NSData, SISchemaUUID;

@interface ODBATCHSiriSchemaODBATCHClientEventMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char eventTimestampInMsSince1970 : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *odbatchId;
@property (nonatomic) char hasOdbatchId;
@property (retain, nonatomic) ODDSiriSchemaODDTimeInterval *aggregationInterval;
@property (nonatomic) char hasAggregationInterval;
@property (nonatomic) unsigned long long eventTimestampInMsSince1970;
@property (nonatomic) char hasEventTimestampInMsSince1970;
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
- (void)deleteOdbatchId;
- (void)deleteAggregationInterval;
- (void)deleteEventTimestampInMsSince1970;
- (id)suppressMessageUnderConditions;

@end
