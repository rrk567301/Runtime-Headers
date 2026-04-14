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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)addCachedSuggestionWidgetIds:(id)a0;
- (void)addCachedSuggestionWidgetLayouts:(id)a0;
- (void)addCachedTopOfStackLayoutKeys:(id)a0;
- (void)addCachedTopOfStackLayouts:(id)a0;
- (void)addFallbackSuggestions:(id)a0;
- (void)addCachedAppPredictionPanelIds:(id)a0;
- (void)addCachedAppPredictionPanelLayouts:(id)a0;
- (void)addCachedSuggestedWidgetLayoutListKeys:(id)a0;
- (void)addCachedSuggestedWidgetLayoutLists:(id)a0;
- (unsigned long long)cachedSuggestionWidgetIdsCount;
- (void)clearCachedSuggestionWidgetIds;
- (id)cachedSuggestionWidgetIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)cachedSuggestionWidgetLayoutsCount;
- (void)clearCachedSuggestionWidgetLayouts;
- (id)cachedSuggestionWidgetLayoutsAtIndex:(unsigned long long)a0;
- (unsigned long long)cachedTopOfStackLayoutKeysCount;
- (void)clearCachedTopOfStackLayoutKeys;
- (id)cachedTopOfStackLayoutKeysAtIndex:(unsigned long long)a0;
- (unsigned long long)cachedTopOfStackLayoutsCount;
- (void)clearCachedTopOfStackLayouts;
- (id)cachedTopOfStackLayoutsAtIndex:(unsigned long long)a0;
- (unsigned long long)fallbackSuggestionsCount;
- (void)clearFallbackSuggestions;
- (id)fallbackSuggestionsAtIndex:(unsigned long long)a0;
- (unsigned long long)cachedAppPredictionPanelIdsCount;
- (void)clearCachedAppPredictionPanelIds;
- (id)cachedAppPredictionPanelIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)cachedAppPredictionPanelLayoutsCount;
- (void)clearCachedAppPredictionPanelLayouts;
- (id)cachedAppPredictionPanelLayoutsAtIndex:(unsigned long long)a0;
- (unsigned long long)cachedSuggestedWidgetLayoutListKeysCount;
- (void)clearCachedSuggestedWidgetLayoutListKeys;
- (id)cachedSuggestedWidgetLayoutListKeysAtIndex:(unsigned long long)a0;
- (unsigned long long)cachedSuggestedWidgetLayoutListsCount;
- (void)clearCachedSuggestedWidgetLayoutLists;
- (id)cachedSuggestedWidgetLayoutListsAtIndex:(unsigned long long)a0;

@end
