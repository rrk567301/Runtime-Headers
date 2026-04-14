@interface ATXDocumentPredictionManager : NSObject

+ (id)disabledUTTypes;
+ (id)contextualPredictionsCachePathForConsumerSubtype:(unsigned char)a0;

- (BOOL)_canSuggestDocumentURL:(id)a0 types:(id)a1 disabledTypes:(id)a2;
- (id)_getCachedItemFromCachePath:(id)a0;
- (id)contextualDocumentSuggestions;
- (id)documentSuggestionWithLimit:(unsigned long long)a0 documentScope:(id)a1;
- (id)semanticallySimilarDocumentsForCurrentAppInFocus;

@end
