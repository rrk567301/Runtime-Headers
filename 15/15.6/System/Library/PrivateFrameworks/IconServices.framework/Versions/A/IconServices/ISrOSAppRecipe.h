@class NSString, IFIconSpecification;

@interface ISrOSAppRecipe : NSObject <ISCompositorRecipe, ISRecipeOptionalMask, ISSuppliesIconSpecification>

@property (nonatomic) char templateVariant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property char shouldApplyMask;
@property (readonly) IFIconSpecification *iconSpecification;

- (id)init;
- (id)layerTreeForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;

@end
