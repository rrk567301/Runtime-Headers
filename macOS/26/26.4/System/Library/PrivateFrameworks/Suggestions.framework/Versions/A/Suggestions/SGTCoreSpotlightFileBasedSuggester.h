@class SGTCoreSpotlightFileCollector;

@interface SGTCoreSpotlightFileBasedSuggester : SGTSearchQuerySuggester {
    SGTCoreSpotlightFileCollector *_collector;
}

+ (id)suggesterForFiles;

- (id)collector;
- (void).cxx_destruct;
- (id)rankingQueriesForQuery:(id)a0;

@end
