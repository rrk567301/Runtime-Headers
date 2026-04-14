@class SIRINLUEXTERNALCorrectionOutcome, NSMutableArray, SIRINLUEXTERNALRewriteMessage;

@interface SIRINLUEXTERNALNLUSupplementaryOutput : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *matchingSpans;
@property (readonly, nonatomic) BOOL hasRewrite;
@property (retain, nonatomic) SIRINLUEXTERNALRewriteMessage *rewrite;
@property (readonly, nonatomic) BOOL hasCorrectionOutcome;
@property (retain, nonatomic) SIRINLUEXTERNALCorrectionOutcome *correctionOutcome;

+ (Class)matchingSpansType;

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
- (void)addMatchingSpans:(id)a0;
- (void)clearMatchingSpans;
- (id)matchingSpansAtIndex:(unsigned long long)a0;
- (unsigned long long)matchingSpansCount;

@end
