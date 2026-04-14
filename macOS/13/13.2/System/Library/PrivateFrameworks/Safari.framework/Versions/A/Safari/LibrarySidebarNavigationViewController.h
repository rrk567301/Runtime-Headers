@class NSView, NSString, BookmarksSidebarViewController, LibraryViewController, NSTextField, NSStackView, NSViewController, AnnotatedBookmarksSidebarViewController, ReadingListSidebarViewController, NSLayoutConstraint;
@protocol CustomKeyViewLoop, SidebarStateRestorationContext, LibrarySidebarNavigationViewControllerDelegate, SidebarContentViewController;

@interface LibrarySidebarNavigationViewController : NSViewController <SafariViewDelegate, LibraryViewControllerDelegate, BookmarksSidebarViewControllerDelegate, AnnotatedBookmarksSidebarViewControllerDelegate, SidebarStateRestorationContext> {
    NSViewController<CustomKeyViewLoop, SidebarContentViewController> *_currentViewController;
    BookmarksSidebarViewController *_bookmarksSidebarViewController;
    AnnotatedBookmarksSidebarViewController *_annotatedBookmarksSidebarViewController;
    ReadingListSidebarViewController *_readingListSidebarViewController;
    LibraryViewController *_libraryViewController;
    NSStackView *_containerView;
    NSView *_contentView;
    NSView *_topSidebarView;
    double _topBarViewHeight;
    NSLayoutConstraint *_titleAndReturnButtonViewTopConstraint;
    NSLayoutConstraint *_topBarHeightConstraint;
    NSTextField *_viewLabel;
    NSTextField *_tabGroupLabel;
}

@property (class, readonly, nonatomic) BOOL canShowReadingListSidebar;
@property (class, readonly, nonatomic) double savedSidebarWidth;

@property (weak, nonatomic) id<SidebarStateRestorationContext> stateRestorationContext;
@property (weak, nonatomic) id<LibrarySidebarNavigationViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *sidebarViewMode;
@property (nonatomic) long long unifiedSidebarMode;
@property (readonly, nonatomic) BOOL bookmarksSidebarIsShowing;
@property (readonly, nonatomic) BOOL bookmarksOutlineIsShowing;
@property (readonly, nonatomic) BOOL readingListSidebarIsShowing;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bookmarksTargetFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } readingListTargetFrame;
@property (readonly, nonatomic) BookmarksSidebarViewController *bookmarksSidebarViewController;
@property (readonly, nonatomic) BOOL canSelectNextReadingListItem;
@property (readonly, nonatomic) BOOL canSelectPreviousReadingListItem;
@property (readonly, nonatomic) BOOL isEditingSelectedGroupTitle;
@property (readonly, nonatomic) BOOL expandedStateOfTabGroupHeader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *lastDisplayedSidebarBookmarkListUUID;

+ (void)registerDefaults;
+ (void)saveSidebarWidth:(double)a0;

- (void).cxx_destruct;
- (void)viewDidLayout;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewDidAppear;
- (id)_browserWindowController;
- (void)annotatedBookmarksSidebarViewController:(id)a0 didNavigateIntoFolder:(id)a1;
- (void)displayedFolderWasRemovedForAnnotatedBookmarksSidebarViewController:(id)a0;
- (void)_goBackToPreviousMode;
- (void)libraryViewController:(id)a0 changeCurrentUnifiedSidebarMode:(long long)a1;
- (void)libraryViewControllerNavigateToSharedWithYou:(id)a0;
- (BOOL)libraryViewControllerIsShowingSharedWithYou:(id)a0;
- (void)libraryViewControllerNavigateToCloudTabs:(id)a0;
- (void)libraryViewControllerNavigateToTabView:(id)a0;
- (BOOL)libraryViewControllerIsShowingCloudTabs:(id)a0;
- (id)menuForSidebarTabWithBrowserTabViewItem:(id)a0 event:(id)a1;
- (BOOL)lastExpandedTabGroupHeaderState:(id)a0;
- (BOOL)isCurrentViewLibraryViewController:(id)a0;
- (void)bookmarksSidebarViewController:(id)a0 didNavigateIntoFolder:(id)a1;
- (void)updateLibraryViewControllerTopMarginConstant:(double)a0;
- (void)_makeReturnViewIfNecessary;
- (id)_makeReturnButtonIfNecessary;
- (id)_makeTitleAndSubtitleView;
- (void)_makeContainerViewIfNecessary;
- (void)_activateViewControllerWithIdentifier:(long long)a0;
- (void)_updateReturnViewVisibility;
- (void)_updateTabGroupLabelVisibilityWithTabGroup:(id)a0;
- (id)_selectedTabGroup;
- (void)_installViewForActiveMode;
- (id)_annotatedBookmarksSidebarViewController;
- (BOOL)annotatedBookmarksIsShowing;
- (void)_transitionToFolderHierarchy;
- (id)_readingListSidebarViewController;
- (void)selectNextReadingListItem;
- (void)selectPreviousReadingListItem;
- (id)_libraryViewController;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_viewLabelTargetFrame;
- (void)updateTabGroups;
- (void)selectTabGroupWithUUID:(id)a0;
- (void)startEditingSelectedGroupTitle;
- (void)updateLocalTabGroupTitle;
- (void)selectSharedWithYou;
- (void)expandTabGroupHeader;

@end
