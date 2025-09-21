@class NSData, NSMutableArray, NSString;

@interface ATXPBUIFeedbackPriorContext : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *cacheUpdateOrderings;
@property (retain, nonatomic) NSMutableArray *blendingModelCacheUpdates;
@property (retain, nonatomic) NSMutableArray *clientModelCacheUpdates;
@property (readonly, nonatomic) char hasContext;
@property (retain, nonatomic) NSData *context;
@property (readonly, nonatomic) char hasContextClassString;
@property (retain, nonatomic) NSString *contextClassString;
@property (readonly, nonatomic) char hasPinnedBlendingModelUICacheUpdateUUID;
@property (retain, nonatomic) NSString *pinnedBlendingModelUICacheUpdateUUID;

+ (Class)blendingModelCacheUpdatesType;
+ (Class)cacheUpdateOrderingType;
+ (Class)clientModelCacheUpdatesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)clientModelCacheUpdatesAtIndex:(unsigned long long)a0;
- (void)addBlendingModelCacheUpdates:(id)a0;
- (void)addCacheUpdateOrdering:(id)a0;
- (void)addClientModelCacheUpdates:(id)a0;
- (id)blendingModelCacheUpdatesAtIndex:(unsigned long long)a0;
- (unsigned long long)blendingModelCacheUpdatesCount;
- (id)cacheUpdateOrderingAtIndex:(unsigned long long)a0;
- (unsigned long long)cacheUpdateOrderingsCount;
- (void)clearBlendingModelCacheUpdates;
- (void)clearCacheUpdateOrderings;
- (void)clearClientModelCacheUpdates;
- (unsigned long long)clientModelCacheUpdatesCount;

@end
