@class NSData;

@interface NLRouterSchemaNLRouterBridgeRoutingDecision : SISchemaInstrumentationMessage {
    struct { unsigned char routingDecisionSource : 1; unsigned char routerDecisionType : 1; } _has;
}

@property (nonatomic) int routingDecisionSource;
@property (nonatomic) BOOL hasRoutingDecisionSource;
@property (nonatomic) int routerDecisionType;
@property (nonatomic) BOOL hasRouterDecisionType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteRouterDecisionType;
- (void)deleteRoutingDecisionSource;

@end
