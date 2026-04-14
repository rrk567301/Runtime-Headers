@class NSMenu;

@interface _TtC7SwiftUIP33_B80C7C4B9EB16145005A9135E39681A519ListCoreOutlineView : NSOutlineView {
    void /* unknown type, empty encoding */ allowsSelection;
    void /* unknown type, empty encoding */ options;
    void /* unknown type, empty encoding */ windowObserver;
}

@property (nonatomic, retain) NSMenu *menu;
@property (nonatomic, readonly) BOOL _allowsTextEditingWithoutSelection;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToWindow;
- (BOOL)validateProposedFirstResponder:(id)a0 forEvent:(id)a1;
- (void)collapseItem:(id)a0 collapseChildren:(BOOL)a1;
- (void)expandItem:(id)a0 expandChildren:(BOOL)a1;
- (id)makeViewWithIdentifier:(id)a0 owner:(id)a1;
- (BOOL)_shouldDelayFirstResponder:(id)a0 forRow:(long long)a1;

@end
