@class NSString;

@interface _NSGlobalTextFinder : _NSTextFinderImpl {
    NSString *_searchString;
    unsigned long long _matchType;
    unsigned long long _options;
}

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)autorelease;
- (id)init;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (long long)style;
- (id)replacementString;
- (void)activate;
- (void)deactivate;
- (BOOL)_loadSearchStringFromPasteboard;
- (void)setSearchOptions:(unsigned long long)a0;
- (void)setSubstringMatchType:(long long)a0;
- (unsigned long long)searchOptions;
- (id)searchString;
- (void)setSearchString:(id)a0;
- (long long)substringMatchType;
- (void)handleResult:(long long)a0 forAction:(long long)a1;

@end
