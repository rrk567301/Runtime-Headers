@class NSDictionary;

@interface TSCH3DChartPlatformSettings : NSObject {
    NSDictionary *_settings;
}

+ (id)sharedInstance;
+ (char)isMetalExcludedWithCapabilities:(id)a0;
+ (id)p_defaultSettingsDictionary;
+ (char)p_isMetalEnabled;
+ (id)p_platformSettingsDictionary;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)resourceCacheMemoryLimitInBytes;
- (char)useInteractiveModeWhileSelected;
- (double)backgroundLayoutContentsScaleFactor;
- (char)backgroundLayoutUsesTiledRendering;
- (unsigned long long)buildFramebufferMemoryLimitInBytes;
- (char)buildImageDefaultAntialias;
- (unsigned long long)buildImageTileSize;
- (unsigned long long)buildMultisamples;
- (char)buildShouldDiscardBuffers;
- (double)buildTargetFPS;
- (char)buildTextureRendersAsSingleImage;
- (char)buildsCanUseDynamicShadows;
- (char)buildsUseLowDetailedGeometries;
- (unsigned long long)highQualityShadowsSize;
- (unsigned long long)insertionIconSupersamplingSamples;
- (char)interactiveCanvasCanUseHighQualityRenderer;
- (unsigned long long)interactiveCanvasMultisamples;
- (char)interactiveModeUsesFastPerformanceHint;
- (char)knobTrackingUsesRealTimePerformanceHint;
- (unsigned long long)labelMaxTextureSize;
- (float)normalizedLabelPickingSlackForViewScale:(double)a0 viewport:(void *)a1;
- (float)p_labelPickingSlack;
- (int)p_labelPickingSlackMethod;
- (float)prefilteredLinesFilterRadius;
- (double)printingDPI;
- (unsigned long long)printingMaxImageSize;
- (char)protectCachedShaders;
- (float)rotationTrackerSpeed;
- (char)shouldHandleResourceCacheOutOfMemory;
- (char)skipFirstMipmapLevel;
- (unsigned long long)supersamplingSamples;
- (unsigned long long)supersamplingTileSize;
- (char)useHighQualityShadows;
- (char)useLayoutInwardForInsertionIcons;
- (char)useMetal;
- (char)useTiledFullSizeInteractiveLayer;

@end
