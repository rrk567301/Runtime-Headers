@interface TLKProminenceView : NSView

@property (nonatomic) unsigned long long prominence;

+ (id)viewWithProminence:(unsigned long long)a0;

- (id)init;
- (BOOL)allowsVibrancy;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (void)tlk_updateForAppearance:(id)a0;
- (id)initWithProminence:(unsigned long long)a0;

@end
