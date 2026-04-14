@class NSString;

@interface _NSGlobalTextFinder : _NSTextFinderImpl {
    NSString *_searchString;
    unsigned long long _matchType;
    unsigned long long _options;
}

- (void)setSearchString:(id)a0;
- (unsigned long long)retainCount;
- (id)autorelease;
- (id)retain;
- (BOOL)allowsWeakReference;
- (id)init;
- (long long)style;
- (BOOL)retainWeakReference;
- (void)deactivate;
- (id)searchString;
- (void)activate;
- (oneway void)release;
- (id)replacementString;
- (BOOL)_loadSearchStringFromPasteboard;
- (void)handleResult:(long long)a0 forAction:(long long)a1;
- (unsigned long long)searchOptions;
- (void)setSearchOptions:(unsigned long long)a0;
- (void)setSubstringMatchType:(long long)a0;
- (long long)substringMatchType;

@end
