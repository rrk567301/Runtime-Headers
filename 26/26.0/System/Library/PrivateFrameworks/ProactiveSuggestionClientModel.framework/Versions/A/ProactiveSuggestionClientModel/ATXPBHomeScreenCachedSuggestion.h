@class NSString, NSMutableArray;

@interface ATXPBHomeScreenCachedSuggestion : PBCodable <NSCopying> {
    NSMutableArray *_cachedAppPredictionPanelIds;
    NSMutableArray *_cachedAppPredictionPanelLayouts;
    NSMutableArray *_cachedSuggestedWidgetLayoutListKeys;
    NSMutableArray *_cachedSuggestedWidgetLayoutLists;
    NSMutableArray *_cachedSuggestionWidgetIds;
    NSMutableArray *_cachedSuggestionWidgetLayouts;
    NSMutableArray *_cachedTopOfStackLayoutKeys;
    NSMutableArray *_cachedTopOfStackLayouts;
    NSMutableArray *_fallbackSuggestions;
    NSString *_uuidString;
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
