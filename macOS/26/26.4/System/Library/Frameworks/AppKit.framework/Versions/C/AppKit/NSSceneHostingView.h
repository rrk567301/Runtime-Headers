@class NSArray, CALayerHost, NSLayoutConstraint, FBScene;

@interface NSSceneHostingView : NSView <FBSceneObserver> {
    void /* function */ windowObservers;
    void /* function */ accessibilityUnorderedChildren;
    void /* function */ accessibilityHorizontalOrderedChildren;
}

@property (nonatomic) BOOL useEventMask;
@property (nonatomic) struct CGPoint { double x0; double x1; } overrideScreenPoint;
@property (nonatomic, readonly) FBScene *scene;
@property (nonatomic, weak) void /* function */ controller;
@property (nonatomic, copy) NSArray *windowObservers;
@property (nonatomic, readonly) CALayerHost *layerHost;
@property (nonatomic, retain) NSLayoutConstraint *widthConstraint;
@property (nonatomic, retain) NSLayoutConstraint *heightConstraint;
@property (nonatomic, copy) NSArray *accessibilityUnorderedChildren;
@property (nonatomic, copy) NSArray *accessibilityHorizontalOrderedChildren;

- (void)viewWillMoveToWindow:(id)a0;
- (void)activate;
- (void)scene:(id)a0 didUpdateClientSettings:(id)a1;
- (id)initWithScene:(id)a0;
- (void)sceneDidInvalidate:(id)a0 withContext:(id)a1;
- (void).cxx_destruct;
- (void)viewDidChangeEffectiveAppearance;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)viewDidMoveToWindow;
- (id)accessibilityChildren;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityChildrenInNavigationOrder;
- (id)accessibilityChildrenInNavigationOrderAttribute;
- (void)geometryInWindowDidChange;

@end
