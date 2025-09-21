@interface SiriSharedUI.SiriSharedUIStandardViewDropletMaterial : SiriSharedUIStandardVisualEffectView {
    void /* unknown type, empty encoding */ dropletMaterialModel;
    void /* unknown type, empty encoding */ dropletMaterial;
    void /* unknown type, empty encoding */ dropletMaterialContainerView;
    void /* unknown type, empty encoding */ masksBackgroundMaterial;
    void /* unknown type, empty encoding */ isLightMode;
    void /* unknown type, empty encoding */ isSmartDialogSnippetBackground;
    void /* unknown type, empty encoding */ fresnelAlphaLightMode;
    void /* unknown type, empty encoding */ fresnelAlphaDarkMode;
}

@property (nonatomic, readonly) BOOL flipped;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (BOOL)isFlipped;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSiriContentPlatterEffect;
- (id)initWithVibrantEffect;

@end
