@class NSString, NSMutableArray;

@interface ATXPBHomeScreenCachedSuggestion : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUuidString;
@property (retain, nonatomic) NSString *uuidString;
@property (retain, nonatomic) NSMutableArray *cachedSuggestionWidgetIds;
@property (retain, nonatomic) NSMutableArray *cachedSuggestionWidgetLayouts;
@property (retain, nonatomic) NSMutableArray *cachedTopOfStackLayoutKeys;
@property (retain, nonatomic) NSMutableArray *cachedTopOfStackLayouts;
@property (retain, nonatomic) NSMutableArray *fallbackSuggestions;
@property (retain, nonatomic) NSMutableArray *cachedAppPredictionPanelIds;
@property (retain, nonatomic) NSMutableArray *cachedAppPredictionPanelLayouts;
@property (retain, nonatomic) NSMutableArray *cachedSuggestedWidgetLayoutListKeys;
@property (retain, nonatomic) NSMutableArray *cachedSuggestedWidgetLayoutLists;

+ (Class)cachedSuggestionWidgetIdsType;
+ (Class)cachedSuggestionWidgetLayoutsType;
+ (Class)cachedTopOfStackLayoutKeysType;
+ (Class)cachedTopOfStackLayoutsType;
+ (Class)fallbackSuggestionsType;
+ (Class)cachedAppPredictionPanelIdsType;
+ (Class)cachedAppPredictionPanelLayoutsType;
+ (Class)cachedSuggestedWidgetLayoutListKeysType;
+ (Class)cachedSuggestedWidgetLayoutListsType;

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
- (void)clearCachedSuggestionWidgetIds;
- (void)addCachedSuggestionWidgetIds:(id)a0;
- (unsigned long long)cachedSuggestionWidgetIdsCount;
- (id)cachedSuggestionWidgetIdsAtIndex:(unsigned long long)a0;
- (void)clearCachedSuggestionWidgetLayouts;
- (void)addCachedSuggestionWidgetLayouts:(id)a0;
- (unsigned long long)cachedSuggestionWidgetLayoutsCount;
- (id)cachedSuggestionWidgetLayoutsAtIndex:(unsigned long long)a0;
- (void)clearCachedTopOfStackLayoutKeys;
- (void)addCachedTopOfStackLayoutKeys:(id)a0;
- (unsigned long long)cachedTopOfStackLayoutKeysCount;
- (id)cachedTopOfStackLayoutKeysAtIndex:(unsigned long long)a0;
- (void)clearCachedTopOfStackLayouts;
- (void)addCachedTopOfStackLayouts:(id)a0;
- (unsigned long long)cachedTopOfStackLayoutsCount;
- (id)cachedTopOfStackLayoutsAtIndex:(unsigned long long)a0;
- (void)clearFallbackSuggestions;
- (void)addFallbackSuggestions:(id)a0;
- (unsigned long long)fallbackSuggestionsCount;
- (id)fallbackSuggestionsAtIndex:(unsigned long long)a0;
- (void)clearCachedAppPredictionPanelIds;
- (void)addCachedAppPredictionPanelIds:(id)a0;
- (unsigned long long)cachedAppPredictionPanelIdsCount;
- (id)cachedAppPredictionPanelIdsAtIndex:(unsigned long long)a0;
- (void)clearCachedAppPredictionPanelLayouts;
- (void)addCachedAppPredictionPanelLayouts:(id)a0;
- (unsigned long long)cachedAppPredictionPanelLayoutsCount;
- (id)cachedAppPredictionPanelLayoutsAtIndex:(unsigned long long)a0;
- (void)clearCachedSuggestedWidgetLayoutListKeys;
- (void)addCachedSuggestedWidgetLayoutListKeys:(id)a0;
- (unsigned long long)cachedSuggestedWidgetLayoutListKeysCount;
- (id)cachedSuggestedWidgetLayoutListKeysAtIndex:(unsigned long long)a0;
- (void)clearCachedSuggestedWidgetLayoutLists;
- (void)addCachedSuggestedWidgetLayoutLists:(id)a0;
- (unsigned long long)cachedSuggestedWidgetLayoutListsCount;
- (id)cachedSuggestedWidgetLayoutListsAtIndex:(unsigned long long)a0;

@end
