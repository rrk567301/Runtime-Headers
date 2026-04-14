@class NSString, FI_TShrinkToFitController;

@interface FI_TIconOrGalleryCollectionView : FI_TCollectionView <TShrinkToFitDelegateProtocol> {
    FI_TShrinkToFitController *_stfController;
    struct TFENode { struct OpaqueNodeRef *fNodeRef; } _nodeBeingEdited;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (void).cxx_destruct;
- (const struct TFENode { struct OpaqueNodeRef *x0; } *)nodeBeingEdited;
- (void)shrinkToFitTextViewAboutToClose;
- (BOOL)startEditingWithNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 runNewFolderAnimation:(BOOL)a1 renameOp:(id)a2 afterDelay:(BOOL)a3;
- (id)hitTestInIconViewIcon:(const struct CGPoint { double x0; double x1; } *)a0;
- (id)hitTestInIconViewIconOrText:(const struct CGPoint { double x0; double x1; } *)a0;
- (id)hitTestInIconViewText:(const struct CGPoint { double x0; double x1; } *)a0;
- (id)iconOrGalleryCollectionViewDelegate;
- (struct pair<CGRect, double> { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; double x1; })maxSTFEditorGlobalFrameAndBaselineForIconView:(id)a0;
- (BOOL)shrinkToFitTextViewAboutToOpen;
- (void)shrinkToFitTextViewEditingComplete:(id)a0;
- (void)stopEditing:(BOOL)a0;
- (void)updateSTFEditorLocation;
- (id)viewAtLocalPoint:(const struct CGPoint { double x0; double x1; } *)a0;

@end
