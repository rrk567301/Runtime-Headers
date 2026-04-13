@class NSMenu;

@interface SwiftUI.ListCoreTableView : NSTableView {
    void /* unknown type, empty encoding */ allowsSelection;
    void /* unknown type, empty encoding */ selectionFollowsCursor;
}

@property (nonatomic, retain) NSMenu *menu;
@property (nonatomic, readonly) BOOL _allowsTextEditingWithoutSelection;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToWindow;
- (id)accessibilityRoleDescription;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (BOOL)validateProposedFirstResponder:(id)a0 forEvent:(id)a1;
- (BOOL)_shouldDelayFirstResponder:(id)a0 forRow:(long long)a1;

@end
