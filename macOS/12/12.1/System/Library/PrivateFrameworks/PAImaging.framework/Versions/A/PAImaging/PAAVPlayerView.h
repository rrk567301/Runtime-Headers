@interface PAAVPlayerView : AVPlayerView {
    BOOL _isTrimming;
}

- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (void)scrollWheel:(id)a0;
- (void)updateBackgroundColor;
- (void)beginTrimmingWithCompletionHandler:(id /* block */)a0;
- (BOOL)isTrimming;
- (void)trimmingDidComplete;

@end
