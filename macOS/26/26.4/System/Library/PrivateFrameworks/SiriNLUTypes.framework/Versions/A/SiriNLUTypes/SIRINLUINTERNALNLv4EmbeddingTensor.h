@class NSString;

@interface SIRINLUINTERNALNLv4EmbeddingTensor : PBCodable <NSCopying> {
    struct { float *list; unsigned long long count; unsigned long long size; } _values;
    struct { unsigned char embeddingDim : 1; unsigned char numLayer : 1; unsigned char numToken : 1; } _has;
}

@property (readonly, nonatomic) unsigned long long valuesCount;
@property (readonly, nonatomic) float *values;
@property (nonatomic) BOOL hasNumToken;
@property (nonatomic) unsigned long long numToken;
@property (nonatomic) BOOL hasNumLayer;
@property (nonatomic) unsigned long long numLayer;
@property (nonatomic) BOOL hasEmbeddingDim;
@property (nonatomic) unsigned long long embeddingDim;
@property (readonly, nonatomic) BOOL hasEmbedderId;
@property (retain, nonatomic) NSString *embedderId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)clearValues;
- (void)writeTo:(id)a0;
- (void)dealloc;
- (void)addValues:(float)a0;
- (float)valuesAtIndex:(unsigned long long)a0;
- (void)setValues:(float *)a0 count:(unsigned long long)a1;

@end
