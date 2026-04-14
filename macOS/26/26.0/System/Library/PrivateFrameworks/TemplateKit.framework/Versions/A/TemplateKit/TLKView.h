@class NSView, TLKAppearance, NSString;
@protocol TLKObserver;

@interface TLKView : NSView <TLKObserver, TLKObservable>

@property (readonly) NSView *leadingTextView;
@property (retain, nonatomic) NSView *contentView;
@property (retain, nonatomic) TLKAppearance *tlkAppearance;
@property (readonly) BOOL usesDefaultLayoutMargins;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } layoutMargins;
@property (nonatomic) long long batchUpdateCount;
@property (weak) id<TLKObserver> observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;
+ (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })defaultLayoutMargins;
+ (void)enableLightKeylineStroke:(BOOL)a0 forView:(id)a1;
+ (void)enableShadow:(BOOL)a0 forView:(id)a1;
+ (void)makeContainerShadowCompatible:(id)a0;

- (id)viewForLastBaselineLayout;
- (void)layoutMarginsDidChange;
- (id)viewForFirstBaselineLayout;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layout;
- (BOOL)isFlipped;
- (id)init;
- (void)performBatchUpdates:(id /* block */)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })effectiveLayoutMargins;
- (BOOL)isLayoutSizeDependentOnPerpendicularAxis;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })defaultBaselineRelativeLayoutMargins;
- (void)disableUnbatchedUpdates;
- (void)observedPropertiesChanged;
- (void)propertiesDidChange;
- (id)setupContentView;

@end
