@class ORCHSchemaORCHMUXEphemeralToAggregationIdentifierMapContext, ORCHSchemaORCHMUXRequestEnded, NSData, ORCHSchemaORCHMUXRequestStarted;

@interface ORCHSchemaORCHMUXBridgeContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) ORCHSchemaORCHMUXRequestStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) ORCHSchemaORCHMUXRequestEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) ORCHSchemaORCHMUXEphemeralToAggregationIdentifierMapContext *ephemeralToAggregationIdentifierMap;
@property (nonatomic) BOOL hasEphemeralToAggregationIdentifierMap;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

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
- (void)deleteEnded;
- (void)deleteEphemeralToAggregationIdentifierMap;
- (void)deleteStartedOrChanged;

@end
