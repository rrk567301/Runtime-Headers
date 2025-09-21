@class NSMutableArray;

@interface CKDPRequestOperationHeaderZoneAndShareUsageInfo : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *zoneUsages;
@property (retain, nonatomic) NSMutableArray *shareUsages;

+ (Class)shareUsageType;
+ (Class)zoneUsageType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)clearZoneUsages;
- (unsigned long long)zoneUsagesCount;
- (void)addShareUsage:(id)a0;
- (void)addZoneUsage:(id)a0;
- (void)clearShareUsages;
- (id)shareUsageAtIndex:(unsigned long long)a0;
- (unsigned long long)shareUsagesCount;
- (id)zoneUsageAtIndex:(unsigned long long)a0;

@end
