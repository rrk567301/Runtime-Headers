@class NSView;
@protocol SOClassicDictationBackgroundProtocol;

@interface SOClassicDictationWindow : NSPanel {
    NSView<SOClassicDictationBackgroundProtocol> *_backgroundView;
}

@property (nonatomic) double orderInAnimationDuration;
@property (nonatomic) double orderOutAnimationDuration;
@property (nonatomic) long long orderInAnimationType;

+ (unsigned long long)_validateStyleMask:(unsigned long long)a0;
+ (struct CGPoint { double x0; double x1; })pointForCenteredSourceSize:(struct CGSize { double x0; double x1; })a0 destSize:(struct CGSize { double x0; double x1; })a1 verticallyCentered:(BOOL)a2;

- (BOOL)acceptsFirstResponder;
- (BOOL)_hasActiveAppearance;
- (BOOL)accessibilityIsIgnored;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (long long)_orderOutAnimationType;
- (id)_windowTransformAnimationForOrdering:(long long)a0 animationType:(long long)a1 interruptingAnimation:(id)a2;
- (id)_cornerMask;
- (long long)_orderFrontAnimationType;
- (float)_backdropBleedAmount;

@end
