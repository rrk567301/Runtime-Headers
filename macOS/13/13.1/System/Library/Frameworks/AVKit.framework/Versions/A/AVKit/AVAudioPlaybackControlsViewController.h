@class NSView;

@interface AVAudioPlaybackControlsViewController : AVPlayerControlsViewController {
    NSView *_initialFirstResponder;
    id /* block */ _nextKeyViewSetupBlock;
}

- (void).cxx_destruct;
- (void)loadView;
- (id)initialFirstResponder;
- (long long)layoutStyle;
- (struct CGSize { double x0; double x1; })intrinsicControlsContentViewSize;
- (void)setupNextKeyView;
- (long long)preferredBlendingMode;
- (long long)preferredEffectMaterial;

@end
