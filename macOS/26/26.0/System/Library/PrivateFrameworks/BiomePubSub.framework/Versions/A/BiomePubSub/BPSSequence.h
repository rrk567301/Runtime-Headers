@class NSEnumerator;

@interface BPSSequence : BMBookmarkablePublisher

@property (retain, nonatomic) NSEnumerator *enumerator;
@property (nonatomic) BOOL finished;

+ (id)new;

- (id)upstreamPublishers;
- (id)bookmarkableUpstreams;
- (id)initWithEnumerator:(id)a0;
- (BOOL)completed;
- (void)reset;
- (id)nextEvent;
- (void)subscribe:(id)a0;
- (id)initWithSequence:(id)a0;
- (id)bookmark;
- (id)validateBookmark:(id)a0;
- (id)init;
- (void)applyBookmark:(id)a0;
- (id)initWithBookmarkableEnumerator:(id)a0;
- (void).cxx_destruct;

@end
