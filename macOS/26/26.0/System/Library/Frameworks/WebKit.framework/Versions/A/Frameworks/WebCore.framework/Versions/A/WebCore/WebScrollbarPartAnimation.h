@class NSTimer, NSDate, NSScrollerImp;

@interface WebScrollbarPartAnimation : NSObject {
    struct WeakPtr<WebCore::Scrollbar, WTF::SingleThreadWeakPtrImpl, WTF::RawPtrTraits<WTF::SingleThreadWeakPtrImpl>> { struct RefPtr<WTF::SingleThreadWeakPtrImpl, WTF::RawPtrTraits<WTF::SingleThreadWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::SingleThreadWeakPtrImpl>> { struct SingleThreadWeakPtrImpl *m_ptr; } m_impl; } _scrollbar;
    struct RetainPtr<NSScrollerImp> { NSScrollerImp *m_ptr; } _scrollerImp;
    int _featureToAnimate;
    double _startValue;
    double _endValue;
    double _duration;
    struct RetainPtr<NSTimer> { NSTimer *m_ptr; } _timer;
    struct RetainPtr<NSDate> { NSDate *m_ptr; } _startDate;
    struct RefPtr<WebCore::CubicBezierTimingFunction, WTF::RawPtrTraits<WebCore::CubicBezierTimingFunction>, WTF::DefaultRefDerefTraits<WebCore::CubicBezierTimingFunction>> { struct CubicBezierTimingFunction *m_ptr; } _timingFunction;
}

- (void)startAnimation;
- (void)setDuration:(double)a0;
- (void)invalidate;
- (void)setCurrentProgress:(id)a0;
- (void)stopAnimation;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setEndValue:(double)a0;
- (id)initWithScrollbar:(void *)a0 featureToAnimate:(int)a1 animateFrom:(double)a2 animateTo:(double)a3 duration:(double)a4;
- (void)setStartValue:(double)a0;

@end
