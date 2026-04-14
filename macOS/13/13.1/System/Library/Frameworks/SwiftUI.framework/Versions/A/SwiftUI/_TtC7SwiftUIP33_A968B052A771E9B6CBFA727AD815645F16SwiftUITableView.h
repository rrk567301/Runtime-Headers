@class NSMenu;

@interface _TtC7SwiftUIP33_A968B052A771E9B6CBFA727AD815645F16SwiftUITableView : NSTableView {
    void /* unknown type, empty encoding */ allowsSelection;
    void /* unknown type, empty encoding */ customAlternatingBackgroundColors;
    void /* unknown type, empty encoding */ isFullHeight;
}

@property (nonatomic, readonly) BOOL _needsBackgroundFillerView;
@property (nonatomic, readonly) BOOL _needsRubberBandViews;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleRect;
@property (nonatomic, retain) NSMenu *menu;
@property (nonatomic, readonly) BOOL _allowsTextEditingWithoutSelection;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToWindow;
- (BOOL)scrollRectToVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)canDragRowsWithIndexes:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (long long)_preferredDragColumnForEvent:(id)a0;
- (BOOL)validateProposedFirstResponder:(id)a0 forEvent:(id)a1;
- (id)_alternatingRowBackgroundColors;
- (BOOL)_shouldDelayFirstResponder:(id)a0 forRow:(long long)a1;

@end
