@class NSTextField, NSView, NSScrollView, NSString, BrowserViewController, NSStackView, SafariWebExtension, NSSet, NSArray, WBSFaviconRequestsController, NSButton, NSTableView;
@protocol SafariWebExtensionPerSiteAccessViewControllerDelegate;

@interface SafariWebExtensionPerSiteAccessViewController : NSViewController <NSTableViewDataSource, NSTableViewDelegate> {
    BrowserViewController *_browserViewController;
    SafariWebExtension *_webExtension;
    NSSet *_domains;
    NSArray *_domainsToDisplay;
    NSString *_apiNamesDebugString;
    WBSFaviconRequestsController *_faviconRequestsController;
    BOOL _includeDenyButton;
}

@property (weak) NSTextField *titleTextField;
@property (weak) NSTextField *descriptionTextField;
@property (weak) NSButton *allowAlwaysButton;
@property (weak) NSButton *allowForOneDayButton;
@property (weak) NSButton *allowOnAllWebsitesButton;
@property (weak) NSButton *denyButton;
@property (weak) NSView *dividerAboveDomains;
@property (weak) NSStackView *domainsDisclosureButtonStackView;
@property (weak) NSScrollView *domainsScrollView;
@property (weak) NSTableView *domainsTableView;
@property (weak) NSView *dividerBelowDomains;
@property (weak, nonatomic) id<SafariWebExtensionPerSiteAccessViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)viewDidLoad;
- (id)initWithWebExtension:(id)a0 targetBrowserViewController:(id)a1 additionalURLForApproval:(id)a2;
- (void)_didSelectAccess:(long long)a0;
- (void)allowAlwaysClicked:(id)a0;
- (void)allowOneDayClicked:(id)a0;
- (void)allowOnAllWebsitesClicked:(id)a0;
- (void)denyButtonClicked:(id)a0;

@end
