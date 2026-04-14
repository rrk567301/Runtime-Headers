@class NSView;

@interface AVAudioPlaybackControlsViewController : AVPlayerControlsViewController {
    NSView *_initialFirstResponder;
    id /* block */ _nextKeyViewSetupBlock;
}

- (void).cxx_destruct;
- (long long)layoutStyle;
- (void)loadView;
- (id)initialFirstResponder;
- (long long)cornerRadiusStyle;
- (struct CGSize { double x0; double x1; })intrinsicControlsContentViewSize;
- (long long)preferredBlendingMode;
- (double)preferredCornerRadius;
- (long long)preferredEffectMaterial;
- (void)setupNextKeyView;

@end
