@class NSEnumerator;

@interface BPSSequence : BMBookmarkablePublisher

@property (retain, nonatomic) NSEnumerator *enumerator;
@property (nonatomic) BOOL finished;

+ (id)new;

- (BOOL)completed;
- (id)validateBookmark:(id)a0;
- (id)bookmark;
- (void)subscribe:(id)a0;
- (id)nextEvent;
- (id)initWithEnumerator:(id)a0;
- (void)reset;
- (void).cxx_destruct;
- (id)initWithBookmarkableEnumerator:(id)a0;
- (id)initWithSequence:(id)a0;
- (id)bookmarkableUpstreams;
- (id)upstreamPublishers;
- (id)init;
- (void)applyBookmark:(id)a0;

@end
