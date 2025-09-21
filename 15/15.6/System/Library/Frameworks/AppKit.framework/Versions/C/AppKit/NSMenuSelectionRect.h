@class NSCocoaMenuImpl, NSVisualEffectView;

@interface NSMenuSelectionRect : NSObject {
    NSCocoaMenuImpl *_observer;
    NSVisualEffectView *_backingView;
    SEL _observerAction;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cachedFrame;
    long long _pendingUpdateCount;
    double _lastHiddenStateChange;
    char _cachedIsHidden;
    char _isHidden;
    char _shouldCommitChanges;
    char _isAnimationStateCached;
    char _cachedShouldAnimate;
    char _disableAnimations;
}

- (id)init;
- (void).cxx_destruct;

@end
