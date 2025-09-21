@interface RemindersUICore.TTRMSuggestionTableRowView : NSTableRowView

@property (nonatomic, readonly) BOOL allowsVibrancy;
@property (nonatomic) BOOL groupRowStyle;
@property (nonatomic) BOOL emphasized;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isEmphasized;
- (id)initWithCoder:(id)a0;
- (BOOL)isGroupRowStyle;
- (void)drawBackgroundInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
