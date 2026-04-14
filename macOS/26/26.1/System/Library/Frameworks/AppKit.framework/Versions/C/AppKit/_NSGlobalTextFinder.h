@class NSString;

@interface _NSGlobalTextFinder : _NSTextFinderImpl {
    NSString *_searchString;
    unsigned long long _matchType;
    unsigned long long _options;
}

- (id)retain;
- (oneway void)release;
- (void)deactivate;
- (unsigned long long)retainCount;
- (void)activate;
- (long long)style;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (id)searchString;
- (void)setSearchString:(id)a0;
- (id)autorelease;
- (id)init;
- (id)replacementString;
- (BOOL)_loadSearchStringFromPasteboard;
- (void)handleResult:(long long)a0 forAction:(long long)a1;
- (unsigned long long)searchOptions;
- (void)setSearchOptions:(unsigned long long)a0;
- (void)setSubstringMatchType:(long long)a0;
- (long long)substringMatchType;

@end
