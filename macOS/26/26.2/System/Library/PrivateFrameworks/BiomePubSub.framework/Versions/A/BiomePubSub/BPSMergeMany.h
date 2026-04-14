@class NSArray;

@interface BPSMergeMany : BMBookmarkablePublisher

@property (nonatomic) unsigned long long currentPublisher;
@property (readonly, nonatomic) NSArray *publishers;

+ (id)new;
+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (id)validateBookmark:(id)a0;
- (id)bookmark;
- (id)initWithPublishers:(id)a0;
- (void)subscribe:(id)a0;
- (id)nextEvent;
- (void)reset;
- (BOOL)canStoreInternalStateInBookmark;
- (void).cxx_destruct;
- (id)bookmarkableUpstreams;
- (id)upstreamPublishers;
- (id)init;
- (void)applyBookmark:(id)a0;

@end
