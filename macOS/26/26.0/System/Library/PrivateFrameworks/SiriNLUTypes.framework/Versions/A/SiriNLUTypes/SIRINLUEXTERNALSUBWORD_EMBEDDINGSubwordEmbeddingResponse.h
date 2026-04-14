@class SIRINLUINTERNALEMBEDDINGEmbeddingTensorOutput, SIRINLUINTERNALSubwordTokenChain;

@interface SIRINLUEXTERNALSUBWORD_EMBEDDINGSubwordEmbeddingResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasSubwordTokenChain;
@property (retain, nonatomic) SIRINLUINTERNALSubwordTokenChain *subwordTokenChain;
@property (readonly, nonatomic) BOOL hasSubwordTokenEmbedding;
@property (retain, nonatomic) SIRINLUINTERNALEMBEDDINGEmbeddingTensorOutput *subwordTokenEmbedding;

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

@end
