@class NSArray, NSMutableArray, NSValue;

@interface PXLayoutMetricInterpolator : NSObject {
    struct { BOOL referenceValuesByMetricsOrder; } _needsUpdateFlags;
}

@property (class, readonly, nonatomic) NSArray *allLayoutMetricConfigurationSizes;

@property (readonly, nonatomic) NSMutableArray *_referenceValuesByMetrics;
@property (nonatomic, setter=_setCachedMetric:) double _cachedMetric;
@property (retain, nonatomic, setter=_setCachedValue:) NSValue *_cachedValue;

+ (id)memoriesFeedInteritemSpacingInterpolator;
+ (id)memoriesFeedPortraitEdgeInsetsInterpolator;
+ (id)memoriesFeedLandscapeEdgeInsetsInterpolator;
+ (id)memoriesDetailsEdgeInsetsInterpolator;
+ (id)memoriesItemWidthInterpolator;
+ (id)albumsGridEdgeInsetsInterpolator;
+ (id)albumsGridItemWidthInterpolator;
+ (id)_sharedGridEdgeInsetsInterpolator;
+ (id)_sharedGridItemWidthInterpolator;
+ (id)_gridItemWidthInterpolatorWithGridEdgeInsetsInterpolator:(id)a0;
+ (id)legacyLayoutMarginWidthInterpolator;
+ (id)photosDetailsEdgeInsetsInterpolator;
+ (id)layoutMarginWidthInterpolator;
+ (id)gadgetColumnSpacingSpanSingleSetAInterpolator;
+ (id)gadgetColumnWidthSpanSingleSetAInterpolator;
+ (id)gadgetColumnSpacingSpanDoubleSetAInterpolator;
+ (id)gadgetColumnWidthSpanDoubleSetAInterpolator;
+ (id)gadgetColumnSpacingSpanDoubleSetBInterpolator;
+ (id)gadgetColumnWidthSpanDoubleSetBInterpolator;
+ (long long)photosGridSizeSubclassForScreenSize:(struct CGSize { double x0; double x1; })a0;
+ (unsigned long long)photosGridLayoutColumnsForWidth:(double)a0;
+ (struct CGSize { double x0; double x1; })zoomableGridLayoutSmallItemSizeForWidth:(double)a0;
+ (struct CGSize { double x0; double x1; })bestItemSizeForAvailableWidth:(double)a0 screenScale:(double)a1 columns:(unsigned long long)a2 bestSpacing:(double *)a3 bestInset:(double *)a4;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)_setNeedsUpdate;
- (void)_invalidateReferenceValuesByMetricsOrder;
- (void)_updateReferenceValuesByMetricsOrderIfNeeded;
- (void)setReferenceValue:(double)a0 forMetric:(double)a1;
- (void)_getReferenceValueForMetric:(double)a0 exactMatch:(id *)a1 closestBeforeMatch:(id *)a2 closestAfterMatch:(id *)a3;
- (id)_valueForMetric:(double)a0 fromInterpolationBetweenValue:(id)a1 secondValue:(id)a2;
- (double)valueForMetric:(double)a0;

@end
