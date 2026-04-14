@class NSString;

@interface GameCenterUI.NavigationDoubleHeaderView : GameCenterUI.BaseView {
    void /* unknown type, empty encoding */ titleTextField;
    void /* unknown type, empty encoding */ subtitleTextField;
}

@property (nonatomic, copy) NSString *titleText;
@property (nonatomic, copy) NSString *subtitleText;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (void).cxx_destruct;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;

@end
