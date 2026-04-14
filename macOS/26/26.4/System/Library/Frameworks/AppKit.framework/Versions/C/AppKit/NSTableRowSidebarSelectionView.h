@interface NSTableRowSidebarSelectionView : NSView {
    BOOL _isEmphasized;
    BOOL _isEmphasizedForDrop;
}

@property (getter=isEmphasized) BOOL emphasized;
@property (getter=isEmphasizedForDrop) BOOL emphasizedForDrop;

- (void)updateLayer;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (id)_commonTRSSVInit;
- (void)_windowChangedKeyState;
- (BOOL)isDarkMode;

@end
