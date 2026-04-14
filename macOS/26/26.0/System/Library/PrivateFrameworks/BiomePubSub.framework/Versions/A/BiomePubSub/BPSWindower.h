@class NSArray, NSMutableDictionary, NSString;
@protocol BPSPublisher, BPSWindowAssigner;

@interface BPSWindower : BMBookmarkablePublisher <BMBookmarkablePublisher>

@property (retain, nonatomic) NSMutableDictionary *windows;
@property (readonly, nonatomic) id<BPSPublisher> upstream;
@property (copy, nonatomic) id /* block */ key;
@property (readonly, nonatomic) id<BPSWindowAssigner> assigner;
@property (readonly, nonatomic) NSArray *bookmarkableUpstreams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;
+ (id)new;

- (id)upstreamPublishers;
- (BOOL)completed;
- (void)reset;
- (id)nextEvent;
- (void)subscribe:(id)a0;
- (BOOL)canStoreInternalStateInBookmark;
- (BOOL)canStorePassThroughValueInBookmark;
- (id)bookmark;
- (id)validateBookmark:(id)a0;
- (id)init;
- (void)applyBookmark:(id)a0;
- (void).cxx_destruct;
- (id)firstCompletedWindow;
- (id)firstCompletedWindowShouldRemove:(BOOL)a0;
- (id)initWithUpstream:(id)a0 key:(id /* block */)a1 assigner:(id)a2;
- (void)updateWindowsWithEvent:(id)a0;

@end
