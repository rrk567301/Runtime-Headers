@class NSData;

@interface NLRouterSchemaNLRouterHandleEnded : SISchemaInstrumentationMessage {
    struct { unsigned char routingDecisionType : 1; unsigned char routingDecisionSource : 1; unsigned char rewrittenUtteranceCount : 1; } _has;
}

@property (nonatomic) int routingDecisionType;
@property (nonatomic) BOOL hasRoutingDecisionType;
@property (nonatomic) int routingDecisionSource;
@property (nonatomic) BOOL hasRoutingDecisionSource;
@property (nonatomic) unsigned int rewrittenUtteranceCount;
@property (nonatomic) BOOL hasRewrittenUtteranceCount;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteRewrittenUtteranceCount;
- (void)deleteRoutingDecisionSource;
- (void)deleteRoutingDecisionType;
- (id)suppressMessageUnderConditions;

@end
