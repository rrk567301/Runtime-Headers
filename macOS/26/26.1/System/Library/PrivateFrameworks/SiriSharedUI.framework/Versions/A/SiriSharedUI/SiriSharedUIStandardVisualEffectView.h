@class NSView;

@interface SiriSharedUIStandardVisualEffectView : NSVisualEffectView {
    NSView *_backgroundView;
}

- (void)layout;
- (void)setBackgroundColor:(id)a0;
- (void).cxx_destruct;
- (BOOL)isFlipped;
- (BOOL)wantsLayer;
- (id)initWithSiriContentPlatterEffect;
- (id)initWithVibrantEffect;

@end
