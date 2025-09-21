@interface ICAutoCompleteSuggestionsTableViewRowView : NSTableRowView

@property (nonatomic) BOOL isHeaderRow;

- (BOOL)allowsVibrancy;
- (BOOL)isEmphasized;
- (BOOL)isGroupRowStyle;
- (void)drawBackgroundInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)wantsLayer;

@end
