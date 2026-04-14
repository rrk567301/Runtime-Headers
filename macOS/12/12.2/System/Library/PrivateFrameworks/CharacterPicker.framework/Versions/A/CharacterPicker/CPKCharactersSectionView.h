@class CPKCharactersView, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CPKCharactersSectionView : NSView <NSDraggingSource> {
    long long _section;
    BOOL _allowFallbackInSection;
    long long _charactersCount;
    unsigned long long _parentDataGeneration;
    unsigned long long _ownerChangedCount;
    NSObject<OS_dispatch_queue> *_fallbackTaskQueue;
    long long _popupTargetIndex;
    struct CGPoint { double x; double y; } _lastMouseDownLocation;
    BOOL _highlightedByMouse;
    BOOL _editable;
    long long _dropTargetIndex;
}

@property (readonly) CPKCharactersView *parentCharactersView;
@property long long selectedIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (long long)_columnCount;
- (BOOL)isFlipped;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (unsigned long long)accessibilityArrayAttributeCount:(id)a0;
- (BOOL)accessibilityIsIgnored;
- (unsigned long long)accessibilityIndexOfChild:(id)a0;
- (id)accessibilityArrayAttributeValues:(id)a0 index:(unsigned long long)a1 maxCount:(unsigned long long)a2;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (void)accessibilitySetValue:(id)a0 forAttribute:(id)a1;
- (id)accessibilityActionNames;
- (id)accessibilityActionDescription:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (id)menuForEvent:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (unsigned long long)draggingSession:(id)a0 sourceOperationMaskForDraggingContext:(long long)a1;
- (void)draggingSession:(id)a0 endedAtPoint:(struct CGPoint { double x0; double x1; })a1 operation:(unsigned long long)a2;
- (void)draggingSession:(id)a0 movedToPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)view:(id)a0 stringForToolTip:(long long)a1 point:(struct CGPoint { double x0; double x1; })a2 userData:(void *)a3;
- (long long)_rowCount;
- (id)characterAtIndex:(long long)a0 withSpecificFont:(id *)a1;
- (void)highlightIndex:(long long)a0 byMouse:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameRectAtIndex:(long long)a0 withDrawingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (BOOL)index:(long long *)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)firstAXElement;
- (void)setParentCharactersView:(id)a0 section:(long long)a1;
- (void)showSkinToneVariantsPopupAtIndex:(long long)a0 byMouse:(BOOL)a1;
- (void)confirmCurrentSelection;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_drawingRectAtIndex:(long long)a0;
- (struct CGPoint { double x0; double x1; })_drawingPosOfGlyph:(unsigned short)a0 orCharacter:(id)a1 inFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 font:(id)a3 newFontSize:(double *)a4;
- (void)_drawCharacterString:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 origin:(struct CGPoint { double x0; double x1; })a2 font:(struct __CTFont { } *)a3;
- (void)_delayedShowSkinToneVariantsPopup;
- (id)_dragImageForCurrentSelection;
- (id)_characterDescriptionAtIndex:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_dropTargetFrame;
- (long long)_fillCellDrawingInfo:(id)a0;
- (void)_drawCells:(id)a0;
- (void)_startFontFallbackTask:(id)a0;
- (id)_findNewFontsForCells:(id)a0 baseFont:(id)a1 fallbackType:(long long)a2;
- (void)_clearDropTargetIndicator;
- (void)_confirmSelectedSkinToneVariant:(id)a0;
- (id)_axChildrenInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)_visibleFirstIndex:(long long *)a0 lastIndex:(long long *)a1;

@end
