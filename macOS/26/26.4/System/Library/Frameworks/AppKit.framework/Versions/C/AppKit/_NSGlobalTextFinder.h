@class NSString;

@interface _NSGlobalTextFinder : _NSTextFinderImpl {
    NSString *_searchString;
    unsigned long long _matchType;
    unsigned long long _options;
}

- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (id)searchString;
- (id)autorelease;
- (void)setSearchString:(id)a0;
- (void)activate;
- (long long)style;
- (void)deactivate;
- (id)retain;
- (id)init;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)replacementString;
- (BOOL)_loadSearchStringFromPasteboard;
- (void)handleResult:(long long)a0 forAction:(long long)a1;
- (unsigned long long)searchOptions;
- (void)setSearchOptions:(unsigned long long)a0;
- (void)setSubstringMatchType:(long long)a0;
- (long long)substringMatchType;

@end
