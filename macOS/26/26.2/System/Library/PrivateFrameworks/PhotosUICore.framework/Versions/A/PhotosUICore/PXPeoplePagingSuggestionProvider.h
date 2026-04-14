@class NSArray, NSMutableArray;

@interface PXPeoplePagingSuggestionProvider : NSObject

@property (copy, nonatomic) NSArray *currentSuggestions;
@property (retain, nonatomic) NSMutableArray *unvisitedSuggestions;
@property (retain, nonatomic) NSMutableArray *visitedSuggestions;

- (void).cxx_destruct;
- (id)init;
- (void)removeAllSuggestions;
- (void)appendSuggestionArray:(id)a0;
- (BOOL)hasNextSuggestions;
- (BOOL)hasPreviousSuggestions;
- (id)nextSuggestionsWithPageLimit:(long long)a0;
- (id)previousSuggestions;
- (void)removeSuggestions:(id)a0;

@end
