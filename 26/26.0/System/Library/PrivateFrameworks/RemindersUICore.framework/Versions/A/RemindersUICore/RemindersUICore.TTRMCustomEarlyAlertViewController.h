@interface RemindersUICore.TTRMCustomEarlyAlertViewController : NSViewController <NSTextFieldDelegate> {
    void /* unknown type, empty encoding */ displayDate;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ maxIntervalValue;
    void /* unknown type, empty encoding */ $__lazy_storage_$_orderedUnits;
}

@property (nonatomic, weak) void /* function */ intervalTextField;
@property (nonatomic, weak) void /* function */ intervalUnitPopup;
@property (nonatomic, weak) void /* function */ earlyAlertWarningTextField;

- (void)controlTextDidChange:(id)a0;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)addCustomAlert:(id)a0;
- (void)cancelAlert:(id)a0;
- (void)detailTypePopUpAction:(id)a0;

@end
