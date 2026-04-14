@interface Settings.SettingsExtensionHostViewController : NSObject <_EXHostViewControllerDelegate> {
    void /* unknown type, empty encoding */ viewController;
    void /* unknown type, empty encoding */ extensionProxies;
}

- (void).cxx_destruct;
- (id)init;
- (void)hostViewController:(id)a0 didBeginHosting:(id)a1;
- (void)hostViewController:(id)a0 didEndHosting:(id)a1 error:(id)a2;
- (void)hostViewControllerDidActivate:(id)a0;

@end
