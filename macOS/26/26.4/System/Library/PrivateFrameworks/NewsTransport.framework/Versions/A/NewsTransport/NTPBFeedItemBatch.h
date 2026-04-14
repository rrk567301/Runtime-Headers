@class NSMutableArray;

@interface NTPBFeedItemBatch : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *feedItems;

+ (Class)feedItemsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)dealloc;
- (void)addFeedItems:(id)a0;
- (void)clearFeedItems;
- (id)feedItemsAtIndex:(unsigned long long)a0;
- (unsigned long long)feedItemsCount;

@end
