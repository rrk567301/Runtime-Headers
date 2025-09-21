@class NSString;

@interface SIRINLUINTERNALNLv4EmbeddingTensor : PBCodable <NSCopying> {
    struct { float *list; unsigned long long count; unsigned long long size; } _values;
    struct { unsigned char embeddingDim : 1; unsigned char numLayer : 1; unsigned char numToken : 1; } _has;
}

@property (readonly, nonatomic) unsigned long long valuesCount;
@property (readonly, nonatomic) float *values;
@property (nonatomic) char hasNumToken;
@property (nonatomic) unsigned long long numToken;
@property (nonatomic) char hasNumLayer;
@property (nonatomic) unsigned long long numLayer;
@property (nonatomic) char hasEmbeddingDim;
@property (nonatomic) unsigned long long embeddingDim;
@property (readonly, nonatomic) char hasEmbedderId;
@property (retain, nonatomic) NSString *embedderId;

- (void)dealloc;
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
- (void)clearValues;
- (void)addValues:(float)a0;
- (float)valuesAtIndex:(unsigned long long)a0;
- (void)setValues:(float *)a0 count:(unsigned long long)a1;

@end
