@class NSEnumerator;

@interface BPSSequence : BMBookmarkablePublisher

@property (retain, nonatomic) NSEnumerator *enumerator;
@property (nonatomic) BOOL finished;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)bookmark;
- (BOOL)completed;
- (id)initWithEnumerator:(id)a0;
- (void)subscribe:(id)a0;
- (id)initWithSequence:(id)a0;
- (void)applyBookmark:(id)a0;
- (id)nextEvent;
- (id)upstreamPublishers;
- (id)validateBookmark:(id)a0;
- (id)bookmarkableUpstreams;
- (id)initWithBookmarkableEnumerator:(id)a0;

@end
