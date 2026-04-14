@interface ASCredentialRequestEnableICloudKeychainViewController : ASCredentialRequestPaneViewController {
    BOOL _canKeychainSyncBeEnabled;
}

- (id)init;
- (void)viewDidLoad;
- (void)_turnOnICloudKeychain;
- (id)initWithCanKeychainBeEnabled:(BOOL)a0;

@end
