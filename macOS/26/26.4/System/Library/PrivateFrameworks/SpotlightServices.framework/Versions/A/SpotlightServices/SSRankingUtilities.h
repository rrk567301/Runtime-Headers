@interface SSRankingUtilities : NSObject

+ (void)logStats:(id)a0 message:(id)a1 queryId:(unsigned long long)a2 query:(id)a3;
+ (void)logItems:(id)a0 message:(id)a1 queryId:(unsigned long long)a2 query:(id)a3;
+ (void)logItems:(id)a0 message:(id)a1 queryId:(unsigned long long)a2 query:(id)a3 isSearchToolClient:(BOOL)a4;
+ (void)logSections:(id)a0 message:(id)a1 queryId:(unsigned long long)a2 query:(id)a3;
+ (void)logSections:(id)a0 message:(id)a1 queryId:(unsigned long long)a2 query:(id)a3 isSearchToolClient:(BOOL)a4;
+ (void)logSpotlightPlusScoring:(id)a0 message:(id)a1 queryId:(unsigned long long)a2 query:(id)a3 topK:(unsigned long long)a4;
+ (void)logStats:(id)a0 message:(id)a1 queryId:(unsigned long long)a2 query:(id)a3 isSearchToolClient:(BOOL)a4;
+ (id)loadOptionalKeywordsDictionaryFromAssetPlistType:(long long)a0;
+ (BOOL)isEventSearchIntent:(int)a0;
+ (BOOL)isMailOrSearchIndexerBundle:(id)a0;
+ (BOOL)isMatchingQUIntent:(int)a0 bundleId:(id)a1;
+ (BOOL)isPhotoSearchIntent:(int)a0;
+ (id)jsonStringFromDictionary:(id)a0;
+ (id)jsonStringFromDictionary:(id)a0 isSearchToolClient:(BOOL)a1;
+ (id)jsonStringFromDictionary:(id)a0 prettyPrinted:(BOOL)a1;

@end
