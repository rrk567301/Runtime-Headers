@protocol ICTableSelectionDelegate;

@interface ICTableSelectionView : NSView

@property (weak, nonatomic) id<ICTableSelectionDelegate> delegate;
@property (nonatomic) char shouldAvoidResigningFirstResponder;

- (void).cxx_destruct;
- (void)delete:(id)a0;
- (char)becomeFirstResponder;
- (void)copy:(id)a0;
- (void)cut:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)keyDown:(id)a0;
- (void)paste:(id)a0;
- (char)resignFirstResponder;
- (void)updateAccentColor;

@end
