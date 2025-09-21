@class NSString, SIRINLUINTERNALTokenChain, NSMutableArray, SIRINLUEXTERNALTurnInput;

@interface SIRINLUINTERNALOVERRIDESTurnInputAndPreprocessing : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasUtterance;
@property (retain, nonatomic) NSString *utterance;
@property (readonly, nonatomic) char hasTokenChain;
@property (retain, nonatomic) SIRINLUINTERNALTokenChain *tokenChain;
@property (retain, nonatomic) NSMutableArray *matchingSpans;
@property (readonly, nonatomic) char hasTurnInput;
@property (retain, nonatomic) SIRINLUEXTERNALTurnInput *turnInput;

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
