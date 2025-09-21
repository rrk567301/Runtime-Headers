@class NSString, NSColor;
@protocol WKColorExtensionViewDelegate;

@interface WKColorExtensionView : NSView <CAAnimationDelegate> {
    BOOL _isVisible;
    id<WKColorExtensionViewDelegate> _delegate;
    struct RetainPtr<NSColor> { NSColor *m_ptr; } _targetColor;
}

@property (readonly, nonatomic, getter=isHiddenOrFadingOut) BOOL hiddenOrFadingOut;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)fadeOut;
- (void)_updateColor:(id)a0 visible:(BOOL)a1;
- (void)cancelFadeAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (void)updateColor:(id)a0;

@end
