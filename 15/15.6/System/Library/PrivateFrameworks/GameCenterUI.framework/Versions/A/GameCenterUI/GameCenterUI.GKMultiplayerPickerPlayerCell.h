@class NSString;

@interface GameCenterUI.GKMultiplayerPickerPlayerCell : GameCenterUI.CollectionReusableView {
    void /* unknown type, empty encoding */ lockupView;
}

@property (class, nonatomic, readonly) NSString *reuseIdentifier;

+ (struct CGSize { double x0; double x1; })preferredSizeFitting:(struct CGSize { double x0; double x1; })a0 inTraitEnvironment:(id)a1;

- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)applyWithPlayer:(id)a0 isCoreRecent:(char)a1;

@end
