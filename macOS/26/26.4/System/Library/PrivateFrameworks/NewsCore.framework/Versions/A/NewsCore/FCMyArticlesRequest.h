@class NSArray, NSDictionary;

@interface FCMyArticlesRequest : NSObject {
    void /* unknown type, empty encoding */ dateRange;
    void /* unknown type, empty encoding */ isFullFetch;
    void /* unknown type, empty encoding */ feeds;
    void /* unknown type, empty encoding */ maxItemsPerFeed;
}

@property (class, nonatomic, retain) FCMyArticlesRequest *lastRequestIssued;

@property (nonatomic, readonly) NSArray *feedIDs;
@property (nonatomic, readonly) NSDictionary *feedContextByFeedID;

- (void).cxx_destruct;
- (id)init;

@end
