@interface ImagePlayground.GPServiceSideExportedObject : _TtCs12_SwiftObject <ImagePlayground.GPServiceProtocol> {
    void /* unknown type, empty encoding */ _promptElements;
    void /* unknown type, empty encoding */ _image;
    void /* unknown type, empty encoding */ _recipeData;
    void /* unknown type, empty encoding */ extensionState;
    void /* unknown type, empty encoding */ composingViewModel;
    void /* unknown type, empty encoding */ playgroundHomeViewModel;
}

- (void)setSourceImage:(id)a0;
- (void)didFinishServiceConfiguration;
- (void)setIsLoadingRecipe:(BOOL)a0;
- (void)setPromptElements:(id)a0;
- (void)setRecipeData:(id)a0;
- (void)startUpscaling;
- (void)willBeginServiceConfiguration;

@end
