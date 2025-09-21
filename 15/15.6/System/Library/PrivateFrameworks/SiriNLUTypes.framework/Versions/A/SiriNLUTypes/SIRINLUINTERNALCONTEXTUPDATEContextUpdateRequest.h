@class NSString, SIRINLUEXTERNALUUID, SIRINLUEXTERNALTurnInput, NSMutableArray;

@interface SIRINLUINTERNALCONTEXTUPDATEContextUpdateRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) char hasCurrentTurn;
@property (retain, nonatomic) SIRINLUEXTERNALTurnInput *currentTurn;
@property (retain, nonatomic) NSMutableArray *previousTurns;
@property (retain, nonatomic) NSMutableArray *qrHypotheses;
@property (readonly, nonatomic) char hasRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *requestId;
@property (readonly, nonatomic) char hasResultCandidateId;
@property (retain, nonatomic) NSString *resultCandidateId;
@property (readonly, nonatomic) char hasNluRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *nluRequestId;

+ (Class)previousTurnsType;
+ (Class)qrHypothesesType;

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
- (void)addPreviousTurns:(id)a0;
- (void)addQrHypotheses:(id)a0;
- (void)clearPreviousTurns;
- (void)clearQrHypotheses;
- (id)previousTurnsAtIndex:(unsigned long long)a0;
- (unsigned long long)previousTurnsCount;
- (id)qrHypothesesAtIndex:(unsigned long long)a0;
- (unsigned long long)qrHypothesesCount;

@end
