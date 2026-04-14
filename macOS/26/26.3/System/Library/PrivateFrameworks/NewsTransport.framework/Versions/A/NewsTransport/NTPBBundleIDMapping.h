@class NSMutableArray;

@interface NTPBBundleIDMapping : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *bundleIds;

+ (Class)bundleIdsType;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)bundleIdsCount;
- (void)clearBundleIds;
- (void)addBundleIds:(id)a0;
- (id)bundleIdsAtIndex:(unsigned long long)a0;

@end
