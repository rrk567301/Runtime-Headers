@class NSView;

@interface SiriSharedUIStandardVisualEffectView : NSVisualEffectView {
    NSView *_backgroundView;
}

- (void).cxx_destruct;
- (void)layout;
- (void)setBackgroundColor:(id)a0;
- (BOOL)wantsLayer;
- (BOOL)isFlipped;
- (id)initWithVibrantEffect;
- (id)initWithSiriContentPlatterEffect;

@end
