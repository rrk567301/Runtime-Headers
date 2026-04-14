@interface FamilyCircleUI.FACircleSafetySettingsViewController : NSViewController {
    void /* unknown type, empty encoding */ host;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ completionHandler;
    void /* unknown type, empty encoding */ templateViewInstance;
    void /* unknown type, empty encoding */ stateManager;
    void /* unknown type, empty encoding */ alertManager;
    void /* unknown type, empty encoding */ screenTimeManager;
    void /* unknown type, empty encoding */ ageRange;
}

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)setCompletionHandler:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (id)templateView;
- (id)initWithContext:(id)a0 host:(id)a1;

@end
