@class CDPContext, NSWindow, _TtC9CoreCDPUI21QuotaStorageViewModel;
@protocol CDPRemoteDeviceSecretValidatorProtocol, CDPQuotaScreenUIHandlerCapable;

@interface QuotaStorageViewHandler : NSObject <CoreCDPUI.QuotaStorageViewDelegate> {
    NSWindow *_presentingWindow;
    NSWindow *_quotaStorageWindow;
    _TtC9CoreCDPUI21QuotaStorageViewModel *_viewModel;
    id<CDPRemoteDeviceSecretValidatorProtocol> _validator;
    CDPContext *_cdpContext;
    id<CDPQuotaScreenUIHandlerCapable> _uiHandler;
}

- (void).cxx_destruct;
- (void)_closeWindowSheet;
- (void)didResetSuccessfully;
- (void)dismissDataRecoveryFlow;
- (void)handleResetFailure;
- (id)initWithPresentingWindow:(id)a0 quotaStorageWindow:(id)a1 viewModel:(id)a2 validator:(id)a3 cdpContext:(id)a4 uiHandler:(id)a5;
- (void)performResetProtectedDataWithCompletion:(id /* block */)a0;

@end
