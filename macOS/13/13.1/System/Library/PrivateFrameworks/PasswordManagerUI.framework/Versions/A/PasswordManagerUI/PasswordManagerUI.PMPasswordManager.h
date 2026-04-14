@interface PasswordManagerUI.PMPasswordManager : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ appState;
    void /* unknown type, empty encoding */ lastModifiedSavedAccount;
    void /* unknown type, empty encoding */ autoFillQuirksManager;
    void /* unknown type, empty encoding */ passwordWarningManager;
    void /* unknown type, empty encoding */ securityRecommendationsToAccounts;
    void /* unknown type, empty encoding */ iconController;
    void /* unknown type, empty encoding */ isIgnoringAccountStoreChangeNotifications;
    void /* unknown type, empty encoding */ cachedSavedAccounts;
}

- (void)accountStoreDidChange;

@end
