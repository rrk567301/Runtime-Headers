@interface ICAutoCompleteSuggestionsTableViewRowView : NSTableRowView

@property (nonatomic) char isHeaderRow;

- (char)isGroupRowStyle;
- (char)allowsVibrancy;
- (void)drawBackgroundInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isEmphasized;
- (char)wantsLayer;

@end
