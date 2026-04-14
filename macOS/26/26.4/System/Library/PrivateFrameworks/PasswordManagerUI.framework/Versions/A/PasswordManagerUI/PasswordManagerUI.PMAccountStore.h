@interface PasswordManagerUI.PMAccountStore : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ newAccountSubject;
    void /* unknown type, empty encoding */ accountUpdatedSubject;
    void /* unknown type, empty encoding */ _inProgressBulkOperation;
    void /* unknown type, empty encoding */ _loadedAccounts;
    void /* unknown type, empty encoding */ _hasLoadedAccounts;
    void /* unknown type, empty encoding */ _accounts;
    void /* unknown type, empty encoding */ accountsByID;
    void /* unknown type, empty encoding */ _accountsInPersonalKeychain;
    void /* unknown type, empty encoding */ _accountsByGroupID;
    void /* unknown type, empty encoding */ _accountsWithNeverSaveMarker;
    void /* unknown type, empty encoding */ _accountsWithPasskeys;
    void /* unknown type, empty encoding */ _accountsWithTOTPGenerators;
    void /* unknown type, empty encoding */ _showHiddenSecurityRecommendations;
    void /* unknown type, empty encoding */ _recentlyDeletedAccounts;
    void /* unknown type, empty encoding */ recentlyDeletedAccountsByID;
    void /* unknown type, empty encoding */ _recentlyDeletedAccountsInPersonalKeychain;
    void /* unknown type, empty encoding */ _recentlyDeletedAccountsByGroupID;
    void /* unknown type, empty encoding */ _hasUnacknowledgedHighPriorityWarnings;
    void /* unknown type, empty encoding */ _prioritizedSecurityRecommendations;
    void /* unknown type, empty encoding */ _hiddenSecurityRecommendations;
    void /* unknown type, empty encoding */ _loadedSecurityRecommendations;
    void /* unknown type, empty encoding */ lastAddedAccountID;
    void /* unknown type, empty encoding */ lastModifiedAccounts;
    void /* unknown type, empty encoding */ accountStore;
    void /* unknown type, empty encoding */ queueForLoadingAccounts;
    void /* unknown type, empty encoding */ autoFillQuirksManager;
    void /* unknown type, empty encoding */ passwordWarningManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_knownWebBrowserManager;
    void /* unknown type, empty encoding */ isIgnoringAccountStoreChangeNotifications;
    void /* unknown type, empty encoding */ cachedSavedAccounts;
    void /* unknown type, empty encoding */ cachedAccountsWithNeverSaveMarker;
    void /* unknown type, empty encoding */ cachedWarnings;
    void /* unknown type, empty encoding */ cachedRecentlyDeletedSavedAccounts;
    void /* unknown type, empty encoding */ cachedAccountsWithTOTPGenerators;
}

- (void)accountStoreDidChange;

@end
