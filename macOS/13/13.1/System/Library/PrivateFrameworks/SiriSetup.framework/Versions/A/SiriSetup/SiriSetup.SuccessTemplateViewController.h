@interface SiriSetup.SuccessTemplateViewController : OBTemplateContainerViewController {
    void /* unknown type, empty encoding */ orbView;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ viewModel;
}

- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)initWithTemplateView:(id)a0 firstButtonTitle:(id)a1 secondButtonTitle:(id)a2 linkButtonTitle:(id)a3;
- (id)initWithFirstButtonTitle:(id)a0 secondButtonTitle:(id)a1 linkButtonTitle:(id)a2;
- (void)continueClicked;
- (void)backClicked;

@end
