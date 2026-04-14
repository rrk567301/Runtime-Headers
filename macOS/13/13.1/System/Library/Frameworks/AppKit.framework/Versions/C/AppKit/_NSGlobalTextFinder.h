@class NSString;

@interface _NSGlobalTextFinder : _NSTextFinderImpl {
    NSString *_searchString;
    unsigned long long _matchType;
    unsigned long long _options;
}

- (id)retain;
- (oneway void)release;
- (id)autorelease;
- (unsigned long long)retainCount;
- (BOOL)allowsWeakReference;
- (BOOL)retainWeakReference;
- (id)init;
- (long long)style;
- (id)replacementString;
- (void)activate;
- (void)deactivate;
- (BOOL)_loadSearchStringFromPasteboard;
- (id)searchString;
- (void)setSearchString:(id)a0;
- (unsigned long long)searchOptions;
- (long long)substringMatchType;
- (void)setSearchOptions:(unsigned long long)a0;
- (void)setSubstringMatchType:(long long)a0;
- (void)handleResult:(long long)a0 forAction:(long long)a1;

@end
