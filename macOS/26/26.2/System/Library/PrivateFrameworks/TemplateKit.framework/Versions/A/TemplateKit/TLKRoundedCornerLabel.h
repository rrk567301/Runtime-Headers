@class NSView, TLKLabel;

@interface TLKRoundedCornerLabel : TLKView

@property (retain, nonatomic) NSView *borderView;
@property (retain, nonatomic) TLKLabel *label;
@property (nonatomic) unsigned long long sizeConfiguration;

- (void)viewDidMoveToWindow;
- (void)layout;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })effectiveLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithProminence:(unsigned long long)a0;
- (void)tlk_updateForAppearance:(id)a0;
- (BOOL)allowsVibrancy;
- (void)viewDidChangeEffectiveAppearance;
- (void)updateFont;
- (double)effectiveBaselineOffsetFromBottom;

@end
