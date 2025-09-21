@class SGTCoreSpotlightCollector;

@interface SGTCoreSpotlightBasedSuggester : SGTSearchQuerySuggester {
    SGTCoreSpotlightCollector *_collector;
}

+ (id)suggesterForFiles;
+ (id)suggesterForMails;

- (id)collector;
- (void).cxx_destruct;
- (id)rankingQueriesForQuery:(id)a0;

@end
