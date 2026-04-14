@class NSView, PMSafariAccountsViewController;

@interface _PasswordsPreferences_SwiftUI : PasswordsPreferences {
    PMSafariAccountsViewController *_accountsViewController;
}

@property (weak) NSView *containerView;
@property (nonatomic) BOOL shouldUseSourceListNavigationStyle;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })minSize;
- (void)willBeDisplayed;
- (void)moduleWillBeRemoved;
- (void)_installAccountsViewController;
- (void)_removeAccountsViewController;
- (void)openGeneratedPasswords;
- (void)openWithOTPAuthURL:(id)a0 onPageWithURL:(id)a1;
- (void)openWithPasswordManagerURL:(id)a0;

@end
