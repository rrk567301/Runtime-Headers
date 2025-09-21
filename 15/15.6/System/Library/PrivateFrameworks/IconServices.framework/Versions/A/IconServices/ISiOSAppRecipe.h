@class NSString, IFColor, IFIconSpecification;

@interface ISiOSAppRecipe : NSObject <ISCompositorRecipe, ISRecipeOptionalMask, ISRecipeOptionalBorder, ISRecipeOptionalTintColor, ISRecipeOptionalAppearance, ISSuppliesIconSpecification, ISRecipeBackground>

@property (nonatomic) char allowDarkAndTintable;
@property (nonatomic) char segment;
@property (nonatomic) char generic;
@property (nonatomic) char templateVariant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property char shouldApplyMask;
@property char shouldDrawBorder;
@property (retain) IFColor *tintColor;
@property long long appearance;
@property (readonly) IFIconSpecification *iconSpecification;
@property unsigned long long background;

- (id)init;
- (void).cxx_destruct;
- (id)layerTreeForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)primaryResourceEffectReturningBackgroundContentOverride:(id *)a0;
- (void)updateRecipeWithImageDescriptor:(id)a0;

@end
