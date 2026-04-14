@protocol CCSetChangeEnumerator, BMBookmark;

@interface CCSetChangePublisher : BMBookmarkablePublisher {
    id<CCSetChangeEnumerator> _enumerator;
    id<BMBookmark> _enumeratorBookmark;
    BOOL _finished;
}

+ (id)publisherForSet:(id)a0;
+ (id)publisherForSet:(id)a0 useCase:(id)a1;

- (BOOL)completed;
- (id)validateBookmark:(id)a0;
- (id)startWithSubscriber:(id)a0;
- (id)bookmark;
- (id)nextEvent;
- (id)initWithEnumerator:(id)a0;
- (void)reset;
- (void).cxx_destruct;
- (id)upstreamPublishers;
- (id)init;
- (void)applyBookmark:(id)a0;
- (unsigned long long)sharedItemCount;
- (unsigned long long)localItemInstanceCount;
- (id)initWithSet:(id)a0 readAccess:(id)a1;
- (BOOL)isBookmarkUpToDate:(id)a0;

@end
