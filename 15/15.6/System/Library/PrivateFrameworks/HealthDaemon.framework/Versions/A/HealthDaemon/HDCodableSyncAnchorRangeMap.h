@class NSMutableArray;

@interface HDCodableSyncAnchorRangeMap : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *anchorRanges;

+ (Class)anchorRangesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addAnchorRanges:(id)a0;
- (id)anchorRangesAtIndex:(unsigned long long)a0;
- (unsigned long long)anchorRangesCount;
- (void)clearAnchorRanges;

@end
