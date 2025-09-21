@class NSString, SIRINLUINTERNALNLv4EmbeddingTensor;

@interface SIRINLUINTERNALEMBEDDINGEmbeddingTensorOutput : PBCodable <NSCopying> {
    struct { unsigned char embeddingDim : 1; unsigned char isStableEmbeddingsVersion : 1; } _has;
}

@property (readonly, nonatomic) char hasEmbeddingVersion;
@property (retain, nonatomic) NSString *embeddingVersion;
@property (readonly, nonatomic) char hasEmbeddingTensor;
@property (retain, nonatomic) SIRINLUINTERNALNLv4EmbeddingTensor *embeddingTensor;
@property (readonly, nonatomic) char hasSentenceEmbeddingTensor;
@property (retain, nonatomic) SIRINLUINTERNALNLv4EmbeddingTensor *sentenceEmbeddingTensor;
@property (nonatomic) char hasEmbeddingDim;
@property (nonatomic) unsigned long long embeddingDim;
@property (nonatomic) char hasIsStableEmbeddingsVersion;
@property (nonatomic) char isStableEmbeddingsVersion;

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
