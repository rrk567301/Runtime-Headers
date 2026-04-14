@class NSArray;

@interface NSLocalGlobalPreferenceTransition : NSObject {
    unsigned long long _overlaySpaceID;
    NSArray *_overlays;
}

+ (id)localTransition;

- (void)_invalidate;
- (void)dealloc;
- (void).cxx_destruct;
- (void)endTransitionWithoutPosting;
- (id)initLocalTransition;

@end
