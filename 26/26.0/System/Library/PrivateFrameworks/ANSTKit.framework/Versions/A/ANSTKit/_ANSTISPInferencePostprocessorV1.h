@class NSString, ANSTISPInferenceConfiguration, NSArray;

@interface _ANSTISPInferencePostprocessorV1 : ANSTISPInferencePostprocessor {
    ANSTISPInferenceConfiguration *_configuration;
    NSString *_inferenceInputImageDescriptorName;
    unsigned long long _inferenceInputImageWidth;
    unsigned long long _inferenceInputImageHeight;
    NSArray *_inferenceOutputTensorDescriptorNames;
    struct AcANSTContext { } *_det;
    struct { struct { unsigned int height; unsigned int width; unsigned int channels; int pixelFormat; float scale; float bias; } netInputBufferDesc[2]; struct { unsigned int height; unsigned int width; unsigned int channels; int pixelFormat; float scale; float bias; } netOutputBufferDescs[40]; char netInputNames[2][64]; char netOutputNames[40][64]; unsigned int maxResultCount; unsigned int maxAssoCount; unsigned int maxTrackCount; float undetOverlapThreshold; float oldObjOverlapThreshold; float oldCrossClassObjOverlapThreshold; } _detParams;
    struct { unsigned char data[208544]; } _detState;
}

+ (id)_semanticCategories;
+ (id)_semanticSegmentationMaskDescriptorNameOfCategory:(id)a0;
+ (id)_semanticSegmentationMaskDescriptorsForInferenceDescriptor:(id)a0 maskPixelFormatType:(unsigned int)a1;

- (void)dealloc;
- (BOOL)resetWithError:(id *)a0;
- (void).cxx_destruct;
- (float)smudgeConfidence;
- (BOOL)_destroyRTCVWithError:(id *)a0;
- (BOOL)_getInputImageAcOrientation:(int *)a0 withError:(id *)a1;
- (BOOL)_initializeRTCVWithError:(id *)a0;
- (BOOL)_populateAcANSTNetOutput:(int)a0 intoSegmanticSegmentationMask:(id)a1 withError:(id *)a2;
- (id)initWithInferenceDescriptor:(id)a0 error:(id *)a1;
- (id)initWithInferenceInputDescriptors:(id)a0 inferenceOutputDescriptors:(id)a1 processedOutputDescriptors:(id)a2 error:(id *)a3;
- (BOOL)processWithError:(id *)a0;
- (id)semanticSegmentationMaskDescriptorOfCategory:(id)a0;
- (id)trackedObjectsOfCategory:(id)a0;

@end
