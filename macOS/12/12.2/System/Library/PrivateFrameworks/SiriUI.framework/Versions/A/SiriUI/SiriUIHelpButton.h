@interface SiriUIHelpButton : NSButton {
    BOOL _animatingEmphasis;
    BOOL _emphasized;
}

- (id)init;
- (BOOL)allowsVibrancy;
- (void)awakeFromNib;
- (void)setEmphasized:(BOOL)a0;
- (void)pulse;
- (double)_targetAlpha;
- (double)_alphaForColor:(id)a0;

@end
