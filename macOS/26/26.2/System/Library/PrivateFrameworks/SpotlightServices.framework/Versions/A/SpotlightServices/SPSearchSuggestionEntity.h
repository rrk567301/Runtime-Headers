@class NSString;

@interface SPSearchSuggestionEntity : SPSearchEntity {
    NSString *_spotlightQueryString;
}

+ (BOOL)supportsSecureCoding;

- (id)queryString;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)spotlightQueryString;
- (id)initWithSearchString:(id)a0 spotlightQueryString:(id)a1 preferredBundleIDs:(id)a2;

@end
