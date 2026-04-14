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

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
