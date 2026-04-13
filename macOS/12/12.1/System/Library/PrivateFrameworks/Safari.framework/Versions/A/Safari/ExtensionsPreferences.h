@class NSTextField, NSString, NSTableView, NSView, WKWebView, NSOcclusionDetectionView, SLSecureCursorAssertion, NSMutableArray, NSLayoutConstraint, NSImageView, NSButton, NSBox;

@interface ExtensionsPreferences : PreferencesModule <WKScriptMessageHandlerWithReply, NSTableViewDataSource, NSTableViewDelegate> {
    NSBox *_listBox;
    NSTableView *_listTableView;
    NSBox *_detailsBox;
    NSBox *_emptyBox;
    NSBox *_detailsSeperator;
    NSImageView *_detailsIconView;
    NSTextField *_detailsNameLabel;
    NSTextField *_detailsDescriptionLabel;
    NSButton *_preferencesButton;
    NSView *_permissionsContainer;
    NSButton *_moreExtensionsButton;
    NSView *_extensionsEnabledView;
    NSView *_extensionsDisabledView;
    WKWebView *_permissionsWebView;
    NSMutableArray *_orderedExtensions;
    BOOL _didAwakeFromNib;
    BOOL _dontRememberExtensionSelectionChanges;
    double _previousEnabledHeight;
    BOOL _usingDisabledHeight;
    NSLayoutConstraint *_heightConstraint;
    SLSecureCursorAssertion *_cursorAssertion;
    NSOcclusionDetectionView *_occlusionDetectionView;
    BOOL _windowIsOccluded;
    id _occlusionValidationToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)tableViewSelectionDidChange:(id)a0;
- (id)imageForPreferenceNamed:(id)a0;
- (void)moduleWillBeRemoved;
- (void)willBeDisplayed;
- (void)moduleWasInstalled;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1 replyHandler:(id /* block */)a2;
- (id)safariHelpAnchor;
- (id /* block */)_extensionComparator;
- (void)selectExtensionWithIdentifier:(id)a0;
- (void)_extensionWasAdded:(id)a0;
- (void)_extensionWasRemoved:(id)a0;
- (void)_extensionEnabledStateDidChange:(id)a0;
- (void)_extensionPermissionDidChange:(id)a0;
- (void)_extensionErrorOccurred:(id)a0;
- (void)_extensionsWereDisabled:(id)a0;
- (void)_extensionsWereEnabled:(id)a0;
- (void)_loadExtensionsIfNeeded;
- (void)_updateViewsForDisabledStateWithAnimation:(BOOL)a0;
- (void)_prepareSecureCursorAssertion;
- (void)_prepareOcclusionDetectionView;
- (id)_selectedExtensionWrapper;
- (void)_updatePreferencesButtonVisibility;
- (void)_updatePermissionsAndErrorsWithCompletionHandler:(id /* block */)a0;
- (void)_editWebsites;
- (void)_allowOnAllWebsites;
- (void)_updatePermissionsWithCompletionHandler:(id /* block */)a0;
- (void)_updateErrorsWithCompletionHandler:(id /* block */)a0;
- (void)_updateSecureAssertionState:(id)a0;
- (void)_viewDidBecomeOccluded:(id)a0;
- (void)_viewDidBecomeUnoccluded:(id)a0;
- (void)openExtensionsGallery:(id)a0;
- (void)uninstallExtension:(id)a0;
- (void)showPreferencesPage:(id)a0;
- (void)toggleExtensionEnabled:(id)a0;
- (BOOL)canEnableExtensions;

@end
