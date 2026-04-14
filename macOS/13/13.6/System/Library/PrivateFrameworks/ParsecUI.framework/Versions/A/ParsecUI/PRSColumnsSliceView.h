@class NSTextField;

@interface PRSColumnsSliceView : NSView

@property NSTextField *titleTextField;

- (unsigned long long)columnCount;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)removeTitle;
- (id)columnTextFieldAtIndex:(unsigned long long)a0;

@end
