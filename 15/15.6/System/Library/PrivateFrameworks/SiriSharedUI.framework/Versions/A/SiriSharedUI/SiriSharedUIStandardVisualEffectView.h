@class NSView;

@interface SiriSharedUIStandardVisualEffectView : NSVisualEffectView {
    NSView *_backgroundView;
}

- (void).cxx_destruct;
- (void)layout;
- (char)isFlipped;
- (void)setBackgroundColor:(id)a0;
- (char)wantsLayer;
- (id)initWithSiriContentPlatterEffect;
- (id)initWithVibrantEffect;

@end
