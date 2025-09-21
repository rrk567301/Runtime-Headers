@class NSMutableArray;

@interface GEOPBOfflineDataBatchesResponse : PBCodable <NSCopying> {
    NSMutableArray *_layerBatchs;
}

@property (retain, nonatomic) NSMutableArray *layerBatchs;

+ (BOOL)isValid:(id)a0;
+ (Class)layerBatchType;

- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)readAll:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addLayerBatch:(id)a0;
- (void)clearLayerBatchs;
- (id)layerBatchAtIndex:(unsigned long long)a0;
- (unsigned long long)layerBatchsCount;

@end
