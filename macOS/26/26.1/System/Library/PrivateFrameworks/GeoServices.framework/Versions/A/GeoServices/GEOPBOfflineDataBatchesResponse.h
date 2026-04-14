@class NSMutableArray;

@interface GEOPBOfflineDataBatchesResponse : PBCodable <NSCopying> {
    NSMutableArray *_layerBatchs;
}

@property (retain, nonatomic) NSMutableArray *layerBatchs;

+ (BOOL)isValid:(id)a0;
+ (Class)layerBatchType;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)description;
- (void)readAll:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addLayerBatch:(id)a0;
- (void)clearLayerBatchs;
- (id)layerBatchAtIndex:(unsigned long long)a0;
- (unsigned long long)layerBatchsCount;

@end
