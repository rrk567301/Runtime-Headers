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

- (void)writeTo:(id)a0;
- (id)cacheUpdateOrderingAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)clearBlendingModelCacheUpdates;
- (BOOL)isEqual:(id)a0;
- (void)clearClientModelCacheUpdates;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (void)addBlendingModelCacheUpdates:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)blendingModelCacheUpdatesAtIndex:(unsigned long long)a0;
- (void)clearCacheUpdateOrderings;
- (unsigned long long)clientModelCacheUpdatesCount;
- (id)description;
- (unsigned long long)blendingModelCacheUpdatesCount;
- (void)mergeFrom:(id)a0;
- (id)clientModelCacheUpdatesAtIndex:(unsigned long long)a0;
- (void)addClientModelCacheUpdates:(id)a0;
- (id)dictionaryRepresentation;
- (void)addCacheUpdateOrdering:(id)a0;
- (unsigned long long)cacheUpdateOrderingsCount;

@end
