@class NSEnumerator;

@interface BPSSequence : BMBookmarkablePublisher

@property (retain, nonatomic) NSEnumerator *enumerator;
@property (nonatomic) BOOL finished;

+ (id)new;

- (id)nextEvent;
- (id)upstreamPublishers;
- (BOOL)completed;
- (void)subscribe:(id)a0;
- (id)validateBookmark:(id)a0;
- (id)bookmarkableUpstreams;
- (void)applyBookmark:(id)a0;
- (id)bookmark;
- (id)init;
- (void).cxx_destruct;
- (id)initWithSequence:(id)a0;
- (void)reset;
- (id)initWithEnumerator:(id)a0;
- (id)initWithBookmarkableEnumerator:(id)a0;

@end
