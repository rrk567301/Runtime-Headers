@interface ASCredentialRequestEnableICloudKeychainViewController : ASCredentialRequestPaneViewController {
    BOOL _canKeychainSyncBeEnabled;
}

- (void)viewDidLoad;
- (id)init;
- (void)_turnOnICloudKeychain;
- (id)initWithCanKeychainBeEnabled:(BOOL)a0;

@end
