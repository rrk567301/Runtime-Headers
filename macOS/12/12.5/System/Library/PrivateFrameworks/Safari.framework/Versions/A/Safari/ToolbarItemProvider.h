@class CombinedSidebarTabGroupToolbarButton, ToolbarDownloadsButton, ButtonPlus, BrowserToolbarItem, NSSeparatorToolbarItem;

@interface ToolbarItemProvider : NSObject

@property (retain, nonatomic) BrowserToolbarItem *backForwardItem;
@property (retain, nonatomic) BrowserToolbarItem *autoFillItem;
@property (retain, nonatomic) BrowserToolbarItem *topSitesItem;
@property (retain, nonatomic) BrowserToolbarItem *homeItem;
@property (retain, nonatomic) BrowserToolbarItem *unifiedFieldContainerItem;
@property (retain, nonatomic) BrowserToolbarItem *textSizeItem;
@property (retain, nonatomic) BrowserToolbarItem *printItem;
@property (retain, nonatomic) BrowserToolbarItem *toolbarNewTabItem;
@property (retain, nonatomic) BrowserToolbarItem *sidebarItem;
@property (retain, nonatomic) BrowserToolbarItem *historyItem;
@property (retain, nonatomic) BrowserToolbarItem *mailPageItem;
@property (retain, nonatomic) BrowserToolbarItem *showDownloadsItem;
@property (retain, nonatomic) BrowserToolbarItem *showWebInspectorItem;
@property (retain, nonatomic) BrowserToolbarItem *bookmarksBarItem;
@property (retain, nonatomic) BrowserToolbarItem *perSitePreferencesItem;
@property (retain, nonatomic) BrowserToolbarItem *reloadPageItem;
@property (retain, nonatomic) BrowserToolbarItem *contextFeedbackItem;
@property (retain, nonatomic) BrowserToolbarItem *cloudTabsItem;
@property (retain, nonatomic) BrowserToolbarItem *shareItem;
@property (retain, nonatomic) BrowserToolbarItem *unifiedTabBarToolbarItem;
@property (retain, nonatomic) BrowserToolbarItem *unifiedTabBarCustomizeToolbarItem;
@property (retain, nonatomic) BrowserToolbarItem *privacyReportItem;
@property (retain, nonatomic) BrowserToolbarItem *backForwardCustomizeItem;
@property (retain, nonatomic) BrowserToolbarItem *unifiedFieldContainerCustomizeItem;
@property (retain, nonatomic) BrowserToolbarItem *textSizeCustomizeItem;
@property (retain, nonatomic) ToolbarDownloadsButton *showDownloadsButton;
@property (retain, nonatomic) BrowserToolbarItem *combinedSidebarTabGroupItem;
@property (retain, nonatomic) BrowserToolbarItem *combinedSidebarTabGroupCustomizeItem;
@property (retain, nonatomic) BrowserToolbarItem *combinedSidebarTabGroupItemForSidebarOnlyToolbar;
@property (retain, nonatomic) BrowserToolbarItem *sidebarItemForSidebarOnlyToolbar;
@property (retain, nonatomic) NSSeparatorToolbarItem *sidebarSeparatorItem;
@property (retain, nonatomic) CombinedSidebarTabGroupToolbarButton *combinedSidebarTabGroupToolbarButton;
@property (retain, nonatomic) NSSeparatorToolbarItem *sidebarSeparatorItemForSidebarOnlyToolbar;
@property (retain, nonatomic) CombinedSidebarTabGroupToolbarButton *combinedSidebarTabGroupToolbarButtonForSidebarOnlyToolbar;
@property (retain, nonatomic) ButtonPlus *contextFeedbackButton;

- (void).cxx_destruct;

@end
