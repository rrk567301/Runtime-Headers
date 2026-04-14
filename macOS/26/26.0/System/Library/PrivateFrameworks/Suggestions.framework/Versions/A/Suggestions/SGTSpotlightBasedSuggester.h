@class SGTSpotlightCollector;

@interface SGTSpotlightBasedSuggester : SGTSearchQuerySuggester {
    SGTSpotlightCollector *_collector;
}

+ (id)suggesterForFiles;
+ (id)suggesterForMails;

- (id)collector;
- (void).cxx_destruct;
- (id)initWithAttributeNames:(id)a0;
- (id)rankingQueriesForQuery:(id)a0;

@end
