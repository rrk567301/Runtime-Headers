@class NSArray;

@interface NSGlobalPreferenceTransition : NSObject {
    long long _overlaySpaceID;
    NSArray *_overlays;
    id /* block */ _completionHandler;
}

+ (id)transition;

- (void)dealloc;
- (void)_invalidate;
- (id)initTransition;
- (void)postChangeNotification:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)waitForTransitionWithCompletionHandler:(id /* block */)a0;

@end
