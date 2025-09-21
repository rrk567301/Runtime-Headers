@class NSString;

@interface GameCenterUI.GKDashboardShowMoreFooterView : GameCenterUI.CollectionReusableView {
    void /* unknown type, empty encoding */ label;
    void /* function */ actionHandler;
    void /* function */ showMoreText;
}

@property (nonatomic, copy) id /* block */ actionHandler;
@property (nonatomic, readonly) BOOL flipped;
@property (nonatomic, copy) NSString *showMoreText;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (BOOL)isFlipped;
- (void).cxx_destruct;
- (void)didClick:(id)a0;

@end
