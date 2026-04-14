@interface SiriUIHelpButton : NSButton {
    BOOL _animatingEmphasis;
    BOOL _emphasized;
}

- (id)init;
- (void)setEmphasized:(BOOL)a0;
- (BOOL)allowsVibrancy;
- (void)awakeFromNib;
- (void)pulse;
- (double)_alphaForColor:(id)a0;
- (double)_targetAlpha;

@end
