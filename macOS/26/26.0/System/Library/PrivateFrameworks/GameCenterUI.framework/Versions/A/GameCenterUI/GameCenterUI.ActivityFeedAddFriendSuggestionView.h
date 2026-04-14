@class NSScrollView, NSStackView, NSArray;

@interface GameCenterUI.ActivityFeedAddFriendSuggestionView : GameCenterUI.BaseView {
    void /* function */ smallPlayerCards;
}

@property (nonatomic, readonly) NSScrollView *scrollView;
@property (nonatomic, readonly) NSStackView *stackView;
@property (nonatomic, copy) NSArray *smallPlayerCards;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measureToFit:(struct CGSize { double x0; double x1; })a0 with:(id)a1;

@end
