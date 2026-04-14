@protocol BPSPublisher;

@interface BPSMerge : BMBookmarkablePublisher

@property (readonly, nonatomic) id<BPSPublisher> a;
@property (readonly, nonatomic) id<BPSPublisher> b;

+ (id)new;
+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (void)subscribe:(id)a0;
- (id)initWithA:(id)a0 b:(id)a1;
- (BOOL)canStoreInternalStateInBookmark;
- (id)bookmarkableUpstreams;

@end
