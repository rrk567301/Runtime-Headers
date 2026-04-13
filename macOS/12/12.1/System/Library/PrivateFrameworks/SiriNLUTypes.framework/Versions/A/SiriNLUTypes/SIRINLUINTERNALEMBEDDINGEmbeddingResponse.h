@class SIRINLUINTERNALTokenChain, SIRINLUINTERNALNLv4EmbeddingTensor;

@interface SIRINLUINTERNALEMBEDDINGEmbeddingResponse : PBCodable <NSCopying> {
    struct { unsigned char embeddingDim : 1; unsigned char numLayer : 1; unsigned char numToken : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasEmbeddingTensor;
@property (retain, nonatomic) SIRINLUINTERNALNLv4EmbeddingTensor *embeddingTensor;
@property (readonly, nonatomic) BOOL hasTokenChain;
@property (retain, nonatomic) SIRINLUINTERNALTokenChain *tokenChain;
@property (nonatomic) BOOL hasNumToken;
@property (nonatomic) unsigned long long numToken;
@property (nonatomic) BOOL hasNumLayer;
@property (nonatomic) unsigned long long numLayer;
@property (nonatomic) BOOL hasEmbeddingDim;
@property (nonatomic) unsigned long long embeddingDim;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;

@end
