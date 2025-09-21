@class SIRINLUEXTERNALTurnInput, SIRINLUEXTERNALParser, SIRINLUEXTERNALRequestID, SIRINLUINTERNALNLv4EmbeddingTensor, SIRINLUEXTERNALUUID, SIRINLUINTERNALNLV4_PARSERTokenisation, NSMutableArray;

@interface SIRINLUINTERNALITFMITFMParserRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) char hasRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *requestId;
@property (readonly, nonatomic) char hasTokenisedUtterance;
@property (retain, nonatomic) SIRINLUINTERNALNLV4_PARSERTokenisation *tokenisedUtterance;
@property (readonly, nonatomic) char hasEmbeddings;
@property (retain, nonatomic) SIRINLUINTERNALNLv4EmbeddingTensor *embeddings;
@property (retain, nonatomic) NSMutableArray *matchingSpans;
@property (readonly, nonatomic) char hasTurnInput;
@property (retain, nonatomic) SIRINLUEXTERNALTurnInput *turnInput;
@property (readonly, nonatomic) char hasParser;
@property (retain, nonatomic) SIRINLUEXTERNALParser *parser;
@property (readonly, nonatomic) char hasNluRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALRequestID *nluRequestId;

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
