@class NSMenu, NSArray, NSString, NSURL, NSPathControlItem, NSAttributedString, NSColor;
@protocol NSPathControlDelegate;

@interface NSPathControl : NSControl {
    unsigned long long _draggingSourceOperationMaskForLocal;
    unsigned long long _draggingSourceOperationMaskForNonLocal;
    id _delegate;
    id _pathAux;
}

@property (getter=isEditable) BOOL editable;
@property (copy) NSArray *allowedTypes;
@property (copy) NSString *placeholderString;
@property (copy) NSAttributedString *placeholderAttributedString;
@property (copy) NSURL *URL;
@property SEL doubleAction;
@property long long pathStyle;
@property (readonly) NSPathControlItem *clickedPathItem;
@property (copy) NSArray *pathItems;
@property (copy) NSColor *backgroundColor;
@property (weak) id<NSPathControlDelegate> delegate;
@property (retain) NSMenu *menu;

+ (Class)cellClass;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)_preferredAppearance;
- (void)mouseDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)_windowChangedKeyState;
- (BOOL)resignFirstResponder;
- (BOOL)acceptsFirstMouse:(id)a0;
- (BOOL)becomeFirstResponder;
- (BOOL)needsPanelToBecomeKey;
- (BOOL)preservesContentDuringLiveResize;
- (BOOL)_dragShouldBeginFromMouseDown:(id)a0;
- (void)setDraggingSourceOperationMask:(unsigned long long)a0 forLocal:(BOOL)a1;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)a0;
- (void)draggedImage:(id)a0 beganAt:(struct CGPoint { double x0; double x1; })a1;
- (void)draggedImage:(id)a0 endedAt:(struct CGPoint { double x0; double x1; })a1 operation:(unsigned long long)a2;
- (BOOL)ignoreModifierKeysWhileDragging;
- (unsigned long long)draggingEntered:(id)a0;
- (unsigned long long)draggingUpdated:(id)a0;
- (void)draggingExited:(id)a0;
- (BOOL)performDragOperation:(id)a0;
- (BOOL)isFlipped;
- (void)setCell:(id)a0;
- (double)baselineOffsetFromBottom;
- (struct { double x0; double x1; })_baselineOffsetsAtSize:(struct CGSize { double x0; double x1; })a0;
- (void)_commonInit;
- (void)updateTrackingAreas;
- (void)concludeDragOperation:(id)a0;
- (void)_removeTrackingRects;
- (void)_toolTipManagerWillRecomputeToolTipsByRemoving:(BOOL)a0 adding:(BOOL)a1;
- (BOOL)_hasRectangularFocusRingAroundFrame;
- (void)pathCell:(id)a0 willPopUpMenu:(id)a1;
- (void)pathCell:(id)a0 willDisplayOpenPanel:(id)a1;
- (id)pathComponentCells;
- (void)setPathComponentCells:(id)a0;
- (id)clickedPathComponentCell;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_mainContentBounds;
- (void)_setNeedsDisplay;
- (id)arrayWithArray:(id)a0 transformedByBlock:(id /* block */)a1;
- (id)_dragImageForCell:(id)a0 withEvent:(id)a1 offset:(struct CGPoint { double x0; double x1; } *)a2;
- (BOOL)_performDragOfCell:(id)a0 fromMouseDown:(id)a1;
- (id)_draggedURL:(id)a0;
- (void)_ensureDragContext;
- (void)_updateDropTargetToCell:(id)a0;
- (void)_updateDropTargetForDraggingInfo:(id)a0;
- (void)_cleanUpTransientDragState;
- (id)ns_widgetType;

@end
