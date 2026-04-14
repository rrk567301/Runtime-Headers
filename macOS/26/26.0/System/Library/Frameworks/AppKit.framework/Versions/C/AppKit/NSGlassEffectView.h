@class NSString, NSView, NSViewCornerConfiguration, NSColor;

@interface NSGlassEffectView : NSView {
    void /* function */ _subvariant;
    void /* function */ _groupIdentifier;
    void /* unknown type, empty encoding */ _tintColor;
    void /* unknown type, empty encoding */ _actualCornerRadius;
    void /* unknown type, empty encoding */ __path;
    void /* unknown type, empty encoding */ _contentViewConstraints;
    void /* unknown type, empty encoding */ _contentView;
    void /* unknown type, empty encoding */ _contentHolderView;
    void /* unknown type, empty encoding */ _effectsViewIfExists;
    void /* unknown type, empty encoding */ _enclosingGlassEffectContainerView;
    void /* unknown type, empty encoding */ _swiftStorage;
}

@property (nonatomic) long long _variant;
@property (nonatomic, copy) NSString *_subvariant;
@property (nonatomic) long long style;
@property (nonatomic) long long _interactionState;
@property (nonatomic) long long _subduedState;
@property (nonatomic) long long _scrimState;
@property (nonatomic) long long _contentLensing;
@property (nonatomic) long long _adaptiveAppearance;
@property (nonatomic) BOOL _useReducedShadowRadius;
@property (nonatomic, copy) NSString *_groupIdentifier;
@property (nonatomic) BOOL clipsToBounds;
@property (nonatomic, retain) NSColor *tintColor;
@property (nonatomic) double cornerRadius;
@property (nonatomic, readonly) NSViewCornerConfiguration *_cornerConfiguration;
@property (nonatomic, readonly) long long _scrollPocketElementStyle;
@property (nonatomic, retain) const struct CGPath { } *_path;
@property (nonatomic, retain) NSView *contentView;
@property (nonatomic) unsigned long long _vibrantBlendingStyleForSubtree;
@property (nonatomic) long long _disableEmbeddingCount;
@property (nonatomic, readonly) NSString *_adaptationDebugDescription;

+ (id)defaultAnimationForKey:(id)a0;

- (void)viewWillMoveToWindow:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (void)encodeWithCoder:(id)a0;
- (void)viewDidMoveToWindow;
- (id)initWithCoder:(id)a0;
- (void)viewDidChangeEffectiveAppearance;
- (void).cxx_destruct;
- (void)didChangeValueForKey:(id)a0;
- (void)_decrementDisableEmbedding;
- (void)_incrementDisableEmbedding;
- (void)_setPath:(const struct CGPath { } *)a0;
- (void)_setVibrantBlendingStyleForSubtree:(unsigned long long)a0;
- (void)_windowChangedKeyState;
- (void)renewGState;
- (void)viewDidHide;
- (void)viewDidUnhide;

@end
