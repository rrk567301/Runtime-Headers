@class NSMutableArray;

@interface NTPBRestorePaidSubscription : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *restoredPaidSubscriptionChannelIds;
@property (retain, nonatomic) NSMutableArray *items;

+ (Class)itemsType;
+ (Class)restoredPaidSubscriptionChannelIdsType;

- (void)clearItems;
- (unsigned long long)itemsCount;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)itemsAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (void)addItems:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)addRestoredPaidSubscriptionChannelIds:(id)a0;
- (void)clearRestoredPaidSubscriptionChannelIds;
- (id)restoredPaidSubscriptionChannelIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)restoredPaidSubscriptionChannelIdsCount;

@end
