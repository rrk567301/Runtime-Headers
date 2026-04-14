@class NSMenu, BrowserWindowController, NSString;

@interface WebsiteContextMenuBuilder : NSObject

@property (nonatomic) BOOL isFolder;
@property (nonatomic) BOOL usesPrivateBrowsing;
@property (nonatomic) BOOL shouldAutomaticallyOpenInTabs;
@property (nonatomic) BOOL canOpenInTabs;
@property (nonatomic, getter=isShowingPreviewText) BOOL showingPreviewText;
@property (retain, nonatomic) NSMenu *moveToBookmarkFolderPickerSubmenu;
@property (copy, nonatomic) id /* block */ openHandler;
@property (copy, nonatomic) id /* block */ openInTabsHandler;
@property (copy, nonatomic) id /* block */ replaceTabsHandler;
@property (copy, nonatomic) id /* block */ cleanUpByNameHandler;
@property (copy, nonatomic) id /* block */ cleanUpByAddressHandler;
@property (nonatomic) unsigned long long numberOfChildren;
@property (copy, nonatomic) id /* block */ openInNewTabHandler;
@property (copy, nonatomic) id /* block */ openInNewWindowHandler;
@property (copy, nonatomic) id /* block */ addToFavoritesHandler;
@property (nonatomic) unsigned long long sourceForSuggestLessFromDataSourceItem;
@property (copy, nonatomic) id /* block */ suggestLessFromDataSourceHandler;
@property (copy, nonatomic) id /* block */ dontSuggestFromWebsiteHandler;
@property (copy, nonatomic) id /* block */ addToReadingListHandler;
@property (copy, nonatomic) id /* block */ renameHandler;
@property (copy, nonatomic) id /* block */ showFolderContentsHandler;
@property (copy, nonatomic) id /* block */ editPreviewTextHandler;
@property (copy, nonatomic) id /* block */ showPreviewTextHandler;
@property (copy, nonatomic) id /* block */ editAddressHandler;
@property (copy, nonatomic) id /* block */ automaticallyReplaceTabsHandler;
@property (copy, nonatomic) id /* block */ showInFolderHandler;
@property (copy, nonatomic) id /* block */ copyHandler;
@property (copy, nonatomic) id /* block */ deleteHandler;
@property (copy, nonatomic) id /* block */ createFolderHandler;
@property (copy, nonatomic) id /* block */ reportSiteSuggestionIssueHandler;
@property (retain, nonatomic) BrowserWindowController *browserWindowController;
@property (copy, nonatomic) id /* block */ tabGroupMenuHandler;
@property (copy, nonatomic) NSString *preferredTabGroupTitle;
@property (nonatomic) BOOL shouldStayInCurrentTabGroup;

- (void).cxx_destruct;
- (id)buildBookmarkMenu;
- (id)_openInNewTabMenuItem;
- (id)_openInNewWindowMenuItem;
- (void)_appendOpenInNewTabMenuItemToMenu:(id)a0;
- (void)_appendOpenInNewWindowMenuItemToMenu:(id)a0;
- (id)buildOpenInTabGroupMenu;
- (void)_appendSeparatorIfPossibleToMenu:(id)a0;
- (id)_renameMenuItem;
- (id)_editAddressMenuItem;
- (id)_addToFavoritesMenuItem;
- (id)_addToReadingListMenuItem;
- (id)_deleteMenuItem;

@end
