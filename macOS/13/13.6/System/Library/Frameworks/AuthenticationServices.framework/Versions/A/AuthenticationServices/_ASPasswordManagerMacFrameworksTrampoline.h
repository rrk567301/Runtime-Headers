@class BrowserDataImportUIController, PasswordsExporter;

@interface _ASPasswordManagerMacFrameworksTrampoline : NSObject {
    PasswordsExporter *_passwordsExporter;
    BrowserDataImportUIController *_passwordsImporter;
}

+ (void)requestAuthenticationForSharingAccountUsingAirDrop:(id)a0 withCompletionHandler:(id /* block */)a1;

- (void).cxx_destruct;
- (id)_passwordsExporter;
- (id)_passwordsImporter;
- (void)cancelExportAuthorizationRequestIfNecessary;
- (void)cancelImportAuthorizationRequestIfNecessary;
- (void)exportPasswordsAttachedToWindow:(id)a0;
- (void)exportPasswordsForAccounts:(id)a0 attachedToWindow:(id)a1;
- (void)importPasswordsFromCSVAnchoredToWindow:(id)a0 completionHandler:(id /* block */)a1;

@end
