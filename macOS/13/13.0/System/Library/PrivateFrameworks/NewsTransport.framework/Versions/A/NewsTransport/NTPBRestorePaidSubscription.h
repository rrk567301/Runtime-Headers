@class NSMutableArray;

@interface NTPBRestorePaidSubscription : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *restoredPaidSubscriptionChannelIds;
@property (retain, nonatomic) NSMutableArray *items;

+ (Class)itemsType;
+ (Class)restoredPaidSubscriptionChannelIdsType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)addItems:(id)a0;
- (unsigned long long)itemsCount;
- (void)clearItems;
- (id)itemsAtIndex:(unsigned long long)a0;
- (void)clearRestoredPaidSubscriptionChannelIds;
- (void)addRestoredPaidSubscriptionChannelIds:(id)a0;
- (unsigned long long)restoredPaidSubscriptionChannelIdsCount;
- (id)restoredPaidSubscriptionChannelIdsAtIndex:(unsigned long long)a0;

@end
