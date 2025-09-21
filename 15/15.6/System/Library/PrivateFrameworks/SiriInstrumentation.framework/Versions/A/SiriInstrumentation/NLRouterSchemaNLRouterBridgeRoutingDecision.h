@class NSData;

@interface NLRouterSchemaNLRouterBridgeRoutingDecision : SISchemaInstrumentationMessage {
    struct { unsigned char routingDecisionSource : 1; unsigned char routerDecisionType : 1; } _has;
}

@property (nonatomic) int routingDecisionSource;
@property (nonatomic) char hasRoutingDecisionSource;
@property (nonatomic) int routerDecisionType;
@property (nonatomic) char hasRouterDecisionType;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteRouterDecisionType;
- (void)deleteRoutingDecisionSource;
- (id)suppressMessageUnderConditions;

@end
