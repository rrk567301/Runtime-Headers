@class NSData, ORCHSchemaORCHNLRouterBridgeRoutingDecision;

@interface ORCHSchemaORCHNLRouterBridgeEnded : SISchemaInstrumentationMessage

@property (retain, nonatomic) ORCHSchemaORCHNLRouterBridgeRoutingDecision *routingDecision;
@property (nonatomic) BOOL hasRoutingDecision;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteRoutingDecision;

@end
