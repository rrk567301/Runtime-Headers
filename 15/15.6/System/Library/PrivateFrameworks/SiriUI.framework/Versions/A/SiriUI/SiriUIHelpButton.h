@interface SiriUIHelpButton : NSButton {
    char _animatingEmphasis;
    char _emphasized;
}

- (id)init;
- (char)allowsVibrancy;
- (void)awakeFromNib;
- (void)pulse;
- (void)setEmphasized:(char)a0;
- (double)_alphaForColor:(id)a0;
- (double)_targetAlpha;

@end
