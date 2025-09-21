@interface WebScrollbarPartAnimationMac : NSAnimation {
    struct CheckedPtr<WebCore::ScrollerMac, WTF::RawPtrTraits<WebCore::ScrollerMac>> { struct ScrollerMac *m_ptr; } _scroller;
    int _featureToAnimate;
    double _startValue;
    double _endValue;
}

- (void).cxx_destruct;
- (void)invalidate;
- (id).cxx_construct;
- (void)setCurrentProgress:(float)a0;
- (void)startAnimation;
- (void)setEndValue:(double)a0;
- (id)initWithScroller:(void *)a0 featureToAnimate:(int)a1 animateFrom:(double)a2 animateTo:(double)a3 duration:(double)a4;
- (void)setStartValue:(double)a0;

@end
