@class NSColor;

@interface CoreAudioKit.CocoaView : NSView

@property (nonatomic, readonly) BOOL wantsUpdateLayer;
@property (nonatomic, retain) NSColor *tintColor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tintColorDidChange;
- (id)initWithCoder:(id)a0;
- (void)viewDidChangeEffectiveAppearance;

@end
