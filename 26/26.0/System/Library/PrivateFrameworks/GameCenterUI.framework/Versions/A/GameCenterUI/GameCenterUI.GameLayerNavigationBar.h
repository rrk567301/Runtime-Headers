@class NSString, _TtC12GameCenterUI16NavigationButton;

@interface GameCenterUI.GameLayerNavigationBar : GameCenterUI.BaseView {
    void /* unknown type, empty encoding */ opacityScrollObserver;
    void /* unknown type, empty encoding */ navigationItemTrackers;
    void /* unknown type, empty encoding */ backgroundView;
    void /* unknown type, empty encoding */ currentHeaderView;
    void /* unknown type, empty encoding */ transitionHeaderView;
    void /* unknown type, empty encoding */ isTransitionInProgress;
}

@property (nonatomic) BOOL alwaysShowNavigationBar;
@property (nonatomic, readonly) _TtC12GameCenterUI16NavigationButton *backButton;
@property (nonatomic, readonly) _TtC12GameCenterUI16NavigationButton *closeButton;
@property (nonatomic, retain) _TtC12GameCenterUI16NavigationButton *rightBarButtonItem;
@property (nonatomic, copy) NSString *currentTitle;
@property (nonatomic, copy) NSString *currentSubtitle;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (void).cxx_destruct;
- (void)popNavigationItem;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;
- (void)observeScrollEventsFrom:(id)a0;
- (void)popToRoot;
- (void)pushNavigationItemFrom:(id)a0;
- (void)setNavigationItemsFor:(id)a0;

@end
