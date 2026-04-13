@class NSView;

@interface AVAudioTrimControlsViewController : AVTrimControlsViewController {
    NSView *_initialFirstResponder;
    id /* block */ _nextKeyViewSetupBlock;
}

- (void).cxx_destruct;
- (id)initialFirstResponder;
- (void)loadView;
- (long long)layoutStyle;
- (struct CGSize { double x0; double x1; })intrinsicControlsContentViewSize;
- (unsigned long long)preferredTrimViewStyle;
- (void)setupNextKeyView;
- (long long)preferredBlendingMode;
- (long long)preferredEffectMaterial;

@end
