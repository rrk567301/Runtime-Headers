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
    NSLayoutConstraint *_titleAndReturnButtonViewTopConstraint;
    NSTextField *_viewLabel;
    NSTextField *_tabGroupLabel;
}

@property (class, readonly, nonatomic) char canShowReadingListSidebar;
@property (class, readonly, nonatomic) double savedSidebarWidth;

@property (weak, nonatomic) id<SidebarStateRestorationContext> stateRestorationContext;
@property (weak, nonatomic) id<LibrarySidebarNavigationViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *sidebarViewMode;
@property (nonatomic) long long unifiedSidebarMode;
@property (readonly, nonatomic) char bookmarksSidebarIsShowing;
@property (readonly, nonatomic) char bookmarksOutlineIsShowing;
@property (readonly, nonatomic) char readingListSidebarIsShowing;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bookmarksTargetFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } readingListTargetFrame;
@property (readonly, nonatomic) BookmarksSidebarViewController *bookmarksSidebarViewController;
@property (readonly, nonatomic) char canSelectNextReadingListItem;
@property (readonly, nonatomic) char canSelectPreviousReadingListItem;
@property (readonly, nonatomic) char isEditingSelectedGroupTitle;
@property (readonly, nonatomic) char isSelectedTabGroupTextFieldFirstResponder;
@property (readonly, nonatomic) char expandedStateOfTabGroupHeader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *lastDisplayedSidebarBookmarkListUUID;

+ (void)registerDefaults;
+ (void)saveSidebarWidth:(double)a0;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidAppear;
- (void)viewDidLayout;
- (void)viewDidLoad;
- (void)updateTabGroups;
- (void)_activateViewControllerWithIdentifier:(long long)a0;
- (id)_annotatedBookmarksSidebarViewController;
- (id)_browserWindowController;
- (void)_goBackToPreviousMode;
- (void)_installViewForActiveMode;
- (id)_libraryViewController;
- (void)_makeContainerViewIfNecessary;
- (id)_makeReturnButtonIfNecessary;
- (void)_makeReturnViewIfNecessary;
- (id)_makeTitleAndSubtitleView;
- (id)_readingListSidebarViewController;
- (id)_selectedTabGroup;
- (void)_transitionToFolderHierarchy;
- (void)_updateTabGroupLabelVisibilityWithTabGroup:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_viewLabelTargetFrame;
- (char)annotatedBookmarksIsShowing;
- (void)annotatedBookmarksSidebarViewController:(id)a0 didNavigateIntoFolder:(id)a1;
- (void)bookmarksSidebarViewController:(id)a0 didNavigateIntoFolder:(id)a1;
- (void)displayedFolderWasRemovedForAnnotatedBookmarksSidebarViewController:(id)a0;
- (void)expandTabGroupHeader;
- (char)isCurrentViewLibraryViewController:(id)a0;
- (char)lastExpandedTabGroupHeaderState:(id)a0;
- (void)libraryViewController:(id)a0 changeCurrentUnifiedSidebarMode:(long long)a1;
- (char)libraryViewControllerIsShowingCloudTabs:(id)a0;
- (char)libraryViewControllerIsShowingSharedWithYou:(id)a0;
- (void)libraryViewControllerNavigateToCloudTabs:(id)a0;
- (void)libraryViewControllerNavigateToSharedWithYou:(id)a0;
- (void)libraryViewControllerNavigateToTabView:(id)a0;
- (id)menuForSidebarTabWithBrowserTabViewItem:(id)a0 event:(id)a1;
- (void)selectAndEditTabGroupSoon:(id)a0;
- (void)selectNextReadingListItem;
- (void)selectPreviousReadingListItem;
- (void)selectSharedWithYou;
- (void)selectTabGroupWithUUID:(id)a0;
- (void)updateLibraryViewControllerTopMarginConstant:(double)a0;
- (void)updateLocalTabGroupTitle;
- (void)updateReturnViewVisibility;
- (void)updateTabGroupTabs:(id)a0 inParentTabGroup:(id)a1;
- (void)updateTabSelectionIfNeeded;

@end
