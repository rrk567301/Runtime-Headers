@class NSString, ATXPBHomeScreenCachedSuggestion, ATXPBSuggestionLayout, NSMutableArray, ATXPBSpotlightSuggestionLayout;

@interface ATXPBBlendingModelUICacheUpdate : PBCodable <NSCopying> {
    double _cacheCreationDate;
    NSMutableArray *_clientModelCacheUpdateUUIDStrings;
    NSMutableArray *_clientModelIds;
    NSString *_consumerSubTypeString;
    ATXPBHomeScreenCachedSuggestion *_homeScreenCachedSuggestion;
    ATXPBSpotlightSuggestionLayout *_spotlightSuggestionLayout;
    ATXPBSuggestionLayout *_suggestionLayout;
    NSString *_uuidString;
    struct { unsigned char cacheCreationDate : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
