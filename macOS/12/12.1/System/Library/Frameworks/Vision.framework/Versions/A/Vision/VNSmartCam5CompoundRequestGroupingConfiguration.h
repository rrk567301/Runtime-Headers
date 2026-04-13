@class NSMutableSet, NSMutableDictionary;

@interface VNSmartCam5CompoundRequestGroupingConfiguration : NSObject {
    unsigned long long _imageCropAndScaleOption;
    NSMutableSet *_originalRequests;
    NSMutableDictionary *_detectorConfigurationOptions;
}

- (void).cxx_destruct;
- (id)detectorConfigurationOptions;
- (id)originalRequests;
- (void)setDetectorConfigurationOption:(id)a0 value:(id)a1;
- (unsigned long long)imageCropAndScaleOption;
- (id)processingDevice;
- (BOOL)preferBackgroundProcessing;
- (id)initWithImageCropAndScaleOption:(unsigned long long)a0;
- (void)addOriginalRequest:(id)a0;

@end
