@class NSData;

@interface ORCHSchemaORCHNLRouterBridgeRoutingDecision : SISchemaInstrumentationMessage {
    struct { unsigned char routingDecisionSource : 1; unsigned char routerDecisionType : 1; } _has;
}

@property (nonatomic) int routingDecisionSource;
@property (nonatomic) BOOL hasRoutingDecisionSource;
@property (nonatomic) int routerDecisionType;
@property (nonatomic) BOOL hasRouterDecisionType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteRouterDecisionType;
- (void)deleteRoutingDecisionSource;

@end
