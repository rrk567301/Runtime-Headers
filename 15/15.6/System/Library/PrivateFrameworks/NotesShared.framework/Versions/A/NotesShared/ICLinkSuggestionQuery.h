@class NSString;

@interface ICLinkSuggestionQuery : ICSearchQuery

@property (copy, nonatomic) NSString *queryString;
@property (nonatomic) char includeNotes;
@property (nonatomic) char includeWebsites;

- (void).cxx_destruct;
- (id)attributesToFetch;
- (id)initWithQueryString:(id)a0;
- (id)initWithQueryString:(id)a0 includeNotes:(char)a1 includeWebsites:(char)a2;
- (id)newSearchQueryContext;
- (id)newSearchQueryWithContext:(id)a0;

@end
