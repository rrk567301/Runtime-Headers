@interface WebScrollbarPartAnimationMac : NSAnimation {
    struct CheckedPtr<WebCore::ScrollerMac, WTF::RawPtrTraits<WebCore::ScrollerMac>> { struct ScrollerMac *m_ptr; } _scroller;
    int _featureToAnimate;
    double _startValue;
    double _endValue;
}

- (void)invalidate;
- (void)startAnimation;
- (void)setCurrentProgress:(float)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setEndValue:(double)a0;
- (id)initWithScroller:(void *)a0 featureToAnimate:(int)a1 animateFrom:(double)a2 animateTo:(double)a3 duration:(double)a4;
- (void)setStartValue:(double)a0;

@end
