@protocol NSGestureRecognizerContainer;

@interface _TtCC7SwiftUI17HostingScrollView17PlatformContainer : NSView {
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ safeAreaHelper;
    void /* unknown type, empty encoding */ isInitialSafeAreaUpdate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_hitTestingCache;
    void /* unknown type, empty encoding */ currentHitTestingCacheKey;
}

@property (nonatomic) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } _safeAreaInsets;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (nonatomic, readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } computedSafeAreaInsets;
@property (nonatomic, readonly) id<NSGestureRecognizerContainer> _parentGestureRecognizerContainer;

+ (BOOL)automaticallyTracksDependenciesOn_safeAreaInsets;
+ (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })default_safeAreaInsets;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_nextResponderForEvent:(id)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;

@end
