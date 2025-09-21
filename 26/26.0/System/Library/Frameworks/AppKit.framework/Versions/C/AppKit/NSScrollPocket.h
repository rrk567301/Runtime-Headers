@class NSString, NSView, NSAppearance, NSColor;

@interface NSScrollPocket : NSView {
    void /* unknown type, empty encoding */ backgroundCapture;
    void /* unknown type, empty encoding */ pocketMask;
    void /* unknown type, empty encoding */ luminanceAdjustment;
    void /* unknown type, empty encoding */ additionalDimmingContainer;
    void /* unknown type, empty encoding */ additionalDimming;
    void /* unknown type, empty encoding */ pocketMaskedBlur;
    void /* unknown type, empty encoding */ hardPocketView;
    void /* unknown type, empty encoding */ debugOverlay;
    void /* unknown type, empty encoding */ _viewAppearanceManager;
    void /* unknown type, empty encoding */ _pocketParameterContainer;
    void /* unknown type, empty encoding */ accessibilityDisplayOptionsDidChangeObserver;
    void /* unknown type, empty encoding */ contentLuma;
    void /* unknown type, empty encoding */ priorEMAWeightedLuma;
    void /* unknown type, empty encoding */ lumaUpdateSettleTimer;
    void /* unknown type, empty encoding */ _enabledAnimationCount;
    void /* unknown type, empty encoding */ _targetAlphaValues;
    void /* unknown type, empty encoding */ _isEnabled;
    void /* unknown type, empty encoding */ scrollVelocity;
    void /* unknown type, empty encoding */ elementModel;
    void /* unknown type, empty encoding */ elementContainerModels;
    void /* unknown type, empty encoding */ titlebarElementContainerCount;
}

@property (class, nonatomic, readonly) long long default_titlebarBackgroundStyle;

@property (nonatomic, readonly) NSString *_adaptationDebugDescription;
@property (nonatomic, readonly) NSAppearance *_preferredAppearance;
@property (nonatomic) long long edge;
@property (nonatomic) long long style;
@property (nonatomic, retain) NSAppearance *appearanceBias;
@property (nonatomic) BOOL prefersSolidColorHardPocket;
@property (nonatomic) BOOL _showSeparatorsOnHardPocket;
@property (nonatomic, readonly) NSView *captureView;
@property (nonatomic, retain) NSColor *captureColor;
@property (nonatomic) BOOL allowsColorSchemeAdaptivity;
@property (nonatomic) long long _titlebarBackgroundStyle;
@property (nonatomic) BOOL _hidesTitlebarElements;
@property (nonatomic, readonly) BOOL computed_hidesTitlebarElements;
@property (nonatomic, readonly) BOOL _shouldDescendantsContributeToScrollPocket;

+ (BOOL)automaticallyTracksDependenciesOn_hidesTitlebarElements;

- (void)removeElement:(id)a0;
- (void)addElement:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layout;
- (void)viewDidMoveToWindow;
- (id)initWithCoder:(id)a0;
- (void)setState:(struct NSScrollPocketState { BOOL x0; BOOL x1; double x2; })a0 animated:(BOOL)a1;
- (void)viewDidChangeEffectiveAppearance;
- (void).cxx_destruct;
- (void)didChangeValueForKey:(id)a0;
- (void)_pocketMaskedBlurDidChangeLuma;
- (void)addElement:(id)a0 ofStyle:(long long)a1;
- (void)addElementContainer:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)removeElementContainer:(id)a0;
- (void)renewGState;
- (void)viewDidHide;
- (void)viewDidUnhide;

@end
