@class NSSet, NSString, NSMutableDictionary, MTMaterialSettingsInterpolator, NSHashTable;
@protocol MTRecipeMaterialSettingsProviding;

@interface MTMaterialLayer : CABackdropLayer {
    MTMaterialSettingsInterpolator *_settingsInterpolator;
    MTMaterialSettingsInterpolator *_previousSettingsInterpolator;
    char _needsConfiguring;
    char _blurEnabled;
    char _zoomEnabled;
    id /* block */ _backdropScaleAdjustment;
    char _shouldCrossfade;
    char _contentReplacedWithSnapshot;
    NSMutableDictionary *_pendingChange;
    NSMutableDictionary *_visualStyleCategoriesToProviders;
    NSHashTable *_prunePromises;
    long long _allowsInPlaceFiltering;
    struct { unsigned char delegateManagesWeighting : 1; unsigned char delegateImplementsManagingOpacity : 1; unsigned char delegateImplementsManagingInterpolation : 1; } _materialLayerDelegateFlags;
}

@property (class, readonly, nonatomic) NSSet *mt_animatableKeys;
@property (class, readonly, nonatomic) NSSet *mt_implicitlyAnimatableKeys;

@property (copy, nonatomic) NSString *recipeName;
@property (nonatomic, getter=isBlurEnabled) char blurEnabled;
@property (nonatomic, getter=isZoomEnabled) char zoomEnabled;
@property (copy, nonatomic) id /* block */ backdropScaleAdjustment;
@property (readonly, nonatomic, getter=_backdropScale) double backdropScale;
@property (copy, nonatomic) id /* block */ blurRadiusTransformer;
@property (nonatomic) char shouldCrossfade;
@property (nonatomic, getter=isContentReplacedWithSnapshot) char contentReplacedWithSnapshot;
@property (readonly, nonatomic, getter=_privateOpacity) double privateOpacity;
@property (readonly, nonatomic, getter=_hasInoperativeAppearance) char hasInoperativeAppearance;
@property (retain, nonatomic, getter=_recipeSettings, setter=_setRecipeSettings:) id<MTRecipeMaterialSettingsProviding> recipeSettings;
@property (copy, nonatomic) id /* block */ defaultBackdropScaleAdjustment;
@property (copy, nonatomic) NSString *recipe;
@property (nonatomic) double weighting;
@property (nonatomic, getter=isReduceTransparencyEnabled) char reduceTransparencyEnabled;
@property (nonatomic, getter=isReduceMotionEnabled) char reduceMotionEnabled;
@property (copy, nonatomic) NSString *debugIdentifier;

+ (void)initialize;
+ (id)CA_attributes;
+ (id)_attributeKeys;
+ (id)_unserializedAttributeKeys;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)didChangeValueForKey:(id)a0;
- (void)setDelegate:(id)a0;
- (void)willChangeValueForKey:(id)a0;
- (void)layoutSublayers;
- (void)addAnimation:(id)a0 forKey:(id)a1;
- (char)allowsInPlaceFiltering;
- (void)setAllowsInPlaceFiltering:(char)a0;
- (void)setUnsafeUnretainedDelegate:(id)a0;
- (char)shouldArchiveValueForKey:(id)a0;
- (void)prune;
- (void)_adjustScaleOfBackdropLayer:(id)a0 ifNecessaryWithSettingsInterpolator:(id)a1;
- (void)_configureBackdropLayer:(id)a0 withSettingsInterpolator:(id)a1 preservingFiltersIfIdentity:(char)a2;
- (void)_configureBackdropLayerIfNecessaryWithSettingsInterpolator:(id)a0;
- (void)_configureDelegateFlagsForDelegate:(id)a0;
- (void)_configureIfNecessaryWithSettingsInterpolator:(id)a0;
- (char)_delegateManagesWeighting;
- (char)_didValueChangeForKey:(id)a0 withPendingChange:(id)a1;
- (id)_effectiveDebugIdentifier;
- (char)_isDelegateManagingInterpolation;
- (char)_isDelegateManagingOpacity;
- (char)_isInPlaceFilteringPossibleWithSettingsInterpolator:(id)a0;
- (char)_needsPruning;
- (void)_pruneAtCompletionOfCurrentTransaction;
- (void)_reevaluateDefaultShouldCrossfade;
- (void)_setHasInoperativeAppearance:(char)a0 removingIfIdentity:(char)a1;
- (void)_setNeedsConfiguring;
- (void)_setPrivateOpacity:(double)a0 removingIfIdentity:(char)a1;
- (void)_updateForChangeInRecipeAndConfiguration;
- (void)_updateForChangeInWeighting;
- (void)_updateVisualStylingProviders;
- (void)setRecipeName:(id)a0 fromBundle:(id)a1;
- (id)visualStylingProviderForCategory:(id)a0;

@end
