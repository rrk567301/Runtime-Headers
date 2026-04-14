@class SGTSpotlightCollector;

@interface SGTSpotlightBasedSuggester : SGTSearchQuerySuggester {
    SGTSpotlightCollector *_collector;
}

+ (id)suggesterForFiles;
+ (id)suggesterForMails;

- (void).cxx_destruct;
- (id)collector;
- (id)rankingQueriesForQuery:(id)a0;
- (id)initWithAttributeNames:(id)a0;

@end
