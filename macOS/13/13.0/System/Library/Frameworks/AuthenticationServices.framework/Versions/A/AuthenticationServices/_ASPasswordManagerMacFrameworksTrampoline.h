@class BrowserDataImportUIController, PasswordsExporter;

@interface _ASPasswordManagerMacFrameworksTrampoline : NSObject {
    PasswordsExporter *_passwordsExporter;
    BrowserDataImportUIController *_passwordsImporter;
}

+ (void)requestAuthenticationForSharingAccountUsingAirDrop:(id)a0 withCompletionHandler:(id /* block */)a1;

- (void).cxx_destruct;
- (void)exportPasswordsAttachedToWindow:(id)a0;
- (void)exportPasswordsForAccounts:(id)a0 attachedToWindow:(id)a1;
- (void)cancelExportAuthorizationRequestIfNecessary;
- (void)importPasswordsFromCSVAnchoredToWindow:(id)a0 completionHandler:(id /* block */)a1;
- (void)cancelImportAuthorizationRequestIfNecessary;
- (id)_passwordsExporter;
- (id)_passwordsImporter;

@end
