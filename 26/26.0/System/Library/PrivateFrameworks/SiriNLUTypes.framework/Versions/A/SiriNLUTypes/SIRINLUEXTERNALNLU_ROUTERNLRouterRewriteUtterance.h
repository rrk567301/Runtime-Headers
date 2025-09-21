@class NSString, SIRINLUEXTERNALUUID, SIRINLUEXTERNALCorrectionOutcome;

@interface SIRINLUEXTERNALNLU_ROUTERNLRouterRewriteUtterance : PBCodable <NSCopying> {
    struct { unsigned char routingDecision : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUtteranceId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *utteranceId;
@property (readonly, nonatomic) BOOL hasRewriteUtterance;
@property (retain, nonatomic) NSString *rewriteUtterance;
@property (nonatomic) BOOL hasRoutingDecision;
@property (nonatomic) int routingDecision;
@property (readonly, nonatomic) BOOL hasCorrectionOutcome;
@property (retain, nonatomic) SIRINLUEXTERNALCorrectionOutcome *correctionOutcome;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)StringAsRoutingDecision:(id)a0;
- (id)routingDecisionAsString:(int)a0;

@end
