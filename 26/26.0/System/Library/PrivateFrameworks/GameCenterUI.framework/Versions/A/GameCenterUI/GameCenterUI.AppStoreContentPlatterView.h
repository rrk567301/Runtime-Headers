@class _TtC12GameCenterUI8PageGrid;

@interface GameCenterUI.AppStoreContentPlatterView : GameCenterUI.BaseView {
    void /* unknown type, empty encoding */ titleView;
    void /* unknown type, empty encoding */ materialBackgroundView;
    void /* unknown type, empty encoding */ contentContainer;
    void /* unknown type, empty encoding */ titleActionBlock;
    void /* unknown type, empty encoding */ loadingView;
    void /* unknown type, empty encoding */ errorView;
    void /* unknown type, empty encoding */ isLoading;
}

@property (nonatomic, readonly) BOOL wantsTitle;
@property (nonatomic, readonly) BOOL isShowingErrorView;
@property (nonatomic) BOOL isBackgroundHidden;
@property (nonatomic, retain) _TtC12GameCenterUI8PageGrid *pageGrid;

- (void)addSubview:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (id)init;
- (void).cxx_destruct;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;
- (struct CGSize { double x0; double x1; })contentSizeWithFitting:(struct CGSize { double x0; double x1; })a0;
- (void)layoutContentsIn:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
