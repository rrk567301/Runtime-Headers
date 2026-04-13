@class PXRequestedEDRHeadroomFactorFilter, NSString, PXImageModulationSettings, NSHashTable, CAContext, UXViewController;

@interface PXImageModulationManager : PXObservable <PXChangeObserver, PXSettingsKeyObserver, PXPreferencesObserver> {
    struct { BOOL enabled; BOOL lowPowerModeEnabled; BOOL active; BOOL HDRFocus; BOOL imageModulationIntensity; BOOL requestedEDRHeadroomFactor; BOOL finalRequestedEDRHeadroomFactor; BOOL desiredDynamicRange; BOOL imageLayerModulators; BOOL currentScreenSupportsHDR; } _needsUpdateFlags;
    double _lastRequestedEDRHeadroomChangeTime;
}

@property (readonly, nonatomic) PXImageModulationSettings *settings;
@property (readonly, nonatomic) NSHashTable *imageLayerModulators;
@property (readonly, nonatomic) PXRequestedEDRHeadroomFactorFilter *requestedEDRHeadroomFactorFilter;
@property (nonatomic) long long requestedEDRHeadroomSignpost;
@property (retain, nonatomic) CAContext *coreAnimationContext;
@property (nonatomic, getter=isLowPowerModeEnabled) BOOL lowPowerModeEnabled;
@property (nonatomic, getter=isApplicationActive) BOOL applicationActive;
@property (readonly, weak, nonatomic) UXViewController *rootViewController;
@property (readonly, nonatomic, getter=isMainScreen) BOOL mainScreen;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) BOOL currentScreenSupportsHDR;
@property (readonly, nonatomic) double HDRFocus;
@property (readonly, nonatomic) double imageModulationIntensity;
@property (readonly, nonatomic) double requestedEDRHeadroomFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)HDRValueForAsset:(id)a0;
+ (struct { long long x0; float x1; })optionsForAsset:(id)a0;
+ (double)_hdrGainForAsset:(id)a0;
+ (long long)_contentFormatForAsset:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (void)setActive:(BOOL)a0;
- (BOOL)_needsUpdate;
- (void)_applicationDidBecomeActive:(id)a0;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)_windowDidChangeScreen:(id)a0;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)mutableChangeObject;
- (void)didPerformChanges;
- (void)preferencesDidChange;
- (id)initWithRootViewController:(id)a0 mainScreen:(BOOL)a1;
- (id)checkoutImageLayerModulatorWithOptions:(struct { long long x0; float x1; })a0;
- (id)_checkoutImageLayerModulatorWithOptions:(struct { long long x0; float x1; })a0 contentType:(long long)a1;
- (void)checkInImageLayerModulator:(id)a0;
- (id)checkoutLivePhotoViewModulatorWithOptions:(struct { long long x0; float x1; })a0;
- (void)checkInLivePhotoViewModulator:(id)a0;
- (void)_updateImageLayerModulator:(id)a0;
- (void)setNeedsHDRFocusUpdate;
- (void)setNeedsImageModulationIntensityUpdate;
- (void)setHDRFocus:(double)a0;
- (void)setImageModulationIntensity:(double)a0;
- (void)setRequestedEDRHeadroomFactor:(double)a0;
- (void)_didStartRequestingEDRHeadroomFactor:(double)a0;
- (void)_didEndRequestingEDRHeadroomFactor:(double)a0;
- (void)_updateCoreAnimationContext;
- (void)setCurrentScreenSupportsHDR:(BOOL)a0;
- (void)_processInfoPowerStateDidChange:(id)a0;
- (void)_applicationDidResignActive:(id)a0;
- (void)_applicationDidChangeScreenParameters:(id)a0;
- (void)_invalidateEnabled;
- (void)_updateEnabledIfNeeded;
- (void)_invalidateLowPowerModeEnabled;
- (void)_updateLowPowerModeEnabledIfNeeded;
- (void)_invalidateActive;
- (void)_updateActiveIfNeeded;
- (void)_invalidateHDRFocus;
- (void)_updateHDRFocusIfNeeded;
- (void)_invalidateImageModulationIntensity;
- (void)_updateImageModulationIntensityIfNeeded;
- (void)_invalidateRequestedEDRHeadroomFactor;
- (void)_updateRequestedEDRHeadroomFactorIfNeeded;
- (void)_invalidateFinalRequestedEDRHeadroomFactor;
- (void)_updateFinalRequestedEDRHeadroomFactorIfNeeded;
- (void)_invalidateDesiredDynamicRange;
- (void)_updateDesiredDynamicRangeIfNeeded;
- (void)_invalidateImageLayerModulators;
- (void)_updateImageLayerModulatorsIfNeeded;
- (void)_invalidateCurrentScreenSupportsHDR;
- (void)_updateCurrentScreenSupportsHDRIfNeeded;

@end
