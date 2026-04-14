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
- (void)clearCacheUpdateOrderings;
- (void)addCacheUpdateOrdering:(id)a0;
- (unsigned long long)cacheUpdateOrderingsCount;
- (id)cacheUpdateOrderingAtIndex:(unsigned long long)a0;
- (void)clearBlendingModelCacheUpdates;
- (void)addBlendingModelCacheUpdates:(id)a0;
- (unsigned long long)blendingModelCacheUpdatesCount;
- (id)blendingModelCacheUpdatesAtIndex:(unsigned long long)a0;
- (void)clearClientModelCacheUpdates;
- (void)addClientModelCacheUpdates:(id)a0;
- (unsigned long long)clientModelCacheUpdatesCount;
- (id)clientModelCacheUpdatesAtIndex:(unsigned long long)a0;

@end
