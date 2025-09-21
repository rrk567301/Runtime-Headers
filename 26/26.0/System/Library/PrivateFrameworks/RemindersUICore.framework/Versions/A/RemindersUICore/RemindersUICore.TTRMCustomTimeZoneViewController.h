@interface RemindersUICore.TTRMCustomTimeZoneViewController : NSViewController <NSTextFieldDelegate> {
    void /* unknown type, empty encoding */ timeZone;
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ initialCityName;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ isHandlingDeleteBackward;
}

@property (nonatomic, weak) void /* function */ cityNameComboBox;
@property (nonatomic, weak) void /* function */ timeZoneTextField;
@property (nonatomic, weak) void /* function */ comboBoxWidthConstraint;
@property (nonatomic, weak) void /* function */ buttonsCenterAlignment;
@property (nonatomic, weak) void /* function */ okButtonTrailingConstraint;
@property (nonatomic, weak) void /* function */ comboBoxTrailingConstraint;
@property (nonatomic, weak) void /* function */ titleLabel;
@property (nonatomic, weak) void /* function */ instructionLabelTopConstraintToTitle;
@property (nonatomic, weak) void /* function */ instructionLabelTopConstraintToSuperview;

- (void)controlTextDidChange:(id)a0;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)cancelAction:(id)a0;
- (void)detailTypeComboBoxAction:(id)a0;
- (void)okAction:(id)a0;

@end
