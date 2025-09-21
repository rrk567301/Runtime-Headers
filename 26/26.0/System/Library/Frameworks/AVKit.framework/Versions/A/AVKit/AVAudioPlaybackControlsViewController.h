@class NSView;

@interface AVAudioPlaybackControlsViewController : AVPlayerControlsViewController {
    NSView *_initialFirstResponder;
    id /* block */ _nextKeyViewSetupBlock;
}

- (void)loadView;
- (long long)layoutStyle;
- (void).cxx_destruct;
- (id)initialFirstResponder;
- (long long)cornerRadiusStyle;
- (struct CGSize { double x0; double x1; })intrinsicControlsContentViewSize;
- (long long)preferredBlendingMode;
- (double)preferredCornerRadius;
- (long long)preferredEffectMaterial;
- (void)setupNextKeyView;

@end
