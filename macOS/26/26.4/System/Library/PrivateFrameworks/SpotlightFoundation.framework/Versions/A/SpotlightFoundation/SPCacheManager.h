@class PARSession;

@interface SPCacheManager : NSObject {
    PARSession *_session;
}

@property (class, readonly) SPCacheManager *defaultManager;

+ (id)defaults;
+ (id)defaultValueWithKey:(id)a0;
+ (void)removeDefaults;
+ (long long)version;
+ (id)defaultProperties;
+ (void)setDefaultWithKey:(id)a0 value:(id)a1;
+ (void)setVersionWithValue:(long long)a0;
+ (void)removeKey:(id)a0;
+ (id)identifier;

- (void)deleteContact:(id)a0 contactIdentifier:(id)a1 score:(id)a2;
- (id)recentResultsWithOptions:(id)a0 rankAndDeduplicate:(id /* block */)a1;
- (id)_createRecentsFromEngagedResults:(id)a0 maxCount:(unsigned long long)a1;
- (void)deleteSuggestion:(id)a0 type:(int)a1 score:(id)a2;
- (void)deleteAllResults;
- (void)cacheSuggestion:(id)a0 type:(int)a1 score:(id)a2 searchString:(id)a3;
- (void)enumerateRecentCompletionsWithSearchString:(id)a0 usingBlock:(id /* block */)a1;
- (void)deleteLocalResult:(id)a0 identifier:(id)a1 bundleIdentifier:(id)a2 protectionClass:(id)a3;
- (void).cxx_destruct;
- (void)updateRecentsWithBundleIdentifiers:(id)a0;
- (void)cacheContact:(id)a0 contactIdentifier:(id)a1 score:(id)a2 searchString:(id)a3;
- (void)deletePerson:(id)a0 personQueryIdentifier:(id)a1 score:(id)a2;
- (id)init;
- (void)cachePerson:(id)a0 personQueryIdentifier:(id)a1 score:(id)a2 searchString:(id)a3;
- (id)recentResultsWithOptions:(id)a0;
- (void)enumerateRecentResultsUsingBlock:(id /* block */)a0;
- (void)cacheResult:(id)a0 title:(id)a1 searchString:(id)a2;
- (void)cacheLocalResult:(id)a0 identifier:(id)a1 bundleIdentifier:(id)a2 protectionClass:(id)a3 searchString:(id)a4;
- (void)deleteResult:(id)a0 title:(id)a1;

@end
