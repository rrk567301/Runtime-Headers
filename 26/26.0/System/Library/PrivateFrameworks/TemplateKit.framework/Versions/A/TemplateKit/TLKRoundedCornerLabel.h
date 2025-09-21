@class NSView, TLKLabel;

@interface TLKRoundedCornerLabel : TLKView

@property (retain, nonatomic) NSView *borderView;
@property (retain, nonatomic) TLKLabel *label;
@property (nonatomic) unsigned long long sizeConfiguration;

- (BOOL)allowsVibrancy;
- (void)layout;
- (struct CGSize { double x0; double x1; })effectiveLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (void)tlk_updateForAppearance:(id)a0;
- (void)viewDidMoveToWindow;
- (void)viewDidChangeEffectiveAppearance;
- (void).cxx_destruct;
- (id)initWithProminence:(unsigned long long)a0;
- (void)updateFont;
- (double)effectiveBaselineOffsetFromBottom;

@end
