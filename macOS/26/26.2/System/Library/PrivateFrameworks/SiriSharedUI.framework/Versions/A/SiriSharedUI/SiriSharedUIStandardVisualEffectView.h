@class NSView;

@interface SiriSharedUIStandardVisualEffectView : NSVisualEffectView {
    NSView *_backgroundView;
}

- (void)layout;
- (void).cxx_destruct;
- (BOOL)isFlipped;
- (void)setBackgroundColor:(id)a0;
- (BOOL)wantsLayer;
- (id)initWithSiriContentPlatterEffect;
- (id)initWithVibrantEffect;

@end
