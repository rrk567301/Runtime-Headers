@interface TLKProminenceView : NSView

@property (nonatomic) unsigned long long prominence;
@property (nonatomic) double borderWidth;
@property (nonatomic) double customColorAlpha;

+ (id)viewWithProminence:(unsigned long long)a0;

- (BOOL)allowsVibrancy;
- (id)init;
- (void)tlk_updateForAppearance:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidMoveToWindow;
- (void)viewDidChangeEffectiveAppearance;
- (id)initWithProminence:(unsigned long long)a0;

@end
