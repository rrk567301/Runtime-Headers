@class NSData, NSMutableArray, NSString;

@interface ATXPBUIFeedbackPriorContext : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *cacheUpdateOrderings;
@property (retain, nonatomic) NSMutableArray *blendingModelCacheUpdates;
@property (retain, nonatomic) NSMutableArray *clientModelCacheUpdates;
@property (readonly, nonatomic) BOOL hasContext;
@property (retain, nonatomic) NSData *context;
@property (readonly, nonatomic) BOOL hasContextClassString;
@property (retain, nonatomic) NSString *contextClassString;
@property (readonly, nonatomic) BOOL hasPinnedBlendingModelUICacheUpdateUUID;
@property (retain, nonatomic) NSString *pinnedBlendingModelUICacheUpdateUUID;

+ (Class)blendingModelCacheUpdatesType;
+ (Class)cacheUpdateOrderingType;
+ (Class)clientModelCacheUpdatesType;

- (void)addCacheUpdateOrdering:(id)a0;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)clearClientModelCacheUpdates;
- (void)clearBlendingModelCacheUpdates;
- (void)mergeFrom:(id)a0;
- (void)clearCacheUpdateOrderings;
- (unsigned long long)cacheUpdateOrderingsCount;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)cacheUpdateOrderingAtIndex:(unsigned long long)a0;
- (void)addBlendingModelCacheUpdates:(id)a0;
- (unsigned long long)clientModelCacheUpdatesCount;
- (id)clientModelCacheUpdatesAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)blendingModelCacheUpdatesCount;
- (id)blendingModelCacheUpdatesAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)addClientModelCacheUpdates:(id)a0;
- (void).cxx_destruct;

@end
