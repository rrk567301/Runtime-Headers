@class IFColor, NSString;

@interface ISFolderRecipe : NSObject <ISCompositorRecipe>

@property (retain) IFColor *tintColor;
@property BOOL disableShadow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateRecipeWithImageDescriptor:(id)a0;
- (id)layerTreeForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (void).cxx_destruct;
- (id)hintedBadgeRect;
- (id)hintedFontSize;
- (id)hintedImageBadgeRect;

@end
