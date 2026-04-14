@protocol CCSetChangeEnumerator, BMBookmark;

@interface CCSetChangePublisher : BMBookmarkablePublisher {
    id<CCSetChangeEnumerator> _enumerator;
    id<BMBookmark> _enumeratorBookmark;
    BOOL _finished;
}

+ (id)publisherForSet:(id)a0;
+ (id)publisherForSet:(id)a0 useCase:(id)a1;

- (id)validateBookmark:(id)a0;
- (id)startWithSubscriber:(id)a0;
- (BOOL)completed;
- (void)applyBookmark:(id)a0;
- (id)upstreamPublishers;
- (id)nextEvent;
- (id)initWithEnumerator:(id)a0;
- (id)bookmark;
- (void).cxx_destruct;
- (void)reset;
- (id)init;
- (unsigned long long)sharedItemCount;
- (unsigned long long)localItemInstanceCount;
- (id)initWithSet:(id)a0 readAccess:(id)a1;
- (BOOL)isBookmarkUpToDate:(id)a0;

@end
