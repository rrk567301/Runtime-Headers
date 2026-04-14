@class NSString, ATXPBHomeScreenCachedSuggestion, ATXPBSuggestionLayout, NSMutableArray, ATXPBSpotlightSuggestionLayout;

@interface ATXPBBlendingModelUICacheUpdate : PBCodable <NSCopying> {
    struct { unsigned char cacheCreationDate : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUuidString;
@property (retain, nonatomic) NSString *uuidString;
@property (readonly, nonatomic) BOOL hasConsumerSubTypeString;
@property (retain, nonatomic) NSString *consumerSubTypeString;
@property (retain, nonatomic) NSMutableArray *clientModelIds;
@property (retain, nonatomic) NSMutableArray *clientModelCacheUpdateUUIDStrings;
@property (readonly, nonatomic) BOOL hasHomeScreenCachedSuggestion;
@property (retain, nonatomic) ATXPBHomeScreenCachedSuggestion *homeScreenCachedSuggestion;
@property (readonly, nonatomic) BOOL hasSuggestionLayout;
@property (retain, nonatomic) ATXPBSuggestionLayout *suggestionLayout;
@property (nonatomic) BOOL hasCacheCreationDate;
@property (nonatomic) double cacheCreationDate;
@property (readonly, nonatomic) BOOL hasSpotlightSuggestionLayout;
@property (retain, nonatomic) ATXPBSpotlightSuggestionLayout *spotlightSuggestionLayout;

+ (Class)clientModelCacheUpdateUUIDStringsType;
+ (Class)clientModelIdsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addClientModelCacheUpdateUUIDStrings:(id)a0;
- (void)addClientModelIds:(id)a0;
- (void)clearClientModelCacheUpdateUUIDStrings;
- (void)clearClientModelIds;
- (id)clientModelCacheUpdateUUIDStringsAtIndex:(unsigned long long)a0;
- (unsigned long long)clientModelCacheUpdateUUIDStringsCount;
- (id)clientModelIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)clientModelIdsCount;

@end
