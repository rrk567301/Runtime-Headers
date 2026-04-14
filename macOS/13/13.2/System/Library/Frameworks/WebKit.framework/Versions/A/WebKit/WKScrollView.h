@protocol WKScrollViewDelegate;

@interface WKScrollView : NSScrollView {
    struct WeakObjCPtr<id<WKScrollViewDelegate>> { id m_weakReference; } _delegate;
}

@property (weak, nonatomic) id<WKScrollViewDelegate> delegate;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } contentOffset;

+ (BOOL)isCompatibleWithResponsiveScrolling;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setContentInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)boundsDidChange:(id)a0;

@end
