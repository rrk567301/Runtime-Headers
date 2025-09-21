@class NSTextView, _TtC12GameCenterUI20DynamicTypeTextField;

@interface _TtC12GameCenterUIP33_32996016824AE11FBE71387AF3FB1E7423EditProfilLinkTextField : GameCenterUI.ClickableView {
    void /* unknown type, empty encoding */ fullText;
    void /* unknown type, empty encoding */ linkText;
    void /* unknown type, empty encoding */ textColor;
    void /* unknown type, empty encoding */ linkTextColor;
}

@property (nonatomic, readonly) _TtC12GameCenterUI20DynamicTypeTextField *textField;
@property (nonatomic, readonly) NSTextView *textView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (void).cxx_destruct;
- (BOOL)mouse:(struct CGPoint { double x0; double x1; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)didChangeState;
- (void)jet_traitCollectionDidChange:(id)a0;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;

@end
