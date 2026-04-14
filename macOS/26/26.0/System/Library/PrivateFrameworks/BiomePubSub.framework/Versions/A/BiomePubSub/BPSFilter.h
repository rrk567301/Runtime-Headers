@class BPSPublisher;

@interface BPSFilter : BMBookmarkablePublisher

@property (retain, nonatomic) BPSPublisher *upstream;
@property (readonly, nonatomic) id /* block */ isIncluded;

+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;
+ (id)new;

- (id)upstreamPublishers;
- (id)bookmarkableUpstreams;
- (id)nextEvent;
- (void)subscribe:(id)a0;
- (BOOL)canStoreInternalStateInBookmark;
- (id)init;
- (id)initWithUpstream:(id)a0 isIncluded:(id /* block */)a1;
- (void).cxx_destruct;

@end
