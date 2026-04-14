@interface RemindersUICore.TTRMCustomRepeatViewController : NSViewController <NSTextFieldDelegate> {
    void /* unknown type, empty encoding */ displayDate;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ detail;
}

@property (nonatomic, weak) void /* function */ detailTypePopUpButton;
@property (nonatomic, weak) void /* function */ intervalTextField;
@property (nonatomic, weak) void /* function */ everyLabel;
@property (nonatomic, weak) void /* function */ frequencyLabel;
@property (nonatomic, weak) void /* function */ detailContainerView;

- (void)controlTextDidChange:(id)a0;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)cancelAction:(id)a0;
- (void)detailTypePopUpAction:(id)a0;
- (void)okAction:(id)a0;

@end
