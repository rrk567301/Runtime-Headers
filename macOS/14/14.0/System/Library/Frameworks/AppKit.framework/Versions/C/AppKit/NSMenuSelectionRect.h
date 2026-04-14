@class NSMenuContext, NSCocoaMenuImpl, NSVisualEffectView;

@interface NSMenuSelectionRect : NSObject {
    NSCocoaMenuImpl *_observer;
    NSVisualEffectView *_backingView;
    SEL _observerAction;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cachedFrame;
    long long _pendingUpdateCount;
    double _lastHiddenStateChange;
    BOOL _cachedIsHidden;
    BOOL _isHidden;
    BOOL _shouldCommitChanges;
    BOOL _isAnimationStateCached;
    BOOL _cachedShouldAnimate;
}

@property (nonatomic) BOOL disableAnimations;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic, setter=setHidden:) BOOL isHidden;
@property (weak, nonatomic) NSVisualEffectView *backingView;
@property (weak, nonatomic) NSCocoaMenuImpl *observer;
@property (nonatomic) SEL observerAction;
@property (retain, nonatomic) NSMenuContext *presentationContext;

- (id)init;
- (void).cxx_destruct;
- (void)beginTransaction;
- (void)_notifyObserver;
- (BOOL)_supportsAnimation;
- (void)commitTransaction;

@end
