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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)addClientModelCacheUpdates:(id)a0;
- (unsigned long long)cacheUpdateOrderingsCount;
- (id)cacheUpdateOrderingAtIndex:(unsigned long long)a0;
- (id)clientModelCacheUpdatesAtIndex:(unsigned long long)a0;
- (void)clearBlendingModelCacheUpdates;
- (void)addBlendingModelCacheUpdates:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)blendingModelCacheUpdatesAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)blendingModelCacheUpdatesCount;
- (void)mergeFrom:(id)a0;
- (void)addCacheUpdateOrdering:(id)a0;
- (void)clearClientModelCacheUpdates;
- (id)description;
- (void)writeTo:(id)a0;
- (void)clearCacheUpdateOrderings;
- (unsigned long long)clientModelCacheUpdatesCount;

@end
