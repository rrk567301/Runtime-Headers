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

+ (Class)cacheUpdateOrderingType;
+ (Class)blendingModelCacheUpdatesType;
+ (Class)clientModelCacheUpdatesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)cacheUpdateOrderingsCount;
- (unsigned long long)blendingModelCacheUpdatesCount;
- (unsigned long long)clientModelCacheUpdatesCount;
- (void)addCacheUpdateOrdering:(id)a0;
- (void)addBlendingModelCacheUpdates:(id)a0;
- (void)addClientModelCacheUpdates:(id)a0;
- (void)clearCacheUpdateOrderings;
- (id)cacheUpdateOrderingAtIndex:(unsigned long long)a0;
- (void)clearBlendingModelCacheUpdates;
- (id)blendingModelCacheUpdatesAtIndex:(unsigned long long)a0;
- (void)clearClientModelCacheUpdates;
- (id)clientModelCacheUpdatesAtIndex:(unsigned long long)a0;

@end
