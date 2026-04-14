@class NSString, NTPBDate, NSMutableArray;

@interface FCPBFeedItemInventory : PBCodable <NSCopying> {
    struct { unsigned char feedItemVersion : 1; unsigned char inventoryVersion : 1; unsigned char scoringVersion : 1; } _has;
}

@property (nonatomic) unsigned int inventoryVersion;
@property (nonatomic) unsigned int feedItemVersion;
@property (nonatomic) unsigned long long scoringVersion;
@property (retain, nonatomic) NSString *tabiVersion;
@property (retain, nonatomic) NTPBDate *lastRefreshed;
@property (retain, nonatomic) NSMutableArray *feedItems;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)dealloc;
- (void)addFeedItems:(id)a0;

@end
