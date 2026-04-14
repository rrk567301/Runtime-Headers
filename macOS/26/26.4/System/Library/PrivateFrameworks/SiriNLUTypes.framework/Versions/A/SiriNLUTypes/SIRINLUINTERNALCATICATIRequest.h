@class NSString, SIRINLUEXTERNALUUID, SIRINLUINTERNALNLv4EmbeddingTensor, SIRINLUEXTERNALTurnInput;

@interface SIRINLUINTERNALCATICATIRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasEmbeddings;
@property (retain, nonatomic) SIRINLUINTERNALNLv4EmbeddingTensor *embeddings;
@property (readonly, nonatomic) BOOL hasOriginalUtterance;
@property (retain, nonatomic) NSString *originalUtterance;
@property (readonly, nonatomic) BOOL hasNormalisedUtterance;
@property (retain, nonatomic) NSString *normalisedUtterance;
@property (readonly, nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *requestId;
@property (readonly, nonatomic) BOOL hasTurnInput;
@property (retain, nonatomic) SIRINLUEXTERNALTurnInput *turnInput;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
