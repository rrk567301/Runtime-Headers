@class CRDetectorConfiguration, CRPerformanceStatistics;

@interface CRNeuralTextDetector : NSObject

@property BOOL shouldCancel;
@property (retain) CRDetectorConfiguration *configuration;
@property (retain) CRPerformanceStatistics *detectorStats;
@property (retain) CRPerformanceStatistics *postProcStats;
@property (retain) CRPerformanceStatistics *inferenceStats;

+ (id)_lineRegionFromLineTextFeature:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
+ (struct CGSize { double x0; double x1; })smallestImageSizeForTextWithRelativeHeight:(double)a0 originalImageSize:(struct CGSize { double x0; double x1; })a1 configuration:(id)a2;
+ (id)textFeaturesFromPolygons:(void *)a0 withScale:(const float *)a1 withNMSOutputScale:(unsigned long long)a2;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (id)detectInImage:(id)a0 delegate:(id)a1 error:(id *)a2;
- (id)detectInImage:(id)a0 trackingSession:(id)a1 delegate:(id)a2 error:(id *)a3;
- (BOOL)preheatWithError:(id *)a0;

@end
