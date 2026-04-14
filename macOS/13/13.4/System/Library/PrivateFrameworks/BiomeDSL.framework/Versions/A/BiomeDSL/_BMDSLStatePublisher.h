@class BMDSLState;
@protocol BPSPublisher, BMDSLStateValue;

@interface _BMDSLStatePublisher : BMBookmarkablePublisher

@property (readonly, nonatomic) id<BPSPublisher> upstream;
@property (retain, nonatomic) id<BMDSLStateValue> state;
@property (readonly, nonatomic) BMDSLState *DSLState;

+ (id)new;
+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (void)subscribe:(id)a0;
- (BOOL)canStoreInternalStateInBookmark;
- (id)bookmarkableUpstreams;
- (BOOL)canStorePassThroughValueInBookmark;
- (id)initWithUpstream:(id)a0 state:(id)a1 DSLState:(id)a2;

@end
