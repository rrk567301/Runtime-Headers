@class IASMagicPocketView;

@interface IASMagicPocketScrollView : NSScrollView

@property (retain) IASMagicPocketView *topPocketView;
@property (retain) IASMagicPocketView *bottomPocketView;
@property (retain) IASMagicPocketView *leftPocketView;
@property (retain) IASMagicPocketView *rightPocketView;
@property char moreContentLeft;
@property char moreContentRight;
@property char moreContentUp;
@property char moreContentDown;
@property (retain) id contentViewBoundsChangeNotificationToken;
@property (retain) id documentViewFrameChangeNotificationToken;
@property char handleBoundsOrFrameChangePending;
@property (nonatomic) char showsPocketOnBottom;
@property (nonatomic) char showsPocketOnTop;
@property (nonatomic) char showsPocketOnLeft;
@property (nonatomic) char showsPocketOnRight;
@property (nonatomic) char pocketsAreDynamic;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)awakeFromNib;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tile;
- (void)viewDidMoveToWindow;
- (void)_defferedHandleBoundsOrFrameChanged;
- (void)_handleBoundsOrFrameChanged;
- (void)_installNotificationObserversIfNecessary;
- (void)animatePocket:(id)a0 in:(char)a1;
- (void)animateScrollToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)removeContentObserversIfNeeded;
- (void)setPocket:(id)a0 toState:(char)a1;

@end
