@interface AVDesktopButton : NSButton <AVAuxiliaryControlsViewItem> {
    char _included;
    char _isProminent;
    char _isDepressed;
}

@property (nonatomic, getter=isInitialFirstResponder) char initialFirstResponder;
@property (nonatomic) char isProminent;
@property (nonatomic) char included;
@property (nonatomic) char canOnlyAppearInOverflowMenu;
@property (nonatomic, getter=isCollapsed) char collapsed;

- (void)setEnabled:(char)a0;
- (void)setImage:(id)a0;
- (char)allowsVibrancy;
- (char)canBecomeKeyView;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)mouseDown:(id)a0;
- (void)setAlternateImage:(id)a0;
- (void)viewDidMoveToWindow;
- (void)_updateContentTintColorIfNeeded;
- (void)_makeSelfFirstResponderIfPossible;
- (void)_updateDepressionStateIfNeeded;

@end
