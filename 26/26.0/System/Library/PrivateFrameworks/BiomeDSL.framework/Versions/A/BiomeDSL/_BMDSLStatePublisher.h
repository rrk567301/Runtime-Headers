@class BMDSLState;
@protocol BPSPublisher, BMDSLStateValue;

@interface _BMDSLStatePublisher : BMBookmarkablePublisher

@property (readonly, nonatomic) id<BPSPublisher> upstream;
@property (retain, nonatomic) id<BMDSLStateValue> state;
@property (readonly, nonatomic) BMDSLState *DSLState;

+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;
+ (id)new;

- (id)upstreamPublishers;
- (id)bookmarkableUpstreams;
- (id)nextEvent;
- (void)subscribe:(id)a0;
- (BOOL)canStoreInternalStateInBookmark;
- (BOOL)canStorePassThroughValueInBookmark;
- (id)bookmark;
- (id)initWithUpstream:(id)a0 state:(id)a1 DSLState:(id)a2;
- (id)validateBookmark:(id)a0;
- (id)init;
- (void)applyBookmark:(id)a0;
- (void).cxx_destruct;

@end
