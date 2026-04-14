@class ISResourceProvider, ISImageDescriptor;

@interface ISRecipeFactory : NSObject

@property (copy) ISResourceProvider *resourceProvider;
@property (copy) ISImageDescriptor *descriptor;
@property (readonly) BOOL preferRichRecipe;

+ (id)factoryWithDescriptor:(id)a0;
+ (id)factoryWithDescriptor:(id)a0 resourceProvider:(id)a1;

- (id)recipe;
- (id)_recipe;
- (void).cxx_destruct;
- (void)pushDescriptorContentsToRecipe:(id)a0;
- (id)_recipeFromDescriptor;
- (void)enableSegmentationForRecipe:(id)a0;
- (id)genericTaggedRecipe;
- (id)initWithDescriptor:(id)a0 resourceProvider:(id)a1;
- (id)recipeForDecoration:(id)a0;
- (BOOL)shouldSegment;

@end
