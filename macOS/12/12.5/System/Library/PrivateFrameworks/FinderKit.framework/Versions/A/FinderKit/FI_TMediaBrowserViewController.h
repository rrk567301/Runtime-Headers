@class ILMediaBrowserView, NSString, NSLayoutConstraint;

@interface FI_TMediaBrowserViewController : FI_TBrowserViewController {
    unsigned long long _browserType;
    struct NSEdgeInsets { double top; double left; double bottom; double right; } _contentInsets;
    NSLayoutConstraint *_bottomConstraint;
}

@property (readonly) ILMediaBrowserView *mediaBrowserView;
@property (copy, nonatomic) NSString *searchNSString;

- (unsigned long long)itemCount;
- (void).cxx_destruct;
- (void)loadView;
- (struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })searchString;
- (int)viewStyle;
- (id)selectedURLs;
- (void)aboutToTearDown;
- (void)configureView;
- (BOOL)containsNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)stopEditing:(BOOL)a0;
- (void)updateSTFEditorLocation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (BOOL)nodeIsSelected:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)reloadIconsInView;
- (void)dataSourceChanged:(const void *)a0;
- (void)setSelectedNodes:(const void *)a0 byExtendingSelection:(BOOL)a1;
- (void)privateBindSettings;
- (BOOL)urlIsDimmed:(id)a0;
- (void)updateSubviewContentInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)deselectAllNodes;
- (unsigned long long)indexForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)revealNodes:(const void *)a0 select:(BOOL)a1;
- (void)getVisibleNodes:(void *)a0;
- (unsigned long long)selectedNodesCount;
- (unsigned long long)getSelectedNodesFromView:(void *)a0 upTo:(unsigned long long)a1;
- (void)selectAllNodes;
- (BOOL)startEditingWithNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 renameOp:(id)a1;
- (struct TFENodeVector { struct TFENode *x0; struct TFENode *x1; struct __compressed_pair<TFENode *, std::allocator<TFENode>> { struct TFENode *x0; } x2; })typeSelectCandidateNodes;
- (id)indexSetForNodes:(const void *)a0;
- (id)searchNSString;
- (BOOL)mediaBrowserView:(id)a0 shouldSelectMediaObject:(id)a1;
- (id)mediaBrowserView:(id)a0 attributedDisplayNameForMediaObject:(id)a1;
- (BOOL)mediaBrowserView:(id)a0 shouldPreviewDoubleClickedItem:(id)a1;
- (void)mediaBrowserViewSelectionDidChange:(id)a0;
- (void)setSearchNSString:(id)a0;

@end
