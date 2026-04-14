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
- (void)deleteEnded;
- (void)deleteEphemeralToAggregationIdentifierMap;
- (void)deleteStartedOrChanged;

@end
