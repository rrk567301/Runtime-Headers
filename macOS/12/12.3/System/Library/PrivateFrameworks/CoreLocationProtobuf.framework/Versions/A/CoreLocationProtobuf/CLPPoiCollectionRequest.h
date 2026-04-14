@class CLPMeta, NSMutableArray;

@interface CLPPoiCollectionRequest : PBRequest <NSCopying>

@property (retain, nonatomic) CLPMeta *meta;
@property (retain, nonatomic) NSMutableArray *harvests;

+ (Class)harvestsType;

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
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)addHarvests:(id)a0;
- (unsigned long long)harvestsCount;
- (void)clearHarvests;
- (id)harvestsAtIndex:(unsigned long long)a0;

@end
