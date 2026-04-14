@protocol MBSecondPartyHost;

@interface PKMacSetupAssistantHost : NSObject {
    id<MBSecondPartyHost> _host;
}

- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithHost:(id)a0;
- (id)init;
- (void)setAssistantCancelButtonHidden:(BOOL)a0;
- (void)setAssistantCancelButtonAction:(id /* block */)a0;
- (void)secondPartyHasNewTemplate;
- (void)setAssistantAlternateButtonAction:(id /* block */)a0;
- (void)setAssistantAlternateButtonHidden:(BOOL)a0;
- (void)setAssistantAlternateButtonTitle:(id)a0;
- (void)setAssistantCancelButtonTitle:(id)a0;
- (void)setAssistantControlsEnabled:(BOOL)a0;
- (void)setAssistantNextButtonAction:(id /* block */)a0;
- (void)setAssistantNextButtonEnabled:(BOOL)a0;
- (void)setAssistantNextButtonTitle:(id)a0;
- (void)setAssistantPreviousButtonAction:(id /* block */)a0;
- (void)setAssistantPreviousButtonEnabled:(BOOL)a0;
- (void)setAssistantPreviousButtonTitle:(id)a0;
- (void)setAssistantWindowDescription:(id)a0;
- (void)setAssistantWindowTitle:(id)a0;
- (void)secondPartySetupComplete;
- (void)disableControlsAndShowSpinnerWithStatus:(id)a0;
- (void)enableControlsAndHideSpinner;

@end
