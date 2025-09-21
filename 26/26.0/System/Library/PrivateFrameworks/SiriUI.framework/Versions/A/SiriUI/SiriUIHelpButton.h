@interface SiriUIHelpButton : NSButton {
    BOOL _animatingEmphasis;
    BOOL _emphasized;
}

- (BOOL)allowsVibrancy;
- (id)init;
- (void)setEmphasized:(BOOL)a0;
- (void)awakeFromNib;
- (void)pulse;
- (double)_alphaForColor:(id)a0;
- (double)_targetAlpha;

@end
