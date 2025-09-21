@interface PESupport : NSObject

+ (id)repairedAsShotCompositionController:(id)a0 forCurrentCompositionController:(id)a1 isLivePhoto:(char)a2 metadata:(id)a3;
+ (void)syncMainThread:(id /* block */)a0;
+ (void)assetAudioMixMode:(id)a0 queue:(id)a1 handler:(id /* block */)a2;
+ (char)assetCanRenderStyles:(id)a0;
+ (void)assetHasDepthEnabled:(id)a0 queue:(id)a1 handler:(id /* block */)a2;
+ (char)assetHasUnsupportedOriginalAdjustments:(id)a0;
+ (void)assetPlaybackRate:(id)a0 queue:(id)a1 handler:(id /* block */)a2;
+ (char)canPerformEditOnAsset:(id)a0;
+ (id)originalAdjustmentVersionForAsset:(id)a0;
+ (id)pe_bundle;
+ (char)photoLibraryIsEligibleForStylesSetupTip:(id)a0;
+ (char)photoWasTakenWithoutFlashWithImageProperties:(id)a0;
+ (void)revertEditsForAsset:(id)a0 mediaDestination:(id)a1 currentCompositionController:(id)a2 completionHandler:(id /* block */)a3;
+ (char)sharedPhotoLibraryIsEligibleForStylesSetupTip;

@end
