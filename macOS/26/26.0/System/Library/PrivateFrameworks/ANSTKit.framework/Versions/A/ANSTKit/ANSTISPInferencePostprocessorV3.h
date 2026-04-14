@class NSIndexSet, ANSTISPInferenceConfiguration, ANSTPixelBufferDescriptor;

@interface ANSTISPInferencePostprocessorV3 : ANSTISPInferencePostprocessor {
    ANSTISPInferenceConfiguration *_configuration;
    ANSTPixelBufferDescriptor *_inputImageDescriptor;
    struct AcANSTContext { } *_det;
    struct { struct { unsigned int height; unsigned int width; unsigned int channels; int pixelFormat; float scale; float bias; } netInputBufferDesc[2]; struct { unsigned int height; unsigned int width; unsigned int channels; int pixelFormat; float scale; float bias; } netOutputBufferDescs[40]; char netInputNames[2][64]; char netOutputNames[40][64]; unsigned int maxResultCount; unsigned int maxAssoCount; unsigned int maxTrackCount; float undetOverlapThreshold; float oldObjOverlapThreshold; float oldCrossClassObjOverlapThreshold; } _detParams;
    struct { unsigned char data[208544]; } _detState;
    struct { unsigned int originalImageWidth; unsigned int originalImageHeight; unsigned int networkInputWidth; unsigned int networkInputHeight; int imageOrientation; int networkInputResolution; unsigned char restart; int runningFrameRate; unsigned char initWithDetResults; struct { float x; float y; float width; float height; } besCropInfo; int version; float focalLength; unsigned char runSkinTone; unsigned char runBodyKepoints; } _detControl;
    NSIndexSet *_skipIndexSet;
}

- (void)dealloc;
- (BOOL)resetWithError:(id *)a0;
- (void).cxx_destruct;
- (float)smudgeConfidence;
- (BOOL)_destroyRTCVWithError:(id *)a0;
- (BOOL)_initializeRTCVWithError:(id *)a0;
- (BOOL)_processWithError:(id *)a0;
- (id)initWithInferenceDescriptor:(id)a0 error:(id *)a1;
- (id)initWithInferenceInputDescriptors:(id)a0 inferenceOutputDescriptors:(id)a1 processedOutputDescriptors:(id)a2 error:(id *)a3;
- (BOOL)processWithError:(id *)a0;
- (id)semanticSegmentationMaskDescriptorOfCategory:(id)a0;
- (id)trackedObjectsOfCategory:(id)a0;

@end
