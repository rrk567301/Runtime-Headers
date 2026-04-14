@class NSDictionary;

@interface TSCH3DChartPlatformSettings : NSObject {
    NSDictionary *_settings;
}

+ (id)sharedInstance;
+ (BOOL)isMetalExcludedWithCapabilities:(id)a0;
+ (BOOL)p_isMetalEnabled;
+ (id)p_defaultSettingsDictionary;
+ (id)p_platformSettingsDictionary;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)useMetal;
- (BOOL)skipFirstMipmapLevel;
- (unsigned long long)buildImageTileSize;
- (BOOL)buildImageDefaultAntialias;
- (unsigned long long)buildMultisamples;
- (BOOL)buildShouldDiscardBuffers;
- (double)buildTargetFPS;
- (BOOL)buildsUseLowDetailedGeometries;
- (BOOL)buildsCanUseDynamicShadows;
- (BOOL)buildTextureRendersAsSingleImage;
- (unsigned long long)buildFramebufferMemoryLimitInBytes;
- (unsigned long long)supersamplingTileSize;
- (unsigned long long)supersamplingSamples;
- (unsigned long long)insertionIconSupersamplingSamples;
- (double)printingDPI;
- (unsigned long long)printingMaxImageSize;
- (unsigned long long)labelMaxTextureSize;
- (unsigned long long)resourceCacheMemoryLimitInBytes;
- (BOOL)interactiveCanvasCanUseHighQualityRenderer;
- (unsigned long long)interactiveCanvasMultisamples;
- (BOOL)interactiveModeUsesFastPerformanceHint;
- (BOOL)knobTrackingUsesRealTimePerformanceHint;
- (BOOL)useInteractiveModeWhileSelected;
- (BOOL)useLayoutInwardForInsertionIcons;
- (int)p_labelPickingSlackMethod;
- (float)p_labelPickingSlack;
- (float)normalizedLabelPickingSlackForViewScale:(double)a0 viewport:(const void *)a1;
- (float)rotationTrackerSpeed;
- (BOOL)useHighQualityShadows;
- (unsigned long long)highQualityShadowsSize;
- (BOOL)useTiledFullSizeInteractiveLayer;
- (float)prefilteredLinesFilterRadius;
- (BOOL)protectCachedShaders;
- (double)backgroundLayoutContentsScaleFactor;
- (BOOL)backgroundLayoutUsesTiledRendering;
- (BOOL)shouldHandleResourceCacheOutOfMemory;

@end
