@class SIRINLUINTERNALTokenChain, SIRINLUINTERNALNLv4EmbeddingTensor, NSMutableArray, SIRINLUINTERNALSubwordTokenChain;

@interface SIRINLUINTERNALEMBEDDINGEmbeddingResponse : PBCodable <NSCopying> {
    struct { unsigned char embeddingDim : 1; unsigned char numLayer : 1; unsigned char numSubwordToken : 1; unsigned char numToken : 1; } _has;
}

@property (readonly, nonatomic) char hasEmbeddingTensor;
@property (retain, nonatomic) SIRINLUINTERNALNLv4EmbeddingTensor *embeddingTensor;
@property (readonly, nonatomic) char hasTokenChain;
@property (retain, nonatomic) SIRINLUINTERNALTokenChain *tokenChain;
@property (nonatomic) char hasNumToken;
@property (nonatomic) unsigned long long numToken;
@property (nonatomic) char hasNumLayer;
@property (nonatomic) unsigned long long numLayer;
@property (nonatomic) char hasEmbeddingDim;
@property (nonatomic) unsigned long long embeddingDim;
@property (readonly, nonatomic) char hasSentenceEmbeddingTensor;
@property (retain, nonatomic) SIRINLUINTERNALNLv4EmbeddingTensor *sentenceEmbeddingTensor;
@property (retain, nonatomic) NSMutableArray *embeddingTensorOutputs;
@property (readonly, nonatomic) char hasSubwordTokenChain;
@property (retain, nonatomic) SIRINLUINTERNALSubwordTokenChain *subwordTokenChain;
@property (nonatomic) char hasNumSubwordToken;
@property (nonatomic) unsigned long long numSubwordToken;
@property (retain, nonatomic) NSMutableArray *subwordEmbeddingTensorOutputs;

+ (Class)embeddingTensorOutputsType;
+ (Class)subwordEmbeddingTensorOutputsType;

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
- (void)addEmbeddingTensorOutputs:(id)a0;
- (void)addSubwordEmbeddingTensorOutputs:(id)a0;
- (void)clearEmbeddingTensorOutputs;
- (void)clearSubwordEmbeddingTensorOutputs;
- (id)embeddingTensorOutputsAtIndex:(unsigned long long)a0;
- (unsigned long long)embeddingTensorOutputsCount;
- (id)subwordEmbeddingTensorOutputsAtIndex:(unsigned long long)a0;
- (unsigned long long)subwordEmbeddingTensorOutputsCount;

@end
