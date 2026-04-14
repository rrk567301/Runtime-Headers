@class NSData, NLRouterSchemaNLRouterDecisionGenAIMetadata, NLRouterSchemaNLRouterOverrideMetadata;

@interface NLRouterSchemaNLRouterHandleEnded : SISchemaInstrumentationMessage {
    struct { unsigned char routingDecisionType : 1; unsigned char routingDecisionSource : 1; unsigned char rewrittenUtteranceCount : 1; } _has;
}

@property (nonatomic) int routingDecisionType;
@property (nonatomic) BOOL hasRoutingDecisionType;
@property (nonatomic) int routingDecisionSource;
@property (nonatomic) BOOL hasRoutingDecisionSource;
@property (nonatomic) unsigned int rewrittenUtteranceCount;
@property (nonatomic) BOOL hasRewrittenUtteranceCount;
@property (retain, nonatomic) NLRouterSchemaNLRouterDecisionGenAIMetadata *genAIMetadata;
@property (nonatomic) BOOL hasGenAIMetadata;
@property (retain, nonatomic) NLRouterSchemaNLRouterOverrideMetadata *overrideMetadata;
@property (nonatomic) BOOL hasOverrideMetadata;
@property (readonly, nonatomic) NSData *jsonData;

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
- (void)deleteGenAIMetadata;
- (void)deleteOverrideMetadata;
- (void)deleteRewrittenUtteranceCount;
- (void)deleteRoutingDecisionSource;
- (void)deleteRoutingDecisionType;

@end
