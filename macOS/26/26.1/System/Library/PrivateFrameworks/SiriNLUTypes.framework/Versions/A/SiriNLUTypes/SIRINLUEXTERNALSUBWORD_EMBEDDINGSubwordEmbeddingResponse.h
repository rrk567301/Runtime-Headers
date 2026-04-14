@class SIRINLUINTERNALEMBEDDINGEmbeddingTensorOutput, SIRINLUINTERNALSubwordTokenChain;

@interface SIRINLUEXTERNALSUBWORD_EMBEDDINGSubwordEmbeddingResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasSubwordTokenChain;
@property (retain, nonatomic) SIRINLUINTERNALSubwordTokenChain *subwordTokenChain;
@property (readonly, nonatomic) BOOL hasSubwordTokenEmbedding;
@property (retain, nonatomic) SIRINLUINTERNALEMBEDDINGEmbeddingTensorOutput *subwordTokenEmbedding;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
