@class AuthorizationRequest;

@interface PasswordsExporter : NSObject {
    AuthorizationRequest *_authorizationRequest;
}

- (void).cxx_destruct;
- (void)exportPasswords;
- (void)_showSavePanelAttachedToWindow:(id)a0;
- (void)_showSavePanel;
- (void)_authenticateAndExportFromSavePanel:(id)a0;
- (void)exportPasswordsAttachedToWindow:(id)a0;
- (void)cancelExportAuthorizationRequestIfNecessary;

@end
