@class NSString, SIRINLUEXTERNALUUID, SIRINLUINTERNALNLv4EmbeddingTensor, SIRINLUEXTERNALTurnInput;

@interface SIRINLUINTERNALCATICATIRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) char hasEmbeddings;
@property (retain, nonatomic) SIRINLUINTERNALNLv4EmbeddingTensor *embeddings;
@property (readonly, nonatomic) char hasOriginalUtterance;
@property (retain, nonatomic) NSString *originalUtterance;
@property (readonly, nonatomic) char hasNormalisedUtterance;
@property (retain, nonatomic) NSString *normalisedUtterance;
@property (readonly, nonatomic) char hasRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *requestId;
@property (readonly, nonatomic) char hasTurnInput;
@property (retain, nonatomic) SIRINLUEXTERNALTurnInput *turnInput;

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

@end
