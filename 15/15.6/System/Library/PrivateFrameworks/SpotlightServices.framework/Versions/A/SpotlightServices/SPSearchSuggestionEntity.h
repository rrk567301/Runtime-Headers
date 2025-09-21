@class NSString;

@interface SPSearchSuggestionEntity : SPSearchEntity {
    NSString *_spotlightQueryString;
}

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)queryString;
- (id)spotlightQueryString;
- (id)initWithSearchString:(id)a0 spotlightQueryString:(id)a1 preferredBundleIDs:(id)a2;

@end
