@interface ASCredentialRequestEnableICloudKeychainViewController : ASCredentialRequestPaneViewController {
    char _canKeychainSyncBeEnabled;
}

- (id)init;
- (void)viewDidLoad;
- (void)_turnOnICloudKeychain;

@end
