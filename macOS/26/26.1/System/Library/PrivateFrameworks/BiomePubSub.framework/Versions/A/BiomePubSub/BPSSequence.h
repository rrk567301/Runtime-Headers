@class NSEnumerator;

@interface BPSSequence : BMBookmarkablePublisher

@property (retain, nonatomic) NSEnumerator *enumerator;
@property (nonatomic) BOOL finished;

+ (id)new;

- (void)applyBookmark:(id)a0;
- (BOOL)completed;
- (id)validateBookmark:(id)a0;
- (void)subscribe:(id)a0;
- (id)nextEvent;
- (id)initWithSequence:(id)a0;
- (id)initWithBookmarkableEnumerator:(id)a0;
- (id)initWithEnumerator:(id)a0;
- (id)upstreamPublishers;
- (void)reset;
- (id)bookmarkableUpstreams;
- (void).cxx_destruct;
- (id)bookmark;
- (id)init;

@end
