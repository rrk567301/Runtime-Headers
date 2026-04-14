@class CLPMeta, NSMutableArray;

@interface CLPPoiCollectionRequest : PBRequest <NSCopying>

@property (retain, nonatomic) CLPMeta *meta;
@property (retain, nonatomic) NSMutableArray *harvests;

+ (Class)harvestsType;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (Class)responseClass;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned int)requestTypeCode;
- (void)addHarvests:(id)a0;
- (void)clearHarvests;
- (id)harvestsAtIndex:(unsigned long long)a0;
- (unsigned long long)harvestsCount;

@end
