@class NSString;

@interface SPSearchAppEntity : SPSearchEntity {
    NSString *_tokenText;
    NSString *_queryString;
}

@property (readonly) NSString *bundleIdentifier;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)updateSearchString:(id)a0;
- (id)tokenText;
- (id)queryString;
- (id)spotlightQueryString;
- (BOOL)isScopedSearch;
- (BOOL)isAppEntitySearch;
- (void)appendToQuery:(id)a0 key:(id)a1 value:(id)a2 additions:(id)a3 flags:(id)a4;
- (id)initWithBundleIdentifier:(id)a0 appName:(id)a1 fromSuggestion:(BOOL)a2;

@end
