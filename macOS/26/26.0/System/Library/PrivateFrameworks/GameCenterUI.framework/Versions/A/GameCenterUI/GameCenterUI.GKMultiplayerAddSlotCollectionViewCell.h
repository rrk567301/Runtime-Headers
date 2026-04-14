@class NSString, _TtC12GameCenterUI10ButtonView;

@interface GameCenterUI.GKMultiplayerAddSlotCollectionViewCell : GameCenterUI.CollectionReusableView {
    void /* unknown type, empty encoding */ backgroundView;
    void /* unknown type, empty encoding */ addSlotButton;
    void /* function */ addSlotActionHandler;
}

@property (class, nonatomic, readonly) NSString *reuseIdentifier;

@property (nonatomic, copy) id /* block */ addSlotActionHandler;
@property (nonatomic) long long maximumAdditionalPlayers;
@property (nonatomic, readonly) _TtC12GameCenterUI10ButtonView *accessibilityAddSlotButton;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (void).cxx_destruct;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;
- (void)addPlayersMenuAction:(id)a0;

@end
