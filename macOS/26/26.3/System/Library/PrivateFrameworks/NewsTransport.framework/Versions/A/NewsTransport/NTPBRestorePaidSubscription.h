@class NSMutableArray;

@interface NTPBRestorePaidSubscription : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *restoredPaidSubscriptionChannelIds;
@property (retain, nonatomic) NSMutableArray *items;

+ (Class)itemsType;
+ (Class)restoredPaidSubscriptionChannelIdsType;

- (id)dictionaryRepresentation;
- (void)clearItems;
- (id)itemsAtIndex:(unsigned long long)a0;
- (unsigned long long)itemsCount;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addItems:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addRestoredPaidSubscriptionChannelIds:(id)a0;
- (void)clearRestoredPaidSubscriptionChannelIds;
- (id)restoredPaidSubscriptionChannelIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)restoredPaidSubscriptionChannelIdsCount;

@end
