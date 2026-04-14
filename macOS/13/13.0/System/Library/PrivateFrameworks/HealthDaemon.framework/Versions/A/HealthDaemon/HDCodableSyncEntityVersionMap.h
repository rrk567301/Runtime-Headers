@class NSMutableArray;

@interface HDCodableSyncEntityVersionMap : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *entityVersionRanges;

+ (Class)entityVersionRangeType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearEntityVersionRanges;
- (void)addEntityVersionRange:(id)a0;
- (unsigned long long)entityVersionRangesCount;
- (id)entityVersionRangeAtIndex:(unsigned long long)a0;

@end
