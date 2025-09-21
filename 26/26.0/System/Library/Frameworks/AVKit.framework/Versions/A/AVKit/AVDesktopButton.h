@interface AVDesktopButton : NSButton <AVAuxiliaryControlsViewItem> {
    BOOL _included;
    BOOL _isProminent;
    BOOL _isDepressed;
}

@property (nonatomic, getter=isInitialFirstResponder) BOOL initialFirstResponder;
@property (nonatomic) BOOL isProminent;
@property (nonatomic) BOOL included;
@property (nonatomic) BOOL canOnlyAppearInOverflowMenu;
@property (nonatomic, getter=isCollapsed) BOOL collapsed;

- (void)mouseDown:(id)a0;
- (BOOL)allowsVibrancy;
- (void)setImage:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (void)setAlternateImage:(id)a0;
- (void)viewDidMoveToWindow;
- (BOOL)canBecomeKeyView;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)_updateContentTintColorIfNeeded;
- (void)_makeSelfFirstResponderIfPossible;
- (void)_updateDepressionStateIfNeeded;

@end
