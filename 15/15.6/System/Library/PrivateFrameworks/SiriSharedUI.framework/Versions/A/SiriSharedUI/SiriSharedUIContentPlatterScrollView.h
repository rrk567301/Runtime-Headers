@protocol SiriSharedUIContentPlatterScrollViewDelegate, SiriSharedUIContentViewSizeProviding;

@interface SiriSharedUIContentPlatterScrollView : SiriSharedUIStandardScrollView

@property (nonatomic) char adjustContentSizeOnNextLayout;
@property (nonatomic, getter=isAutomaticScrollingEnabled) char automaticScrollingEnabled;
@property (nonatomic) char isInAmbientInteractivity;
@property (weak, nonatomic) id<SiriSharedUIContentPlatterScrollViewDelegate> platterDelegate;
@property (weak, nonatomic) id<SiriSharedUIContentViewSizeProviding> contentViewSizeProvider;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (char)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_sharedInit;
- (id)_parentScrollView;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 animated:(char)a1;

@end
