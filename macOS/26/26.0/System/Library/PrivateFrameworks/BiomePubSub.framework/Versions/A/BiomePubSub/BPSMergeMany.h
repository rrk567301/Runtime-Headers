@class NSArray;

@interface BPSMergeMany : BMBookmarkablePublisher

@property (nonatomic) unsigned long long currentPublisher;
@property (readonly, nonatomic) NSArray *publishers;

+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;
+ (id)new;

- (id)upstreamPublishers;
- (id)bookmarkableUpstreams;
- (id)initWithPublishers:(id)a0;
- (void)reset;
- (id)nextEvent;
- (void)subscribe:(id)a0;
- (BOOL)canStoreInternalStateInBookmark;
- (id)bookmark;
- (id)validateBookmark:(id)a0;
- (id)init;
- (void)applyBookmark:(id)a0;
- (void).cxx_destruct;

@end
