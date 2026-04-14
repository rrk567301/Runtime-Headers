@interface PasswordManagerUI.PMPasswordManagerState : NSObject {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_oneTimeSharingService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_passwordsImporterExporter;
    void /* unknown type, empty encoding */ accountIconController;
    void /* unknown type, empty encoding */ _accounts;
    void /* unknown type, empty encoding */ _hasUnacknowledgedHighPriorityWarnings;
    void /* unknown type, empty encoding */ _highPrioritySecurityRecommendations;
    void /* unknown type, empty encoding */ _standardPrioritySecurityRecommendations;
    void /* unknown type, empty encoding */ _hiddenSecurityRecommendations;
    void /* unknown type, empty encoding */ _loadedSecurityRecommendations;
    void /* unknown type, empty encoding */ _accountToPresent;
    void /* unknown type, empty encoding */ selectedItems;
    void /* unknown type, empty encoding */ cachedSelectedAccounts;
    void /* unknown type, empty encoding */ _filteredAccounts;
    void /* unknown type, empty encoding */ _mainNavigationPath;
    void /* unknown type, empty encoding */ _searchText;
    void /* unknown type, empty encoding */ _otpauthURLToOpen;
    void /* unknown type, empty encoding */ _shouldAutofillPasswords;
    void /* unknown type, empty encoding */ _otpauthHandlers;
    void /* unknown type, empty encoding */ _selectedOtpauthHandler;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
