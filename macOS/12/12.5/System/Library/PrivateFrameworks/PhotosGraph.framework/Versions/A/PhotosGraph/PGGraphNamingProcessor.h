@class PGGraphMomentNodeCollection, NSArray, NSMutableDictionary, PGGraph, PGManager, NSMutableArray, PGGraphPersonNodeCollection;

@interface PGGraphNamingProcessor : NSObject {
    PGManager *_manager;
}

@property (readonly, nonatomic) unsigned long long runOptions;
@property (retain, nonatomic) NSMutableArray *analyzersToRun;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *personNodesToName;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;
@property (readonly, nonatomic) PGGraph *graph;
@property (readonly, nonatomic) unsigned long long numberOfSignals;
@property (retain, nonatomic) NSArray *sortedPoolOfContactIdentifiers;
@property (retain, nonatomic) NSMutableDictionary *contactMatchesByPersonLocalIdentifier;
@property (retain, nonatomic) NSMutableDictionary *selectedContactMatchesByPersonLocalIdentifier;
@property (retain, nonatomic) NSMutableDictionary *filteredOutContactMatchesByPersonLocalIdentifier;

- (void).cxx_destruct;
- (id)personNodesToNameFromPersonNodes:(id)a0;
- (id)matchPropertiesBetweenContactIdentifier:(id)a0 andPersonLocalIdentifier:(id)a1;
- (id)_extractSortedPoolOfContactIdentifiers;
- (void)_extractSignalsFromRunOptions;
- (id)initWithPersonNodes:(id)a0 runOptions:(unsigned long long)a1 manager:(id)a2;
- (void)filterContactMatches;
- (id)_personMatchScoresByContactIdentifierFromMatchProperties:(id)a0;
- (id)_applyMessageFrequencyPenaltyToMatchScores:(id)a0;
- (void)_removeSuggestionOfContact:(id)a0 forPerson:(id)a1;
- (id)_swapPersonAndContactIdentifiersFromMatchesByContactIdentifier:(id)a0;
- (void)_limitNumberOfContactSuggestionsPerPerson;
- (id)initWithPersonNodes:(id)a0 runOptions:(unsigned long long)a1;
- (void)runNamingAnalysisWithProgressBlock:(id /* block */)a0;
- (void)enumerateContactSuggestionsForPersonNode:(id)a0 usingBlock:(id /* block */)a1;

@end
