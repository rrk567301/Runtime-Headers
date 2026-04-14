@class NSMutableSet, NSMutableDictionary;

@interface VNSmartCam5CompoundRequestGroupingConfiguration : NSObject {
    unsigned long long _imageCropAndScaleOption;
    NSMutableSet *_originalRequests;
    NSMutableDictionary *_detectorConfigurationOptions;
}

- (void)setDetectorConfigurationOption:(id)a0 value:(id)a1;
- (id)detectorConfigurationOptions;
- (id)originalRequests;
- (void).cxx_destruct;
- (void)addOriginalRequest:(id)a0;
- (unsigned long long)imageCropAndScaleOption;
- (id)initWithImageCropAndScaleOption:(unsigned long long)a0;
- (BOOL)preferBackgroundProcessing;
- (id)processingDevice;

@end
