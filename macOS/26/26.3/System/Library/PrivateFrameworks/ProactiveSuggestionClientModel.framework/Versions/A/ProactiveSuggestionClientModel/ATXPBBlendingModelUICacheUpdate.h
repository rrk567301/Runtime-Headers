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

- (id)dictionaryRepresentation;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
