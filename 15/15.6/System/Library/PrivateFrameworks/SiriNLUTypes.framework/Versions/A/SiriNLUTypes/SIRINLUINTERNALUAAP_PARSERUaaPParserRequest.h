@class SIRINLUINTERNALTokenChain, SIRINLUINTERNALNLv4EmbeddingTensor, SIRINLUEXTERNALUUID, NSMutableArray, SIRINLUEXTERNALTurnInput;

@interface SIRINLUINTERNALUAAP_PARSERUaaPParserRequest : PBRequest <NSCopying> {
    struct { unsigned char maxNumParses : 1; } _has;
}

@property (readonly, nonatomic) char hasRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *requestId;
@property (readonly, nonatomic) char hasTokenChain;
@property (retain, nonatomic) SIRINLUINTERNALTokenChain *tokenChain;
@property (readonly, nonatomic) char hasEmbeddings;
@property (retain, nonatomic) SIRINLUINTERNALNLv4EmbeddingTensor *embeddings;
@property (retain, nonatomic) NSMutableArray *matchingSpans;
@property (readonly, nonatomic) char hasTurnInput;
@property (retain, nonatomic) SIRINLUEXTERNALTurnInput *turnInput;
@property (nonatomic) char hasMaxNumParses;
@property (nonatomic) unsigned long long maxNumParses;

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
