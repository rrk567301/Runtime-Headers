@class NTPBDate, NSMutableArray;

@interface NTPBFeedItemInventory : PBCodable <NSCopying> {
    struct { unsigned char feedItemVersion : 1; unsigned char inventoryVersion : 1; } _has;
}

@property (nonatomic) char hasInventoryVersion;
@property (nonatomic) unsigned int inventoryVersion;
@property (nonatomic) char hasFeedItemVersion;
@property (nonatomic) unsigned int feedItemVersion;
@property (readonly, nonatomic) char hasLastRefreshed;
@property (retain, nonatomic) NTPBDate *lastRefreshed;
@property (retain, nonatomic) NSMutableArray *feedItems;

+ (Class)feedItemsType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addFeedItems:(id)a0;
- (void)clearFeedItems;
- (id)feedItemsAtIndex:(unsigned long long)a0;
- (unsigned long long)feedItemsCount;

@end
