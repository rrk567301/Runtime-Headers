@class NSMutableDictionary, NSMutableOrderedSet;

@interface ICSearchResultSection : NSObject

@property (retain, nonatomic) NSMutableOrderedSet *searchResults;
@property (retain, nonatomic) NSMutableDictionary *identifierToSearchResult;
@property (retain, nonatomic) NSMutableDictionary *hiddenSearchResults;
@property (retain, nonatomic) NSMutableDictionary *unhiddenSearchResults;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)identifiers;
- (void)addSearchResults:(id)a0;
- (id)hiddenIdentifiers;
- (char)removeSearchResultForIdentifier:(id)a0 forHiding:(char)a1;
- (void)resetToSearchResults:(id)a0;

@end
