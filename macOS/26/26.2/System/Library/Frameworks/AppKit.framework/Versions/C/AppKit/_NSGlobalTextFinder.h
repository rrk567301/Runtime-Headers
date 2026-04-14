@class NSString;

@interface _NSGlobalTextFinder : _NSTextFinderImpl {
    NSString *_searchString;
    unsigned long long _matchType;
    unsigned long long _options;
}

- (void)setSearchString:(id)a0;
- (id)searchString;
- (id)retain;
- (unsigned long long)retainCount;
- (id)autorelease;
- (long long)style;
- (void)activate;
- (BOOL)allowsWeakReference;
- (oneway void)release;
- (id)init;
- (void)deactivate;
- (BOOL)retainWeakReference;
- (id)replacementString;
- (BOOL)_loadSearchStringFromPasteboard;
- (void)handleResult:(long long)a0 forAction:(long long)a1;
- (unsigned long long)searchOptions;
- (void)setSearchOptions:(unsigned long long)a0;
- (void)setSubstringMatchType:(long long)a0;
- (long long)substringMatchType;

@end
