@class NSString, CAFilter, CALayer, PXGainMapAnimationDurationFilter;

@interface PXImageLayerModulator : NSObject <PXMutableImageLayerModulator_Private> {
    char _isPerformingChanges;
    char _isPerformingUpdates;
    struct { char filterInput; char filter; char filteredLayer; char displayingVideoComplement; char filterIntensity; char gainMapVisibility; char gainMapAppearance; } _needsUpdateFlags;
}

@property (readonly, nonatomic) struct { long long contentFormat; long long filterType; float hdrGain; long long fallbackFilterType; float fallbackHdrGain; } options;
@property (readonly, nonatomic) long long filterType;
@property (readonly, nonatomic) float hdrGain;
@property (readonly, nonatomic) CAFilter *filter;
@property (retain, nonatomic) NSString *layerFilterIntensityKeyPath;
@property (retain, nonatomic) CALayer *filteredLayer;
@property (retain, nonatomic) CALayer *gainMapLayer;
@property (nonatomic) char animateGainMapAppearance;
@property (retain, nonatomic) PXGainMapAnimationDurationFilter *gainMapAnimationDurationFilter;
@property (nonatomic) double intensityAnimationDuration;
@property (readonly, nonatomic, getter=isEnabled) char enabled;
@property (readonly, nonatomic) double intensity;
@property (readonly, nonatomic) CALayer *layer;
@property (readonly, nonatomic, getter=isDisplayingVideoComplement) char displayingVideoComplement;
@property (readonly, nonatomic, getter=isDisplayingOpaqueContent) char displayingOpaqueContent;
@property (readonly, nonatomic) struct CGImage { } *gainMapImage;
@property (readonly, nonatomic) float gainMapValue;
@property (readonly, nonatomic) char revealsGainMapImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGImage { } *)_gainMapPlaceholderImage;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setEnabled:(char)a0;
- (void)prepareForReuse;
- (id)initWithOptions:(struct { long long x0; long long x1; float x2; long long x3; float x4; })a0;
- (void)setFilter:(id)a0;
- (void)setLayer:(id)a0;
- (void)setIntensity:(double)a0;
- (void)setFilterType:(long long)a0;
- (void)setHdrGain:(float)a0;
- (char)_needsUpdate;
- (void)performChanges:(id /* block */)a0;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (void)_updateFilter;
- (void)_addFilterToLayer:(id)a0;
- (void)_invalidateFilter;
- (void)_invalidateFilterInput;
- (void)_invalidateFilterIntensity;
- (void)_invalidateFilteredLayer;
- (void)_invalidateGainMapAppearance;
- (void)_invalidateGainMapVisibility;
- (void)_removeFilterFromLayer:(id)a0;
- (void)_updateFilterInput;
- (void)_updateFilterIntensityIfNeeded;
- (void)_updateFilteredLayerIfNeeded;
- (void)_updateGainMapAppearance;
- (void)_updateGainMapVisibility;
- (void)animateChangesWithDuration:(double)a0;
- (void)performChanges_Private:(id /* block */)a0;
- (void)removeFilterFromUnownedLayer:(id)a0;
- (void)setDisplayingOpaqueContent:(char)a0;
- (void)setDisplayingVideoComplement:(char)a0;
- (void)setGainMapImage:(struct CGImage { } *)a0;
- (void)setGainMapImage:(struct CGImage { } *)a0 animated:(char)a1;
- (void)setGainMapValue:(float)a0;
- (void)setRevealsGainMapImage:(char)a0;

@end
