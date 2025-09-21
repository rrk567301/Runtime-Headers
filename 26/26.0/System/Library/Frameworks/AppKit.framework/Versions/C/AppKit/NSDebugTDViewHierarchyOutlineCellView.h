@class NSTextField;

@interface NSDebugTDViewHierarchyOutlineCellView : NSView

@property (weak, nonatomic) id node;
@property (retain, nonatomic) NSTextField *textField;
@property (retain, nonatomic) NSTextField *indicatorsField;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (BOOL)isFlipped;
- (void).cxx_destruct;

@end
