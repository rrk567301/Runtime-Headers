@interface ImagePlaygroundInternal.GPServiceSideExportedObject : _TtCs12_SwiftObject <ImagePlayground.GPServiceProtocol> {
    void /* unknown type, empty encoding */ extensionState;
    void /* unknown type, empty encoding */ composingViewModel;
    void /* unknown type, empty encoding */ playgroundHomeViewModel;
    void /* unknown type, empty encoding */ deferredConfigurationHandlers;
}

- (void)setRecipeData:(id)a0;
- (void)setSourceImage:(id)a0;
- (void)routeTo:(long long)a0;
- (void)didDismissPickerWithStagedAssets:(id)a0;
- (void)didFinishServiceConfiguration;
- (void)didStageAssetWithIdentifier:(id)a0;
- (void)didUnstageAssetWithIdentifier:(id)a0;
- (void)setAllowedGenerationStyles:(id)a0;
- (void)setImageImportPolicy:(id)a0;
- (void)setIsLoadingRecipe:(BOOL)a0;
- (void)setPersonalizationPolicy:(id)a0;
- (void)setPreGeneratedImage:(id)a0;
- (void)setPreviewAspectRatio:(id)a0;
- (void)setPromptElements:(id)a0;
- (void)setResponsibleAuditToken:(id)a0;
- (void)setSelectedGenerationStyle:(id)a0;
- (void)startUpscaling;
- (void)willBeginServiceConfiguration;

@end
