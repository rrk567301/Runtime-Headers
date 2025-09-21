@class NSMenu;

@interface SwiftUI.ListCoreOutlineView : NSOutlineView {
    void /* unknown type, empty encoding */ allowsSelection;
    void /* unknown type, empty encoding */ options;
    void /* unknown type, empty encoding */ customAlternatingBackgroundColors;
    void /* unknown type, empty encoding */ stackBehavior;
    void /* unknown type, empty encoding */ disableExpandCollapseAnimations;
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
- (char)_shouldDelayFirstResponder:(id)a0 forRow:(long long)a1;
- (id)accessibilityAttributeNames;
- (char)accessibilityPerformShowMenu;
- (void)collapseItem:(id)a0 collapseChildren:(char)a1;
- (void)deleteForward:(id)a0;
- (void)expandItem:(id)a0 expandChildren:(char)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)keyDown:(id)a0;
- (char)scrollRectToVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)validateProposedFirstResponder:(id)a0 forEvent:(id)a1;
- (char)validateUserInterfaceItem:(id)a0;
- (void)viewDidMoveToWindow;

@end
