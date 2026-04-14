@class NSArray;

@interface BPSMergeMany : BMBookmarkablePublisher

@property (nonatomic) unsigned long long currentPublisher;
@property (readonly, nonatomic) NSArray *publishers;

+ (id)new;
+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (id)validateBookmark:(id)a0;
- (BOOL)canStoreInternalStateInBookmark;
- (void)applyBookmark:(id)a0;
- (id)upstreamPublishers;
- (id)nextEvent;
- (id)bookmarkableUpstreams;
- (id)bookmark;
- (void)subscribe:(id)a0;
- (id)initWithPublishers:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end
