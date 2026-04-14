@interface PESupport : NSObject

+ (BOOL)photoWasTakenWithoutFlashWithImageProperties:(id)a0;
+ (void)syncMainThread:(id /* block */)a0;
+ (id)repairedAsShotCompositionController:(id)a0 forCurrentCompositionController:(id)a1;
+ (id)originalAdjustmentVersionForAsset:(id)a0;
+ (BOOL)assetHasUnsupportedOriginalAdjustments:(id)a0;
+ (BOOL)canPerformEditOnAsset:(id)a0;

@end
