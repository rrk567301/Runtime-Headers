@class NSString;

@interface _NSGlobalTextFinder : _NSTextFinderImpl {
    NSString *_searchString;
    unsigned long long _matchType;
    unsigned long long _options;
}

- (oneway void)release;
- (char)allowsWeakReference;
- (id)autorelease;
- (id)init;
- (id)retain;
- (unsigned long long)retainCount;
- (char)retainWeakReference;
- (void)activate;
- (long long)style;
- (id)replacementString;
- (char)_loadSearchStringFromPasteboard;
- (void)deactivate;
- (void)handleResult:(long long)a0 forAction:(long long)a1;
- (unsigned long long)searchOptions;
- (id)searchString;
- (void)setSearchOptions:(unsigned long long)a0;
- (void)setSearchString:(id)a0;
- (void)setSubstringMatchType:(long long)a0;
- (long long)substringMatchType;

@end
