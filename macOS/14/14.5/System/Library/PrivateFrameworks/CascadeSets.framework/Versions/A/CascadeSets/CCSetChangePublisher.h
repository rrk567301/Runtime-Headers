@protocol CCSetChangeEnumerator, BMBookmark;

@interface CCSetChangePublisher : BMBookmarkablePublisher

@property (retain, nonatomic) id<CCSetChangeEnumerator> enumerator;
@property (copy, nonatomic) id /* block */ enumeratorBlock;
@property (retain, nonatomic) id<BMBookmark> enumeratorBookmark;
@property (nonatomic) BOOL finished;

+ (id)publisherForSet:(id)a0;
+ (id)publisherForSet:(id)a0 useCase:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)completed;
- (id)bookmark;
- (unsigned long long)localItemInstanceCount;
- (id)nextEvent;
- (void)applyBookmark:(id)a0;
- (id)startWithSubscriber:(id)a0;
- (id)upstreamPublishers;
- (id)validateBookmark:(id)a0;
- (unsigned long long)sharedItemCount;
- (id)initWithEnumeratorBlock:(id /* block */)a0;
- (id)initWithSet:(id)a0 readAccess:(id)a1;

@end
