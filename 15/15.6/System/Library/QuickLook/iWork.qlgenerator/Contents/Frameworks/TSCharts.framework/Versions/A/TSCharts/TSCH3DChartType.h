@class NSSet, NSString;
@protocol TSCH3DAxisLabelPositioner;

@interface TSCH3DChartType : TSCH2DChartType

@property (class, readonly, copy, nonatomic) NSSet *allAnimationFilters;

@property (readonly, copy, nonatomic) NSSet *animationFilters;
@property (readonly, nonatomic) int labelOrientation;
@property (readonly, nonatomic) id<TSCH3DAxisLabelPositioner> valueLabelPositioner;
@property (readonly, nonatomic) id<TSCH3DAxisLabelPositioner> categoryLabelPositioner;
@property (readonly, nonatomic) Class stageClass;
@property (readonly, nonatomic) char supportsColumnShape;
@property (readonly, nonatomic) char supportsBevels;
@property (readonly, nonatomic) char supportsInterSetDepthGap;
@property (readonly, nonatomic) char needsRefinementForInwardLayout;
@property (readonly, nonatomic) char isHomogeneous;
@property (readonly, nonatomic) NSString *columnShapeUIName;
@property (readonly, nonatomic) id renderers;
@property (readonly, nonatomic) double minDepthRatio;
@property (readonly, nonatomic) double sageMaxDepthRatio;
@property (readonly, nonatomic) double spiceMaxDepthRatio;
@property (readonly, nonatomic) unsigned long long depthRatioDimension;

+ (struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })adjustedScaleForInfoChartScale:(void *)a0 chartType:(id)a1 barShape:(int)a2;

- (Class)layoutClass;
- (Class)repClass;
- (char)supportsValueAxisLabelsPosition;
- (struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })adjustedScaleForInfoChartScale:(void *)a0 barShape:(int)a1;
- (id)animationDeliveryStylesForFilter:(id)a0;
- (id)animationFiltersWithDefaultFilters:(id)a0;
- (char)approximatesTitleAccommodationUsingLegendSize;
- (int)chartBodyBoundsDefinition;
- (Class)chartLayoutClass;
- (Class)chartLayoutItemClass;
- (int)deprecated3DBevelEdgesSpecificProperty;
- (int)deprecated3DShadowSpecificProperty;
- (char)layoutFrameShouldEncloseInfoGeometry;
- (int)majorGridlineStrokeProperty;
- (double)maxDepthRatio;
- (struct CGSize { double x0; double x1; })minimumChartBodySize;
- (struct CGSize { double x0; double x1; })minimumChartBodySizeForTransformingGeometry;
- (unsigned long long)presentationDimension;
- (Class)presetImagerClass;
- (Class)sageGeometeryHelperClass;
- (id)sceneWithChartInfo:(id)a0 layoutSettings:(struct { char x0; char x1; char x2; char x3; char x4; char x5; char x6; char x7; long long x8; unsigned long long x9; })a1 styleProvidingSource:(id)a2;
- (char)supportsAxisLabelAngle;
- (char)supportsAxisLabelsOrientation;
- (char)supportsAxisLine;
- (char)supportsBackgroundFill;
- (char)supportsBorderFrame;
- (char)supportsBorderStroke;
- (char)supportsBubbleOptions;
- (char)supportsCalloutLines;
- (char)supportsCategoryAxisMinorTickmarks;
- (char)supportsConnectingLines;
- (char)supportsErrorBars;
- (char)supportsGridlineShadow;
- (char)supportsGridlineTickmarks;
- (char)supportsGroupedShadows;
- (char)supportsIncrementalResize;
- (char)supportsMinorGridlines;
- (char)supportsReferenceLines;
- (char)supportsSeriesFill;
- (char)supportsSeriesShadow;
- (char)supportsSeriesStroke;
- (char)supportsShadowOffset;
- (char)supportsTickmarks;
- (char)supportsTrendLines;
- (char)supportsValueLabelSpacing;

@end
