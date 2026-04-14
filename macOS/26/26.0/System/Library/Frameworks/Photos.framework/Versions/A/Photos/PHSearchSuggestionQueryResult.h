@class NSArray, PHSearchQuery;

@interface PHSearchSuggestionQueryResult : NSObject

@property (readonly, nonatomic) PHSearchQuery *searchQuery;
@property (readonly, nonatomic) NSArray *searchSuggestions;

- (id)jsonDictionary;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSearchQuery:(id)a0;
- (id)initWithSearchQuery:(id)a0 searchSuggestions:(id)a1;

@end
