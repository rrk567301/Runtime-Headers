@class NSView;

@interface SiriSharedUIStandardVisualEffectView : NSVisualEffectView {
    NSView *_backgroundView;
}

- (void)setBackgroundColor:(id)a0;
- (BOOL)isFlipped;
- (void)layout;
- (void).cxx_destruct;
- (BOOL)wantsLayer;
- (id)initWithSiriContentPlatterEffect;
- (id)initWithVibrantEffect;

@end
