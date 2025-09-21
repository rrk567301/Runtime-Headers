@class NSString, NSObject;
@protocol TCollectionViewDelegateProtocol;

@interface FI_TCollectionView : NSCollectionView <TMarkTornDown> {
    struct TNSWeakPtr<NSObject<TCollectionViewDelegateProtocol>> { NSObject<TCollectionViewDelegateProtocol> *fWeakObject; } _weakCollectionViewDelegate;
}

@property (weak, nonatomic) NSObject<TCollectionViewDelegateProtocol> *collectionViewDelegate;
@property (nonatomic) BOOL suppressInputContext;
@property (getter=isTornDown) BOOL tornDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (unsigned long long)numberOfItems;
- (void)viewWillMoveToWindow:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)mouseDragged:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)keyDown:(id)a0;
- (void)layout;
- (void)viewDidMoveToWindow;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void)viewDidMoveToSuperview;
- (void)viewDidChangeBackingProperties;
- (void)initCommon;
- (void).cxx_destruct;
- (void)rightMouseDown:(id)a0;
- (void)draggingExited:(id)a0;
- (BOOL)_allowsDropOnBackground;
- (BOOL)_collectionViewSupports10_11Features;
- (void)concludeDragOperation:(id)a0;
- (void)draggingEnded:(id)a0;
- (unsigned long long)draggingEntered:(id)a0;
- (unsigned long long)draggingUpdated:(id)a0;
- (id)inputContext;
- (BOOL)performDragOperation:(id)a0;
- (BOOL)prepareForDragOperation:(id)a0;
- (void)quickLookWithEvent:(id)a0;
- (void)updateDraggingItemsForDrag:(id)a0;
- (void)viewWillMoveToSuperview:(id)a0;
- (BOOL)wantsPeriodicDraggingUpdates;
- (void)aboutToTearDown;
- (unsigned long long)draggingEntered:(id)a0 dropTargetView:(id)a1;
- (unsigned long long)draggingUpdated:(id)a0 dropTargetView:(id)a1;
- (void)concludeDragOperation:(id)a0 dropTargetView:(id)a1;
- (void)draggingEnded:(id)a0 dropTargetView:(id)a1;
- (void)draggingExited:(id)a0 dropTargetView:(id)a1;
- (void)enumerateAvailableItemsUsingBlock:(const void *)a0;
- (id)iconViewForIndexPath:(id)a0;
- (id)iconViewForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (id)indexPathForIconView:(id)a0;
- (id)indexPathForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (id)indexPathForSectionIndex:(unsigned long long)a0;
- (id)indexPathsForNodes:(const void *)a0 upTo:(unsigned long long)a1;
- (struct TFENode { struct OpaqueNodeRef *x0; })nodeAtPoint:(const struct CGPoint { double x0; double x1; } *)a0;
- (struct TFENode { struct OpaqueNodeRef *x0; })nodeForIconView:(id)a0;
- (struct TFENode { struct OpaqueNodeRef *x0; })nodeForIndexPath:(id)a0;
- (struct TFENode { struct OpaqueNodeRef *x0; })nodeForSectionIndex:(unsigned long long)a0;
- (BOOL)performDragOperation:(id)a0 dropTargetView:(id)a1;
- (id)popoverAnchorViewForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (BOOL)prepareForDragOperation:(id)a0 dropTargetView:(id)a1;
- (void)updateDraggingItemsForDrag:(id)a0 dropTargetView:(id)a1;

@end
