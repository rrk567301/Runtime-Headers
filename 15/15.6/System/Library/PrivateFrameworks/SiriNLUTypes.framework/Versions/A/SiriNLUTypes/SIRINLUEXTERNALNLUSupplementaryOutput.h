@class SIRINLUEXTERNALCorrectionOutcome, NSMutableArray, SIRINLUEXTERNALRewriteMessage;

@interface SIRINLUEXTERNALNLUSupplementaryOutput : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *matchingSpans;
@property (readonly, nonatomic) char hasRewrite;
@property (retain, nonatomic) SIRINLUEXTERNALRewriteMessage *rewrite;
@property (readonly, nonatomic) char hasCorrectionOutcome;
@property (retain, nonatomic) SIRINLUEXTERNALCorrectionOutcome *correctionOutcome;

+ (Class)matchingSpansType;

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
- (void)addMatchingSpans:(id)a0;
- (void)clearMatchingSpans;
- (id)matchingSpansAtIndex:(unsigned long long)a0;
- (unsigned long long)matchingSpansCount;

@end
