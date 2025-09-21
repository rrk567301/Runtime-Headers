@class NSString, NSArray;

@interface FCCKOrderFeedResponse : NSObject {
    char _reachedEnd;
    char _reachedMinOrder;
    char _wasDropped;
    NSString *_feedID;
    NSArray *_feedItemAndArticleRecords;
    unsigned long long _extent;
}

- (id)description;
- (void).cxx_destruct;

@end
