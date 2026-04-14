@class NSArray;

@interface NSLocalGlobalPreferenceTransition : NSObject {
    unsigned long long _overlaySpaceID;
    NSArray *_overlays;
}

+ (id)localTransition;

- (void)_invalidate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)endTransitionWithoutPosting;
- (id)initLocalTransition;

@end
