@class SGTCoreSpotlightCollector;

@interface SGTCoreSpotlightBasedSuggester : SGTSearchQuerySuggester {
    SGTCoreSpotlightCollector *_collector;
}

+ (id)suggesterForMails;
+ (id)suggesterForFiles;

- (void).cxx_destruct;
- (id)collector;
- (id)rankingQueriesForQuery:(id)a0;

@end
