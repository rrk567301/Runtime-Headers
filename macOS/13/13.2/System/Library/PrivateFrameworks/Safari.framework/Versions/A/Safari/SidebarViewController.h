@class NSView, NSString, BookmarksSidebarViewController, SidebarContainerView, NSMenu, SidebarTopBarView, BookmarkFolderPickerMenuController, NSViewController, AnnotatedBookmarksSidebarViewController, ReadingListSidebarViewController;
@protocol SidebarContentFiltering, CustomKeyViewLoop, SidebarStateRestorationContext, SidebarContentViewController;

@interface SidebarViewController : NSViewController <SidebarTopBarViewDelegate, SafariViewDelegate, AnnotatedBookmarksSidebarViewControllerDelegate, BookmarksSidebarViewControllerDelegate, BookmarkFolderPickerMenuControllerDelegate, NSMenuDelegate> {
    NSViewController<SidebarContentViewController, CustomKeyViewLoop, SidebarContentFiltering> *_currentViewController;
    BOOL _sidebarHasBeenInitialized;
    SidebarContainerView *_containerView;
    NSView *_contentView;
    SidebarTopBarView *_topBarView;
    BookmarkFolderPickerMenuController *_pickerController;
    NSMenu *_bookmarkPickerMenu;
}

@property (retain, nonatomic) id currentSidebarModeIdentifier;
@property (retain, nonatomic) AnnotatedBookmarksSidebarViewController *annotatedBookmarksSidebarViewController;
@property (retain, nonatomic) BookmarksSidebarViewController *bookmarksSidebarViewController;
@property (retain, nonatomic) ReadingListSidebarViewController *readingListSidebarViewController;
@property (weak, nonatomic) id<SidebarStateRestorationContext> stateRestorationContext;
@property (readonly) BOOL bookmarksSidebarIsShowing;
@property (readonly) BOOL annotatedBookmarksIsShowing;
@property (readonly) BOOL bookmarksOutlineIsShowing;
@property (readonly) BOOL readingListSidebarIsShowing;
@property (readonly) BOOL socialLinksSidebarIsShowing;
@property (readonly, nonatomic) BOOL canSelectNextReadingListItem;
@property (readonly, nonatomic) BOOL canSelectPreviousReadingListItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerDefaults;
+ (double)savedSidebarWidth;
+ (void)saveSidebarWidth:(double)a0;
+ (BOOL)canShowReadingListSidebar;
+ (void)setDefaultSidebarViewMode:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)menuNeedsUpdate:(id)a0;
- (void)loadView;
- (void)viewDidAppear;
- (void)annotatedBookmarksSidebarViewController:(id)a0 didNavigateIntoFolder:(id)a1;
- (void)displayedFolderWasRemovedForAnnotatedBookmarksSidebarViewController:(id)a0;
- (void)bookmarkFolderPickerMenuController:(id)a0 didPickBookmarkFolder:(id)a1;
- (void)viewDidEndLiveResizeForDelegatingView:(id)a0;
- (id)childKeyViewsForDelegatingView:(id)a0;
- (id)accessibilityChildrenForDelegatingView:(id)a0;
- (void)bookmarksSidebarViewController:(id)a0 didNavigateIntoFolder:(id)a1;
- (void)setSidebarViewMode:(id)a0;
- (void)_activateViewControllerWithIdentifier:(id)a0;
- (void)_installViewForActiveMode;
- (void)_transitionToFolderHierarchy;
- (void)selectNextReadingListItem;
- (void)selectPreviousReadingListItem;
- (void)didSelectBackButtonInSidebarTopBarView:(id)a0;
- (void)sidebarTopBarView:(id)a0 selectedTabIdentifierDidChange:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bookmarksTopBarButtonFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })readingListTopBarButtonFrame;
- (void)updateSidebarSelection;
- (BOOL)isSidebarSearchField:(id)a0;
- (void)sidebarDidReveal;
- (id)_identifierToRestoreOnRevealForCurrentSidebarModeIdentifier:(id)a0;
- (void)sidebarWillOpen;
- (void)sidebarWillClose;
- (id)_currentReadingListSidebarViewController;
- (void)_updateTopBarViewBackButton;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_topBarButtonFrameForTabWithIdentifier:(id)a0;

@end
