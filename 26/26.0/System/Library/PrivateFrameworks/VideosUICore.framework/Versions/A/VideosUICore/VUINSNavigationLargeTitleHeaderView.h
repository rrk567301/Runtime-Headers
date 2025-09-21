@class NSString, NSTextField;

@interface VUINSNavigationLargeTitleHeaderView : NSView

@property (retain, nonatomic) NSTextField *titleTextField;
@property (retain, nonatomic) NSString *title;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (BOOL)isFlipped;
- (struct CGSize { double x0; double x1; })fittingSize;
- (void)viewDidChangeEffectiveAppearance;
- (void).cxx_destruct;

@end
