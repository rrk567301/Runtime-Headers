@class PFPosterLayout, PIParallaxStyle, NSError, NSMutableArray;
@protocol PISegmentationItem;

@interface PIParallaxCompoundLayerStackRequest : NURenderRequest {
    NSMutableArray *_requests;
    NSMutableArray *_results;
    NSError *_error;
}

@property (readonly, nonatomic) id<PISegmentationItem> segmentationItem;
@property (retain, nonatomic) PIParallaxStyle *style;
@property (retain, nonatomic) PFPosterLayout *layout;
@property (nonatomic) BOOL ignoreOriginalLayout;
@property (nonatomic) unsigned long long layerStackOptions;
@property (nonatomic, getter=isSettlingEffectEnabled) BOOL settlingEffectEnabled;
@property (nonatomic, getter=isSpatialPhotoEnabled) BOOL spatialPhotoEnabled;
@property (nonatomic, getter=userAdjustedVisibleFrame) BOOL userAdjustedVisibleFrame;
@property (nonatomic, getter=fullPhotoLuminanceCalculationEnabled) BOOL fullPhotoLuminanceCalculationEnabled;
@property (nonatomic, getter=isForegroundLayerEnabled) BOOL foregroundLayerEnabled;
@property (nonatomic) unsigned long long allowedLayoutStrategies;
@property (nonatomic) BOOL shouldRecalculateLayoutProperties;
@property (nonatomic) BOOL useLegacyHeadroom;
@property (nonatomic) BOOL updateInactiveFrame;
@property (nonatomic) BOOL updateClockZPosition;
@property (nonatomic) BOOL updateClockAreaLuminance;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)cancel;
- (void)submit:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithComposition:(id)a0;
- (long long)mediaComponentType;
- (id)newRenderJob;
- (id)effectiveLayout;
- (void)_calculateLayoutPropertiesWithOrientedLayout:(id)a0 isAuxiliary:(BOOL)a1 completion:(id /* block */)a2;
- (void)_chooseLayoutForOrientation:(long long)a0 completion:(id /* block */)a1;
- (void)_generateLayerStackForOrientation:(long long)a0 completion:(id /* block */)a1;
- (void)_recordError:(id)a0;
- (void)_recordResult:(id)a0;
- (id)_responseWithCompoundLayerStack:(id)a0;
- (void)_submit:(id /* block */)a0;
- (void)_submitClockMaterialRequestWithLayerStack:(id)a0 completion:(id /* block */)a1;
- (void)_submitClockOverlapRequestWithLayout:(id)a0 completion:(id /* block */)a1;
- (void)_submitInactiveLayoutRequestWithOrientedLayout:(id)a0 completion:(id /* block */)a1;
- (void)_submitLayerStackRequestForMode:(long long)a0 layout:(id)a1 auxiliaryLayout:(id)a2 completion:(id /* block */)a3;
- (void)_submitLayerStackRequestForMode:(long long)a0 layout:(id)a1 completion:(id /* block */)a2;
- (void)_submitLayerStackRequestsWithLayout:(id)a0 auxiliaryLayout:(id)a1 orientation:(long long)a2 completion:(id /* block */)a3;
- (void)_submitSpatialPhotoInactiveDataRequestWithLayerStack:(id)a0 completion:(id /* block */)a1;
- (id)initWithSegmentationItem:(id)a0;

@end
