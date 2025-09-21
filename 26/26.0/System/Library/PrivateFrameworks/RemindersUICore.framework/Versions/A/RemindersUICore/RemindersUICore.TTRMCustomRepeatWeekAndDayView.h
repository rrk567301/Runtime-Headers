@interface RemindersUICore.TTRMCustomRepeatWeekAndDayView : NSView {
    void /* unknown type, empty encoding */ delegate;
}

@property (nonatomic, weak) void /* function */ weekPopUpButton;
@property (nonatomic, weak) void /* function */ dayPopUpButton;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)dayPopUpButtonAction:(id)a0;
- (void)weekPopUpButtonAction:(id)a0;

@end
