@class NSMutableArray;

@interface HDCodableSyncAnchorRangeMap : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *anchorRanges;

+ (Class)anchorRangesType;

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
- (void)clearAnchorRanges;
- (void)addAnchorRanges:(id)a0;
- (unsigned long long)anchorRangesCount;
- (id)anchorRangesAtIndex:(unsigned long long)a0;

@end
