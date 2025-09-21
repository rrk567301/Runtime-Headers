@protocol MBSecondPartyHost;

@interface PKMacSetupAssistantHost : NSObject {
    id<MBSecondPartyHost> _host;
}

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)secondPartyHasNewTemplate;
- (void)setAssistantAlternateButtonAction:(id /* block */)a0;
- (void)setAssistantAlternateButtonHidden:(char)a0;
- (void)setAssistantAlternateButtonTitle:(id)a0;
- (void)setAssistantControlsEnabled:(char)a0;
- (void)setAssistantNextButtonAction:(id /* block */)a0;
- (void)setAssistantNextButtonEnabled:(char)a0;
- (void)setAssistantNextButtonTitle:(id)a0;
- (void)setAssistantPreviousButtonAction:(id /* block */)a0;
- (void)setAssistantPreviousButtonEnabled:(char)a0;
- (void)setAssistantPreviousButtonTitle:(id)a0;
- (void)setAssistantWindowDescription:(id)a0;
- (void)setAssistantWindowTitle:(id)a0;
- (id)initWithHost:(id)a0;
- (void)secondPartySetupComplete;
- (void)disableControlsAndShowSpinnerWithStatus:(id)a0;
- (void)enableControlsAndHideSpinner;

@end
