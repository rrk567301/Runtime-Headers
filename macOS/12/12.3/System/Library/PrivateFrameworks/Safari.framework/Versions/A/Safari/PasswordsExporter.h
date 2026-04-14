@class AuthorizationRequest;

@interface PasswordsExporter : NSObject {
    AuthorizationRequest *_authorizationRequest;
}

- (void).cxx_destruct;
- (void)exportPasswords;
- (void)exportPasswordsForAccounts:(id)a0 attachedToWindow:(id)a1;
- (void)_showSavePanelForSavedAccounts:(id)a0 attachedToWindow:(id)a1;
- (void)_showSavePanel;
- (void)_authenticateAndExportSavedAccounts:(id)a0 fromSavePanel:(id)a1;
- (void)exportPasswordsAttachedToWindow:(id)a0;
- (void)cancelExportAuthorizationRequestIfNecessary;

@end
