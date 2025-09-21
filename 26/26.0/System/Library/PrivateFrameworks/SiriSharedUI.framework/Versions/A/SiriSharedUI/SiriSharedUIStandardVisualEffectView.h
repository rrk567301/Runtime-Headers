@class NSView;

@interface SiriSharedUIStandardVisualEffectView : NSVisualEffectView {
    NSView *_backgroundView;
}

- (void)setBackgroundColor:(id)a0;
- (void)layout;
- (BOOL)isFlipped;
- (void).cxx_destruct;
- (BOOL)wantsLayer;
- (id)initWithSiriContentPlatterEffect;
- (id)initWithVibrantEffect;

@end
