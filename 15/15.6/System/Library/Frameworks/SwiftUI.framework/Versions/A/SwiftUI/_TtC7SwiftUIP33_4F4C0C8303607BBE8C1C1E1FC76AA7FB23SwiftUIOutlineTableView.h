@class NSMenu;

@interface _TtC7SwiftUIP33_4F4C0C8303607BBE8C1C1E1FC76AA7FB23SwiftUIOutlineTableView : NSOutlineView {
    void /* unknown type, empty encoding */ allowsSelection;
    void /* unknown type, empty encoding */ customAlternatingBackgroundColors;
    void /* unknown type, empty encoding */ stackBehavior;
}

@property (nonatomic, readonly) char _needsBackgroundFillerView;
@property (nonatomic, readonly) char _needsRubberBandViews;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleRect;
@property (nonatomic, retain) NSMenu *menu;
@property (nonatomic, readonly) char _allowsTextEditingWithoutSelection;

- (char)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })_adjustFrameSizeToFitSuperview:(struct CGSize { double x0; double x1; })a0;
- (char)canDragRowsWithIndexes:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)deleteBackward:(id)a0;
- (char)isAccessibilitySelectorAllowed:(SEL)a0;
- (id)_alternatingRowBackgroundColors;
- (void)delete:(id)a0;
- (long long)_preferredDragColumnForEvent:(id)a0;
- (char)_shouldDelayFirstResponder:(id)a0 forRow:(long long)a1;
- (char)accessibilityPerformShowMenu;
- (void)deleteForward:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)keyDown:(id)a0;
- (void)removeItemsAtIndexes:(id)a0 inParent:(id)a1 withAnimation:(unsigned long long)a2;
- (char)scrollRectToVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)validateProposedFirstResponder:(id)a0 forEvent:(id)a1;
- (char)validateUserInterfaceItem:(id)a0;
- (void)viewDidMoveToWindow;

@end
