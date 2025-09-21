@interface SiriSetup.DataSharingTemplateViewController : OBTemplateContainerViewController {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ orbView;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ optInButton;
    void /* unknown type, empty encoding */ optOutButton;
}

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)continueClicked;
- (id)initWithFirstButtonTitle:(id)a0 secondButtonTitle:(id)a1 linkButtonTitle:(id)a2;
- (id)initWithPrimaryButtonTitle:(id)a0 secondaryButtonTitle:(id)a1 cancelButtonTitle:(id)a2;
- (id)initWithTemplateView:(id)a0 firstButtonTitle:(id)a1 secondButtonTitle:(id)a2 linkButtonTitle:(id)a3;
- (id)initWithTemplateView:(id)a0 primaryButtonTitle:(id)a1 secondaryButtonTitle:(id)a2 cancelButtonTitle:(id)a3;
- (void)backClicked;
- (void)optInRadioButtonClicked;
- (void)optOutRadioButtonClicked;

@end
