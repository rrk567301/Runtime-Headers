@interface FIBrowseBySizeContainerController : FI_TBrowserContainerController {
    struct vector<TString, std::allocator<TString>> { struct TString *__begin_; struct TString *__end_; struct __compressed_pair<TString *, std::allocator<TString>> { struct TString *__value_; } __end_cap_; } _excludedPaths;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)allowsMultipleSelection;
- (BOOL)quickLookShouldShowOpenButtonForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)commonFinishInitialization:(id)a0;
- (void)configureAccessoryViews:(id)a0;
- (BOOL)shouldShowSidebarSplitter;
- (BOOL)canBrowseNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (BOOL)canDuplicateItems;
- (BOOL)canRenameItems;
- (BOOL)canMoveItemsToTrash;
- (BOOL)shouldTypeSelectForEvent:(id)a0 withCurrentSearchString:(id)a1;
- (BOOL)urlIsDimmed:(id)a0;
- (BOOL)panelDisableNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (BOOL)allowsBrowsingPackages;
- (void)setExcludedPaths:(const void *)a0;
- (BOOL)nodeIsExcluded:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (BOOL)nodeIsDimmed:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (BOOL)canSelectNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (BOOL)canClickDimmedNodes;
- (void)clickedOnDisabledNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)openSelection;
- (void)openLocation:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 origin:(struct shared_ptr<ISpawnOrigin> { struct ISpawnOrigin *x0; struct __shared_weak_count *x1; })a1;
- (void)cmdShowInFinder:(id)a0;
- (id)nodeViewSettings;

@end
