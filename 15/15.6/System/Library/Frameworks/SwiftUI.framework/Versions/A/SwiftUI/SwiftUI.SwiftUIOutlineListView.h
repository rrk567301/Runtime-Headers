@class NSMenu;

@interface SwiftUI.SwiftUIOutlineListView : NSOutlineView {
    void /* unknown type, empty encoding */ disableExpandCollapseAnimations;
    void /* unknown type, empty encoding */ customAlternatingBackgroundColors;
    void /* unknown type, empty encoding */ stackBehavior;
    void /* unknown type, empty encoding */ swiftUIDelegate;
    void /* unknown type, empty encoding */ allowsSelectionByIdentity;
    void /* unknown type, empty encoding */ selectionFollowsCursor;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleRect;
@property (nonatomic, readonly) char _needsBackgroundFillerView;
@property (nonatomic, readonly) char _needsRubberBandViews;
@property (nonatomic, readonly) char _allowsTextEditingWithoutSelection;
@property (nonatomic, retain) NSMenu *menu;

- (char)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })_adjustFrameSizeToFitSuperview:(struct CGSize { double x0; double x1; })a0;
- (char)canDragRowsWithIndexes:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)deleteBackward:(id)a0;
- (char)isAccessibilitySelectorAllowed:(SEL)a0;
- (id)_alternatingRowBackgroundColors;
- (void)delete:(id)a0;
- (char)_shouldDelayFirstResponder:(id)a0 forRow:(long long)a1;
- (char)_validatesRowHeight;
- (id)accessibilityAttributeNames;
- (char)accessibilityPerformShowMenu;
- (id)accessibilityRoleDescription;
- (void)collapseItem:(id)a0;
- (void)collapseItem:(id)a0 collapseChildren:(char)a1;
- (void)deleteForward:(id)a0;
- (void)deselectAll:(id)a0;
- (void)deselectRow:(long long)a0;
- (void)expandItem:(id)a0;
- (void)expandItem:(id)a0 expandChildren:(char)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)keyDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)removeItemsAtIndexes:(id)a0 inParent:(id)a1 withAnimation:(unsigned long long)a2;
- (char)scrollRectToVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)selectAll:(id)a0;
- (void)selectRowIndexes:(id)a0 byExtendingSelection:(char)a1;
- (char)validateProposedFirstResponder:(id)a0 forEvent:(id)a1;
- (char)validateUserInterfaceItem:(id)a0;
- (void)viewDidMoveToWindow;

@end
