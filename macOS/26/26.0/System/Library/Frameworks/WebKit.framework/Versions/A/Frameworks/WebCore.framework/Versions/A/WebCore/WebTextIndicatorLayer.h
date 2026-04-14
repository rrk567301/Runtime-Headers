@class NSArray;

@interface WebTextIndicatorLayer : CALayer {
    struct RefPtr<WebCore::TextIndicator, WTF::RawPtrTraits<WebCore::TextIndicator>, WTF::DefaultRefDerefTraits<WebCore::TextIndicator>> { struct TextIndicator *m_ptr; } _textIndicator;
    struct RetainPtr<NSArray> { NSArray *m_ptr; } _bounceLayers;
    struct CGSize { double width; double height; } _margin;
    BOOL _hasCompletedAnimation;
}

@property (nonatomic, getter=isFadingOut) BOOL fadingOut;

- (void)present;
- (id).cxx_construct;
- (void).cxx_destruct;
- (double)_animationDuration;
- (BOOL)hasCompletedAnimation;
- (void)hideWithCompletionHandler:(id /* block */)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textIndicator:(struct RefPtr<WebCore::TextIndicator, WTF::RawPtrTraits<WebCore::TextIndicator>, WTF::DefaultRefDerefTraits<WebCore::TextIndicator>> { struct TextIndicator *x0; })a1 margin:(struct CGSize { double x0; double x1; })a2 offset:(struct CGPoint { double x0; double x1; })a3;
- (void)setAnimationProgress:(float)a0;
- (void)updateWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textIndicator:(struct RefPtr<WebCore::TextIndicator, WTF::RawPtrTraits<WebCore::TextIndicator>, WTF::DefaultRefDerefTraits<WebCore::TextIndicator>> { struct TextIndicator *x0; })a1 margin:(struct CGSize { double x0; double x1; })a2 offset:(struct CGPoint { double x0; double x1; })a3 updatingIndicator:(BOOL)a4;

@end
