@interface FamilyCircleUI.BeneficiarySpecialDelegate : NSObject <AOSUIAccountContactsViewControllerDelegate, AOSUIAccountContactSetupFlowControllerDelegate> {
    void /* unknown type, empty encoding */ didDismiss;
    void /* unknown type, empty encoding */ dismiss;
    void /* unknown type, empty encoding */ onWindowDismiss;
}

- (void).cxx_destruct;
- (id)init;
- (void)doneButtonPressed;
- (void)accountContactSetupFlowControllerDidFinish:(id)a0;

@end
