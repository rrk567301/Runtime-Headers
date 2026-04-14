@interface _NSThemeLockButton : NSButton {
    BOOL _configuredForSolarium;
}

+ (id)lockButtonInView:(id)a0 action:(SEL)a1;

- (void)sizeToFit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidChangeEffectiveAppearance;

@end
