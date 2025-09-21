@class NSString, SIRINLUEXTERNALUUID, SIRINLUEXTERNALCorrectionOutcome;

@interface SIRINLUEXTERNALNLU_ROUTERNLRouterRewriteUtterance : PBCodable <NSCopying> {
    struct { unsigned char routingDecision : 1; } _has;
}

@property (readonly, nonatomic) char hasUtteranceId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *utteranceId;
@property (readonly, nonatomic) char hasRewriteUtterance;
@property (retain, nonatomic) NSString *rewriteUtterance;
@property (nonatomic) char hasRoutingDecision;
@property (nonatomic) int routingDecision;
@property (readonly, nonatomic) char hasCorrectionOutcome;
@property (retain, nonatomic) SIRINLUEXTERNALCorrectionOutcome *correctionOutcome;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsRoutingDecision:(id)a0;
- (id)routingDecisionAsString:(int)a0;

@end
