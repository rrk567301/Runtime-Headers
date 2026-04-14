@class _PNSafeAssetAnalyzer;

@interface PNSafeAssetAnalyzer : NSObject {
    _PNSafeAssetAnalyzer *_safeAssetAnalyzer;
}

- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (short)eligibilityStateWithAsset:(id)a0 curationContext:(id)a1;

@end
