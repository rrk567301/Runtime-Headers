@class NSView;

@interface NSGlassEffectContainerView : NSView {
    void /* unknown type, empty encoding */ _smoothness;
    void /* unknown type, empty encoding */ _components;
    void /* unknown type, empty encoding */ _effectsViewConstraints;
    void /* unknown type, empty encoding */ _effectsView;
    void /* unknown type, empty encoding */ _contentViewConstraints;
    void /* unknown type, empty encoding */ _contentView;
}

@property (nonatomic) double spacing;
@property (nonatomic, retain) NSView *contentView;
@property (nonatomic) unsigned long long _vibrantBlendingStyleForSubtree;

+ (id)defaultAnimationForKey:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_setVibrantBlendingStyleForSubtree:(unsigned long long)a0;
- (void)_windowChangedKeyState;

@end
