@interface SiriUIHelpButton : NSButton {
    BOOL _animatingEmphasis;
    BOOL _emphasized;
}

- (void)setEmphasized:(BOOL)a0;
- (id)init;
- (BOOL)allowsVibrancy;
- (void)awakeFromNib;
- (void)pulse;
- (double)_alphaForColor:(id)a0;
- (double)_targetAlpha;

@end
