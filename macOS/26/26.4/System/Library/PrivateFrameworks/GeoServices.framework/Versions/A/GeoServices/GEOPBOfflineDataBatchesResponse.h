@class NSMutableArray;

@interface GEOPBOfflineDataBatchesResponse : PBCodable <NSCopying> {
    NSMutableArray *_layerBatchs;
}

@property (retain, nonatomic) NSMutableArray *layerBatchs;

+ (BOOL)isValid:(id)a0;
+ (Class)layerBatchType;

- (void)readAll:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;
- (void)addLayerBatch:(id)a0;
- (void)clearLayerBatchs;
- (id)layerBatchAtIndex:(unsigned long long)a0;
- (unsigned long long)layerBatchsCount;

@end
