@class NSString, NSArray, NSData;

@interface FCCKFeedResponse : NSObject {
    char _reachedEnd;
    char _reachedOrderLimit;
    char _wasDropped;
    NSString *_feedID;
    NSArray *_feedItemAndArticleRecords;
    unsigned long long _extent;
    NSData *_cursor;
}

- (id)description;
- (void).cxx_destruct;

@end
