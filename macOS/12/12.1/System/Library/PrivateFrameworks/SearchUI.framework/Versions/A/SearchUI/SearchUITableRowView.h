@class NSView;

@interface SearchUITableRowView : NSTableRowView

@property (retain, nonatomic) NSView *separatorView;
@property (nonatomic) BOOL alwaysEmphasized;
@property (nonatomic) int separatorStyle;
@property (nonatomic) BOOL nextRowIsGroup;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isEmphasized;
- (void)setSelected:(BOOL)a0;
- (BOOL)isGroupRowStyle;
- (void)setNextRowSelected:(BOOL)a0;
- (void)initStyle;
- (void)updateSeparatorVisibility;

@end
