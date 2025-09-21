@class NSString;

@interface _NSGlobalTextFinder : _NSTextFinderImpl {
    NSString *_searchString;
    unsigned long long _matchType;
    unsigned long long _options;
}

- (id)autorelease;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (id)retain;
- (id)init;
- (unsigned long long)retainCount;
- (void)setSearchString:(id)a0;
- (oneway void)release;
- (long long)style;
- (void)deactivate;
- (void)activate;
- (id)searchString;
- (id)replacementString;
- (BOOL)_loadSearchStringFromPasteboard;
- (void)handleResult:(long long)a0 forAction:(long long)a1;
- (unsigned long long)searchOptions;
- (void)setSearchOptions:(unsigned long long)a0;
- (void)setSubstringMatchType:(long long)a0;
- (long long)substringMatchType;

@end
