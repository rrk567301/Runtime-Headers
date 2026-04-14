@class BPSPublisher;

@interface BPSFilter : BMBookmarkablePublisher

@property (retain, nonatomic) BPSPublisher *upstream;
@property (readonly, nonatomic) id /* block */ isIncluded;

+ (id)new;
+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (BOOL)canStoreInternalStateInBookmark;
- (id)nextEvent;
- (id)upstreamPublishers;
- (void)subscribe:(id)a0;
- (id)bookmarkableUpstreams;
- (id)init;
- (void).cxx_destruct;
- (id)initWithUpstream:(id)a0 isIncluded:(id /* block */)a1;

@end
