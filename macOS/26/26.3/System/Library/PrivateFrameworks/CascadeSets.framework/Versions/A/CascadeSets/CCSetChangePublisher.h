@protocol CCSetChangeEnumerator, BMBookmark;

@interface CCSetChangePublisher : BMBookmarkablePublisher {
    id<CCSetChangeEnumerator> _enumerator;
    id<BMBookmark> _enumeratorBookmark;
    BOOL _finished;
}

+ (id)publisherForSet:(id)a0;
+ (id)publisherForSet:(id)a0 useCase:(id)a1;

- (id)nextEvent;
- (id)upstreamPublishers;
- (BOOL)completed;
- (id)startWithSubscriber:(id)a0;
- (id)validateBookmark:(id)a0;
- (void)applyBookmark:(id)a0;
- (id)bookmark;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithEnumerator:(id)a0;
- (unsigned long long)sharedItemCount;
- (unsigned long long)localItemInstanceCount;
- (id)initWithSet:(id)a0 readAccess:(id)a1;
- (BOOL)isBookmarkUpToDate:(id)a0;

@end
