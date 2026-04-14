@interface _TtC29LocalAuthenticationEmbeddedUIP33_817226E5434289A0A61FA01D19921EAF29LAAuthenticationSheetDelegate : NSObject <LACUIAuthenticationSheetViewModelDelegate> {
    void /* unknown type, empty encoding */ sheetResult;
}

- (void).cxx_destruct;
- (id)init;
- (void)authenticationSheetViewModel:(id)a0 didFinishWithResult:(id)a1 error:(id)a2;
- (void)authenticationSheetViewModel:(id)a0 didReceiveUnverifiedCredentialsForUserID:(unsigned int)a1 mechanism:(long long)a2 completion:(id /* block */)a3;
- (void)authenticationSheetViewModel:(id)a0 didSelectUserName:(id)a1;
- (void)authenticationSheetViewModelDidClearPassword:(id)a0;
- (void)authenticationSheetViewModelDidRejectCredential:(id)a0;
- (void)authenticationSheetViewModelDidSubmit:(id)a0;
- (void)authenticationSheetViewModelDidUpdate:(id)a0;
- (BOOL)authenticationSheetViewModelHasCredentialVerificationDelegate:(id)a0;
- (BOOL)authenticationSheetViewModelIsSheetFocused:(id)a0;
- (id)authenticationSheetViewModelSelectedUserName:(id)a0;
- (BOOL)authenticationSheetViewModelShouldSkipUserCredentialVerification:(id)a0;

@end
