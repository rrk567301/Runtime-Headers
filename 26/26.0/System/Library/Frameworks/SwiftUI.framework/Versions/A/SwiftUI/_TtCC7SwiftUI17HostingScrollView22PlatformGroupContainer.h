@class NSArray;

@interface _TtCC7SwiftUI17HostingScrollView22PlatformGroupContainer : NSView {
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_hitTestingCache;
}

@property (nonatomic, readonly) NSArray *_childGestureRecognizerContainers;

+ (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)_shouldArrangeSublayers;
- (id)_supplementalGestureRecognizerContainerForContext:(id)a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)a0;

@end
