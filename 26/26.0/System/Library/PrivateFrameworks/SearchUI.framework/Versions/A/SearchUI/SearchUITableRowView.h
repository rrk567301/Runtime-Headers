@class NSView;

@interface SearchUITableRowView : NSTableRowView

@property (retain, nonatomic) NSView *separatorView;
@property (retain, nonatomic) NSView *selectionView;
@property (nonatomic) BOOL alwaysEmphasized;
@property (nonatomic) int separatorStyle;
@property (nonatomic) BOOL nextRowIsGroup;

- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (BOOL)isEmphasized;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isGroupRowStyle;
- (void)drawSelectionInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setNextRowSelected:(BOOL)a0;
- (void)initStyle;
- (void)updateSeparatorVisibility;

@end
