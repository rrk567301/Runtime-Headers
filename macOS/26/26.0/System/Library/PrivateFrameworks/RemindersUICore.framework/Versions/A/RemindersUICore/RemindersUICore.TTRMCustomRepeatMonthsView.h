@interface RemindersUICore.TTRMCustomRepeatMonthsView : NSView {
    void /* unknown type, empty encoding */ customRepeatMonths;
    void /* unknown type, empty encoding */ daysOfTheMonthGridView;
    void /* unknown type, empty encoding */ weekAndDayView;
}

@property (nonatomic, weak) void /* function */ eachToggleButton;
@property (nonatomic, weak) void /* function */ daysOfTheMonthContainerView;
@property (nonatomic, weak) void /* function */ onTheToggleButton;
@property (nonatomic, weak) void /* function */ weekAndDayContainerView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)dayButtonAction:(id)a0;
- (void)eachToggleButtonAction:(id)a0;
- (void)onTheToggleButtonAction:(id)a0;

@end
