@class NSArray;

@interface BPSMergeMany : BMBookmarkablePublisher

@property (nonatomic) unsigned long long currentPublisher;
@property (readonly, nonatomic) NSArray *publishers;

+ (id)new;
+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (BOOL)canStoreInternalStateInBookmark;
- (id)nextEvent;
- (id)upstreamPublishers;
- (void)subscribe:(id)a0;
- (id)validateBookmark:(id)a0;
- (id)bookmarkableUpstreams;
- (void)applyBookmark:(id)a0;
- (id)bookmark;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithPublishers:(id)a0;

@end
