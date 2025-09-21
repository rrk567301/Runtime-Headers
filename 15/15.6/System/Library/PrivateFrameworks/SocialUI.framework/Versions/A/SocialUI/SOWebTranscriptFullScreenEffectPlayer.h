@interface SOWebTranscriptFullScreenEffectPlayer : SOFullScreenEffectPlayer {
    char _originalOpaque;
    char _originalDrawsBackground;
    struct CGColor { } *_previousColor;
}

- (id)webView;

@end
