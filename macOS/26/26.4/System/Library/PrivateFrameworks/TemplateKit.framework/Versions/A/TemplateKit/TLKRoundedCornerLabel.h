@class NSView, TLKLabel;

@interface TLKRoundedCornerLabel : TLKView

@property (retain, nonatomic) NSView *borderView;
@property (retain, nonatomic) TLKLabel *label;
@property (nonatomic) unsigned long long sizeConfiguration;

- (void)tlk_updateForAppearance:(id)a0;
- (void)layout;
- (id)initWithProminence:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })effectiveLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)viewDidChangeEffectiveAppearance;
- (BOOL)allowsVibrancy;
- (void)viewDidMoveToWindow;
- (void)updateFont;
- (double)effectiveBaselineOffsetFromBottom;

@end
