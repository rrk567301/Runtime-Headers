@interface GameStoreKit.CNContactQuickActionsViewController : NSViewController <CNContactQuickActionsControllerDelegate, CNContactQuickActionViewContainer> {
    void /* unknown type, empty encoding */ quickActions;
    void /* unknown type, empty encoding */ performAction;
    void /* unknown type, empty encoding */ metricsFieldsContext;
    void /* unknown type, empty encoding */ direction;
    void /* unknown type, empty encoding */ controller;
    void /* unknown type, empty encoding */ disambiguationVC;
    void /* unknown type, empty encoding */ stack;
    void /* unknown type, empty encoding */ lastTimestamp;
}

- (void)viewWillDisappear;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)contactQuickActionsController:(id)a0 presentDisambiguationMenu:(id)a1 forActionType:(id)a2;
- (void)quickActionsController:(id)a0 didResolveInitialActionsForActionType:(id)a1;
- (void)quickActionsController:(id)a0 willResolveInitialActionsForActionType:(id)a1;
- (id)viewForActionType:(id)a0;

@end
