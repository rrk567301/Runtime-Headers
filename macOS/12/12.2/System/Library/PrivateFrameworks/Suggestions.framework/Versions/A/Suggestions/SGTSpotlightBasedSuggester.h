@class SGTSpotlightCollector;

@interface SGTSpotlightBasedSuggester : SGTSearchQuerySuggester {
    SGTSpotlightCollector *_collector;
}

+ (id)suggesterForMails;
+ (id)suggesterForFiles;

- (void).cxx_destruct;
- (id)initWithAttributeNames:(id)a0;
- (id)collector;
- (id)rankingQueriesForQuery:(id)a0;

@end
