@interface FIContainerController : FI_TBrowserContainerController

@property (nonatomic) BOOL historyDisabled;
@property (readonly, nonatomic) BOOL downloadsUbiquitousContents;
@property (nonatomic) unsigned long long mediaBrowserShownTypes;

+ (unsigned long long)_mediaBrowserTypeForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
+ (unsigned long long)_mediaBrowserTypeForTargetPath:(const void *)a0;
+ (BOOL)_isMediaBrowserNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
+ (BOOL)_isMediaBrowserInTargetPath:(const void *)a0;

- (BOOL)shouldEnableShareButton;
- (void)setViewStyle:(int)a0;
- (BOOL)allowsMultipleSelection;
- (BOOL)previewPanel:(id)a0 shouldShowOpenButtonForItem:(id)a1;
- (void)aboutToTearDown;
- (BOOL)canShare;
- (void)openQuickLookNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (BOOL)quickLookShouldShowOpenButtonForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (BOOL)shouldShowSidebarSplitter;
- (BOOL)canBrowseNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (BOOL)canDuplicateItems;
- (BOOL)canMoveItemsToTrash;
- (BOOL)shouldTypeSelectForEvent:(id)a0 withCurrentSearchString:(id)a1;
- (BOOL)urlIsDimmed:(id)a0;
- (BOOL)panelDisableNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (BOOL)allowsBrowsingPackages;
- (BOOL)nodeIsDimmed:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (BOOL)canSelectNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (BOOL)canClickDimmedNodes;
- (void)clickedOnDisabledNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)openSelection;
- (void)openLocation:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 origin:(struct shared_ptr<ISpawnOrigin> { struct ISpawnOrigin *x0; struct __shared_weak_count *x1; })a1;
- (void)cmdShowInFinder:(id)a0;
- (void)cmdToggleHideExtension:(id)a0;
- (void)searchWasChanged;
- (BOOL)inBrowseMode;
- (void)prefetchEnableStates:(const void *)a0;
- (BOOL)sidebarInitiallyVisible;
- (void)_replaceUnresolvedTarget:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 withTarget:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
- (void)setHidesSharedItems:(BOOL)a0;
- (BOOL)hidesSharedItems;
- (id)appCustomMenuItemsForNodes:(const void *)a0;
- (void)saveQuery:(BOOL)a0;
- (void)disableHistoryAndDoWork:(const void *)a0;
- (BOOL)shouldShowPathBarForTarget:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)addToHistory:(const void *)a0 windowState:(id)a1;
- (void)setAnimating:(BOOL)a0 expanded:(BOOL)a1;
- (struct TFENode { struct OpaqueNodeRef *x0; })sidebarTarget;
- (struct TFENodeVector { struct TFENode *x0; struct TFENode *x1; struct __compressed_pair<TFENode *, std::allocator<TFENode>> { struct TFENode *x0; } x2; })reduceRootedPath:(const void *)a0;
- (void)viewDidSyncToDataSource:(const void *)a0;
- (void)gotoHistoryEntry:(id)a0;
- (void)backForwardCommon:(BOOL)a0;
- (void)searchFieldTextChanged;
- (void)historyChanged;
- (void)setPreferredViewStyle:(int)a0;
- (void)destroyBrowserView:(BOOL)a0;
- (Class)browserClassForViewStyle:(int)a0;
- (id)gutsController;
- (BOOL)nodeIsOurICloud:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (BOOL)_updateViewStyle:(int)a0;
- (void)addCurrentTargetPathToHistory;
- (struct TFENode { struct OpaqueNodeRef *x0; })_nodeForLastMediaBrowserMode;
- (id)_historySearchTemplateMenu;
- (void)searchTextChanged:(id)a0;
- (BOOL)validateToggleHideExtension:(id)a0;
- (BOOL)validateShowInFinder:(id)a0;

@end
