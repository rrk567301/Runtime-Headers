@class NSEnumerator;

@interface BPSSequence : BMBookmarkablePublisher

@property (retain, nonatomic) NSEnumerator *enumerator;
@property (nonatomic) BOOL finished;

+ (id)new;

- (id)validateBookmark:(id)a0;
- (BOOL)completed;
- (void)applyBookmark:(id)a0;
- (id)upstreamPublishers;
- (id)nextEvent;
- (id)initWithEnumerator:(id)a0;
- (id)bookmarkableUpstreams;
- (id)bookmark;
- (id)initWithSequence:(id)a0;
- (void)subscribe:(id)a0;
- (void).cxx_destruct;
- (id)initWithBookmarkableEnumerator:(id)a0;
- (void)reset;
- (id)init;

@end
