@class NSString, IFIconSpecification;

@interface ISMessagesAppRecipe : NSObject <ISCompositorRecipe, ISRecipeOptionalMask, ISRecipeOptionalBorder, ISSuppliesIconSpecification>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property char shouldApplyMask;
@property char shouldDrawBorder;
@property (readonly) IFIconSpecification *iconSpecification;

- (id)init;
- (id)layerTreeForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;

@end
