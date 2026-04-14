@interface PAAVPlayerView : AVPlayerView {
    BOOL _isTrimming;
}

- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (void)scrollWheel:(id)a0;
- (void)updateBackgroundColor;
- (BOOL)isTrimming;
- (void)beginTrimmingWithCompletionHandler:(id /* block */)a0;
- (void)trimmingDidComplete;

@end
