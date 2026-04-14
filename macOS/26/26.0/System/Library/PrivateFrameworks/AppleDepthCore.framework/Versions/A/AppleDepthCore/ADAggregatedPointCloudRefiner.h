@class ADJasperPointCloudFilterParameters;

@interface ADAggregatedPointCloudRefiner : NSObject {
    BOOL _mainIterationCameraAxisIsY;
    BOOL _mainIterationCameraAxisIncreasing;
    BOOL _prepared;
}

@property (retain, nonatomic) ADJasperPointCloudFilterParameters *filter;

- (void)clear;
- (id)init;
- (void).cxx_destruct;
- (id)pointCloudByRemovingPeridotShortRangeOccludedPoints:(id)a0;
- (struct CGPoint { double x0; double x1; })invalidSpotPixel;
- (BOOL)isSpotPixelOccluded:(struct CGPoint { double x0; double x1; })a0 prevSpotPixel:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)prepareUsingPointCloud:(id)a0;

@end
