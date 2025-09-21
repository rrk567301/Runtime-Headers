@class NSView;

@interface SearchUITableRowView : NSTableRowView

@property (retain, nonatomic) NSView *separatorView;
@property (retain, nonatomic) NSView *selectionView;
@property (nonatomic) char alwaysEmphasized;
@property (nonatomic) int separatorStyle;
@property (nonatomic) char nextRowIsGroup;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (char)isGroupRowStyle;
- (void)drawSelectionInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isEmphasized;
- (void)setNextRowSelected:(char)a0;
- (void)setSelected:(char)a0;
- (void)initStyle;
- (void)updateSeparatorVisibility;

@end
