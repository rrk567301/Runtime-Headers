@class NSString, NSArray;

@interface FCCKOrderFeedResponse : NSObject {
    BOOL _reachedEnd;
    BOOL _reachedMinOrder;
    BOOL _wasDropped;
    NSString *_feedID;
    NSArray *_feedItemAndArticleRecords;
    unsigned long long _extent;
}

- (void).cxx_destruct;
- (id)description;

@end
