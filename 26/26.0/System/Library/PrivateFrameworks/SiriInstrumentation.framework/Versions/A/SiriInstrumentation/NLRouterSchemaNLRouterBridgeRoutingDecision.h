@class NSData;

@interface NLRouterSchemaNLRouterBridgeRoutingDecision : SISchemaInstrumentationMessage {
    struct { unsigned char routingDecisionSource : 1; unsigned char routerDecisionType : 1; } _has;
}

@property (nonatomic) int routingDecisionSource;
@property (nonatomic) BOOL hasRoutingDecisionSource;
@property (nonatomic) int routerDecisionType;
@property (nonatomic) BOOL hasRouterDecisionType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteRouterDecisionType;
- (void)deleteRoutingDecisionSource;

@end
