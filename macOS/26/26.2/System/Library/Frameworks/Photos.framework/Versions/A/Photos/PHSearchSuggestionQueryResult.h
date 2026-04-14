@class NSArray, PHSearchQuery;

@interface PHSearchSuggestionQueryResult : NSObject

@property (readonly, nonatomic) PHSearchQuery *searchQuery;
@property (readonly, nonatomic) NSArray *searchSuggestions;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)description;
- (id)initWithSearchQuery:(id)a0;
- (id)initWithSearchQuery:(id)a0 searchSuggestions:(id)a1;

@end
