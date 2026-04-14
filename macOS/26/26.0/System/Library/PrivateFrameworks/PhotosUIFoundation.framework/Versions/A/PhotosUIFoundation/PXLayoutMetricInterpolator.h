@class NSArray, NSMutableArray, NSValue;

@interface PXLayoutMetricInterpolator : NSObject {
    struct { BOOL referenceValuesByMetricsOrder; } _needsUpdateFlags;
}

@property (class, readonly, nonatomic) NSArray *allLayoutMetricConfigurationSizes;

@property (readonly, nonatomic) NSMutableArray *_referenceValuesByMetrics;
@property (nonatomic, setter=_setCachedMetric:) double _cachedMetric;
@property (retain, nonatomic, setter=_setCachedValue:) NSValue *_cachedValue;

+ (struct CGSize { double x0; double x1; })bestItemSizeForAvailableWidth:(double)a0 screenScale:(double)a1 columns:(unsigned long long)a2 bestSpacing:(double *)a3 bestInset:(double *)a4;
+ (id)gadgetColumnSpacingSpanDoubleSetAInterpolator;
+ (id)gadgetColumnSpacingSpanDoubleSetBInterpolator;
+ (id)gadgetColumnSpacingSpanSingleSetAInterpolator;
+ (id)gadgetColumnWidthSpanDoubleSetAInterpolator;
+ (id)gadgetColumnWidthSpanDoubleSetBInterpolator;
+ (id)gadgetColumnWidthSpanSingleSetAInterpolator;
+ (double)locketGadgetColumnWidthForLayoutWidth:(struct CGSize { double x0; double x1; })a0 layoutMargins:(double)a1 interSpacing:(double)a2 isPhone:(BOOL)a3;
+ (id)memoriesDetailsEdgeInsetsInterpolator;
+ (id)memoriesFeedInteritemSpacingInterpolator;
+ (id)memoriesFeedLandscapeEdgeInsetsInterpolator;
+ (id)memoriesFeedPortraitEdgeInsetsInterpolator;
+ (id)memoriesItemWidthInterpolator;
+ (unsigned long long)photosGridLayoutColumnsForWidth:(double)a0;
+ (id)albumsGridItemWidthInterpolator;
+ (id)_gridItemWidthInterpolatorWithGridEdgeInsetsInterpolator:(id)a0;
+ (id)_sharedGridEdgeInsetsInterpolator;
+ (id)_sharedGridItemWidthInterpolator;
+ (id)albumsGridEdgeInsetsInterpolator;
+ (id)layoutMarginWidthInterpolator;
+ (id)legacyLayoutMarginWidthInterpolator;
+ (id)photosDetailsEdgeInsetsInterpolator;
+ (long long)photosGridSizeSubclassForScreenSize:(struct CGSize { double x0; double x1; })a0;
+ (struct CGSize { double x0; double x1; })zoomableGridLayoutSmallItemSizeForWidth:(double)a0;

- (void)_setNeedsUpdate;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (double)valueForMetric:(double)a0;
- (void)setReferenceValue:(double)a0 forMetric:(double)a1;
- (void)_getReferenceValueForMetric:(double)a0 exactMatch:(id *)a1 closestBeforeMatch:(id *)a2 closestAfterMatch:(id *)a3;
- (void)_invalidateReferenceValuesByMetricsOrder;
- (void)_updateReferenceValuesByMetricsOrderIfNeeded;
- (id)_valueForMetric:(double)a0 fromInterpolationBetweenValue:(id)a1 secondValue:(id)a2;

@end
