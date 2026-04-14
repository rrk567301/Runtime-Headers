@class NSArray, NSString, PMSafariAutoFillViewController;

@interface AutoFillPasswordManagerUICredentialPicker : SheetWithTableController <AutoFillCredentialPickerProtocol> {
    PMSafariAutoFillViewController *_autoFillViewController;
}

@property (copy, nonatomic) NSArray *domainHintStringsForPasswordSuggestions;
@property (copy, nonatomic) NSArray *serviceNameHintStringsForPasswordSuggestions;
@property (copy, nonatomic) NSString *suggestedDomainForNewAccount;
@property (nonatomic) BOOL bypassLockoutPolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)loadWindow;
- (void)_updateHintStrings;
- (void)presentAsChildOfView:(id)a0 completionHandler:(id /* block */)a1;
- (void)showSheetInWindow:(id)a0 forPurpose:(long long)a1 savedAccountStore:(id)a2 siteMetadataManager:(id)a3 autoFillQuirksManager:(id)a4 withCompletionHandler:(id /* block */)a5;

@end
