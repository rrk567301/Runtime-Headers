@class NSTextField;

@interface NSDebugTDSuggestedVHItemsTableCellView : NSTableCellView

@property (nonatomic) BOOL heading;
@property (retain, nonatomic) NSTextField *secondaryLabel;
@property (retain, nonatomic) NSTextField *tertiaryLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (BOOL)isFlipped;
- (void).cxx_destruct;

@end
