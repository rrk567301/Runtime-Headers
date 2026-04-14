@protocol ICTableSelectionDelegate;

@interface ICTableSelectionView : NSView

@property (weak, nonatomic) id<ICTableSelectionDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)paste:(id)a0;
- (BOOL)resignFirstResponder;
- (void)cut:(id)a0;
- (BOOL)becomeFirstResponder;
- (void)copy:(id)a0;
- (void).cxx_destruct;
- (void)keyDown:(id)a0;
- (void)delete:(id)a0;
- (void)updateAccentColor;

@end
